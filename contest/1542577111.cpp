#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,tg,k,a[7],l,f[17];
bool check(int b)
{
    if(f[b]==0)return false;
    for(int i=0;i<k;++i)
    {
        if(a[i]==0)continue;
        int lol;
        if(((1<<i)&b)!=0)return false;
    }
    return true;
}
signed main()
{
    cin>>n>>k;
    for(int i=1;i<=n;++i)
    {
        l=0;
        int yeah=0;
        for(int j=0;j<k;++j)
        {
            cin>>a[j];
            if(a[j]==1)yeah+=(1<<j);
            if(a[j]==1)l=1;
        }
        for(int j=0;j<(1<<k);++j)
        {
            if(check(j)){cout<<"YES";exit(0);}
        }
        f[yeah]=1;
        if(l==0){cout<<"YES";exit(0);}
    }
    cout<<"NO";
}
