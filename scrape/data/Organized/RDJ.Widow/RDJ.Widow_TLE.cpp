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
int m,k;
ll p[mx];
int main()
{
    scanf("%I64d%d%d",&n,&m,&k);
    for (int i=1;i<=m;++i)
    {
        scanf("%I64d",&p[i]);
    }
    int ans=0;
    ll pos=k;
    int bef=0;
    while (1)
    {
        int np=upper_bound(p+1,p+m+1,pos)-p;
        --np;
        if (np-bef!=0)
        {
            ++ans;
            pos+=np-bef;
            bef=np;
        }
        else
        {
            pos+=k;
        }
        if (bef>=m) break;
    }
    cout<<ans<<endl;
}