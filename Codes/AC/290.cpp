#include <bits/stdc++.h> 
using namespace std;
int a[1000002];
long long n,z,m,p=1;
int main()
{
    cin>>n;
    for(int i=1;i<n+1;i++)
    {
        cin>>z;
        for(int j=p;j<p+z;j++)
        {
            a[j]=i;
        }
        p+=z;
    }
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>z;
        cout<<a[z]<<'\n';
    }
}