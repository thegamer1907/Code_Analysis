#include<iostream>
#include<cmath>
#include<cstring>
#include<cstdio>
#include<iomanip>
#include<algorithm>
using namespace std;
int main()
{
    long int n,m,a[100005],c[100005],b[100005],i,j,k,l;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    memset(b,0,sizeof(b));
    for(i=n;i>=1;i--)
    {
        if(b[a[i]])
        {
            c[i]=c[i+1];
        }
        else
        {
            c[i]=c[i+1]+1;
            b[a[i]]=1;
        }
    }
    for(k=1;k<=m;k++)
    {
        cin>>l;
        cout<<c[l]<<endl;
    }
    return 0;
}