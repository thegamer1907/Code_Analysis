//g++  5.4.0

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;++i)
        cin>>a[i];
    int f[100001]={0};
    int su[n];
    su[n-1]=1;
    f[a[n-1]]=1;
    for(int i=n-2;i>=0;--i)
    {
        su[i]=su[i+1];
        if(f[a[i]]==0)
        {
            f[a[i]]=1;
            ++su[i];
        }
    }
    for(int i=0;i<m;++i)
    {
        int l;
        cin>>l;
        cout<<su[l-1]<<endl;
    }
}