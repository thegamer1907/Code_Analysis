#include<bits/stdc++.h>

using namespace std;

const int maxi=1e6+7;
int a[maxi];
vector<int> v[maxi];
int n,m;
string s;
int main()
{
    cin>>n>>m;

    for (int i=1;i<=n;i++)
        cin>>a[i];

    sort(a+1,a+n+1);

    int mm=m+a[n];


    for (int i=1;i<=m;i++)
    {
         int mi=1e7;
         int poz=0;
        for (int j=1;j<=n;j++)
        if (a[j]<mi)
        {
            mi=a[j];
            poz=j;
        }

            a[poz]++;
    }

   sort(a+1,a+n+1);

   cout<<a[n]<<" "<<mm<<endl;

    return 0;
}
//pre rucka da se zabavim malo
