#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3f
#define FI first
#define SE second
#define MP make_pair
#define PI pair<int,int>
#define PL pair<ll,ll>
#define lson rt<<1,l,mid
#define rson rt<<1|1,mid+1,r
#define test cout<<"here!!!"<<endl
#define debug(x) cout<<#x<<" "<<x<<endl
#define DEBU
using namespace std;
const int mx=1e5+10;
ll n;
ll m,k;
ll p[mx];
int main()
{
    scanf("%I64d%I64d%I64d",&n,&m,&k);
    for (int i=1;i<=m;++i)
    {
        scanf("%I64d",&p[i]);
    }
    ll ans=0;
    ll pos=k;
    ll bef=0;
    while (1)
    {
        ll np=upper_bound(p+1,p+m+1,pos)-p;
        --np;
        if (np-bef!=0)
        {
            ++ans;
            pos+=np-bef;
            bef=np;
        }
        else
        {
            pos+=1ll*(p[np+1]-pos+k-1)/k*k;
        }
        if (bef>=m) break;
    }
    cout<<ans<<endl;
}