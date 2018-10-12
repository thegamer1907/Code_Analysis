#include<bits/stdc++.h>
#include<unordered_map>

using namespace std;

typedef long long LL;
const int maxn=100+5;
const int mod=1.5e7+7;


int a[maxn];

int n,m;
bool check(int x)
{
    int t=m;
    for (int i=1;i<=n;i++)//error1
    {
        if(a[i]>x)
            return 0;
        else
            t-=x-a[i];
    }
    if(t>0)return 0;
    return 1;
}

int main()
{
    int ma=0,mi=1e9+1,mak,mik;
    cin>>n>>m;
    for (int i=1;i<=n;i++)
    {
        cin>>a[i];
        ma=max(a[i],ma);
        mi=min(mi,a[i]);
    }
    mak=ma+m;
    int l=mi,r=ma+m,mid;
    while(l<r)
    {
        mid=(l+r)>>1;
        if(check(mid))
            r=mid;
        else
            l=mid+1;
    }
    cout<<l<<" "<<mak<<endl;
    return 0;
}
