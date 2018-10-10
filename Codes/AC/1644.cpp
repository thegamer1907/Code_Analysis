#include<bits/stdc++.h>
using namespace std;
#define pri pair<int,int>
#define mp make_pair
#define pb push_back
#define F first
#define S second
#define lp(i,u) for(int i=0;i<u;i++)
#define Lp(i) for(int i=0;i<n;i++)
#define ll long long
#define inf 1000100011
#define eps 0.00000000001
#define scni(a) scanf("%d",&a)
#define scnl(a) scanf("%I64d",&a)
#define pri(a) printf("%d ",a)
#define prl(a) printf("%I64d ",a)
#define setval(a,p) memset(a,-1,sizeof(a))
#define ld long double
#define OO 1000005500
#define M 200100
#define N 107
#define mod 1000000007

ll n,m,k,tmp,a,b,pown,Q,p,q,r,P;
ll cnt(ll a)
{
    ll sum=0;
    for(ll i=1;i<=n;i++)
    {
        ll tmp=(a-1ll)/i;
        sum+=min(tmp,m);
    }
    return sum;
}
bool check(ll x)
{
    if(cnt(x)<k) return 1;
    else return 0;
}
ll bs(ll beg,ll last)
{
    ll mid=(beg+last+1ll)/2;
    if(last-beg<=10) for(ll K=last;K>=beg;K--) if(check(K)) return K;
    if(check(mid)) return bs(mid,last);
    else return bs(beg,mid-1);
}


int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m>>k;
    cout<<bs(1ll,n*m);








	return 0;
}
