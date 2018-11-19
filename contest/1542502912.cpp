#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<int,int>
#define vp  vector<pii>
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define ls l,mid,rt<<1
#define rs mid+1,r,rt<<1|1
#define de(x) cout<< #x<<" = "<<x<<endl
#define dd(x) cout<< #x<<" = "<<x<<" "
#define sf scanf
#define pf printf
#define all(x) (x).begin(),(x).end()
#define SZ(x) ((int)(x).size())
#define rep(i,a,n) for (int i=a;i<n;i++)
#define per(i,a,n) for (int i=n-1;i>=a;i--)
typedef long long ll;
typedef long double ld;
const ll INF=1e15;
const double eps=1e-8;
const double PI=acos(-1.0);
const int MAXN=1e5+5;
const int MAXM=2e6+5;
const int MOD=1e9+7;
int sgn(double x){if(fabs(x)<eps)return 0;if(x<0)return -1;else return 1;}
ll pw(ll a,ll n,ll mod){ll ret=1;while(n){if(n&1)ret=ret*a%mod;a=a*a%mod;n>>=1;}return ret;}
ll gcd(ll a,ll b){return b==0?a:gcd(b,a%b);}
//head

int n,k,a[MAXN],c[MAXN],p,q,cost;
ll dp[MAXN][25];

void upd(int L,int R){
    while(p<L)c[a[p]]--,cost-=c[a[p]],p++;
    while(p>L)p--,cost+=c[a[p]],c[a[p]]++;
    while(q<R)q++,cost+=c[a[q]],c[a[q]]++;
    while(q>R)c[a[q]]--,cost-=c[a[q]],q--;
}

void gao(int l,int r,int L,int R,int o){
    if(l==r){
        for(int i=L;i<=min(r-1,R);i++)
            upd(i+1,l),dp[l][o]=min(dp[l][o],dp[i][o-1]+cost);
        return;
    }
    int mid=l+r>>1,st=0;
    for(int i=min(mid-1,R);i>=L;i--){
        upd(i+1,mid);
        if(dp[i][o-1]+cost<dp[mid][o])
            dp[mid][o]=dp[i][o-1]+cost,st=i;
    }
    if(st){
        gao(l,mid,L,st,o);
        gao(mid+1,r,st,R,o);
    }else{
        gao(mid+1,r,L,R,o);
    }
}

int main(){
    sf("%d%d",&n,&k);
    for(int i=1;i<=n;i++)sf("%d",&a[i]);
    for(int i=1;i<=n;i++)for(int j=1;j<=k;j++)dp[i][j]=INF;
    for(int i=1;i<=n;i++)dp[i][1]=dp[i-1][1]+c[a[i]],c[a[i]]++;
    for(int i=1;i<=n;i++)c[a[i]]=0;
    p=1,q=0,cost=0;
    for(int i=2;i<=k;i++)gao(1,n,1,n,i);
    pf("%I64d\n",dp[n][k]);
}
