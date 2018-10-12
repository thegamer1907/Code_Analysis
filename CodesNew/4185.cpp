#include<iostream>
#include<cstdio>
#include<unordered_map>
#define DN 200005
using namespace std;
long long n,q,a[DN],k[DN],s[DN],st,dr,mij,ls,f;
int main()
{
    cin.sync_with_stdio(false);
    cout.sync_with_stdio(false);
    cin>>n>>q;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=q;i++)
        cin>>k[i];
    for(int i=1;i<=n;i++)
        s[i]=s[i-1]+a[i];
    ls=1;
    for(int i=1;i<=q;i++)
    {
        if(f+k[i]<a[ls])
        {
            f+=k[i];
            cout<<n-ls+1<<'\n';
            continue;
        }
        st=ls;
        dr=n;
        while(st<dr)
        {
            mij=(st+dr+1)/2;
            if(f+k[i]>=s[mij]-s[ls-1])
                st=mij;
            else
                dr=mij-1;
        }
        if(st==n)
        {
            ls=1;
            f=0;
            cout<<n<<'\n';
            continue;
        }
        f=f+k[i]-(s[st]-s[ls-1]);
        ls=st+1;
        cout<<n-ls+1<<'\n';
    }
}
