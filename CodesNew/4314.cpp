#include <iostream>

using namespace std;

string lexi(string a, string b)
{
    while(b.size()<a.size())
    {
        b+='Z';
    }
    int i=0;
    string e="";
    while(a[i]==b[i])
    {
        e+=a[i];
        i++;
    }
    int h=i;
    while(a[h]>b[i])
    {
        h++;
    }
    return e;
}

int main()
{
    int n;
    cin >> n;
    string A[n];
    for(int i=0; i<n; i++)
    {
        cin >> A[i];
    }
    for(int i=n-2; i>-1; i--)
    {
        if(A[i]>A[i+1])
        {
            A[i]=lexi(A[i],A[i+1]);
        }
    }
    for(int i=0; i<n; i++)
    {
        cout << A[i] << endl;
    }
}

