#include <iostream>
#include <fstream>
using namespace std;

struct elem
{
    long long penz, ff;
}tomb[100000];

void beolvas(long long n, elem tomb[], istream &in)
{
    for(long long i=0; i<n; i++)
    {
        in>>tomb[i].penz;
        in>>tomb[i].ff;
    }
    //in.close();
}

void Merge(elem tomb1[], elem tomb2[], long long n1, long long n2)
{
    elem bal[50001];
    for(long long i=0; i<n1; i++)
        bal[i] = tomb1[i];

    long long i=0, j=0, index=0;
    while(i<n1 && j<n2)
    {
        if(bal[i].penz <= tomb2[j].penz)
            tomb1[index++] = bal[i++];
        else
            tomb1[index++] = tomb2[j++];
    }
    while(i<n1)
        tomb1[index++] = bal[i++];
    while(j<n2)
        tomb1[index++] = tomb2[j++];
}

void Sort(elem tomb[], long long n)
{
    long long k = n/2;
    if(n>1)
    {
        Sort(tomb, k);
        Sort(tomb+k, n-k);
        Merge(tomb,tomb+k, k, n-k);
    }
}

void osszeg_felepit(elem tomb[], long long n, long long ossz[])
{
    ossz[0] = tomb[0].ff;
    for(long long i=1; i<n; i++)
        ossz[i] = ossz[i-1] + tomb[i].ff;
}

long long bin_kereses(elem tomb[], long long n, long long hatar)
{
    long long e=0, v=n-1;
    while(e<v)
    {
        long long k=(e+v+1)/2;
        if(tomb[k].penz >= hatar)
            v = k-1;
        else
            e = k;
    }
    return e;
}

long long feladat(elem tomb[], long long n, long long ossz[], long long d)
{
    long long maxim = -1;
    for(long long i=0; i<n; i++)
    {
        long long index = bin_kereses(tomb, n, tomb[i].penz+d);
        long long osszeg;
        if(i)
            osszeg = ossz[index] - ossz[i-1];
        else
            osszeg = ossz[index];
        if(osszeg >= maxim)
            maxim = osszeg;
    }
    return maxim;
}

int main()
{
    //ifstream in("in.txt");
    long long n, d, ossz[100000];
    cin>>n>>d;
    beolvas(n, tomb, cin);
    Sort(tomb, n);
    osszeg_felepit(tomb, n, ossz);
    cout<<feladat(tomb, n, ossz, d);
    return 0;
}
