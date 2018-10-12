#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
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
const int INF=0x3f3f3f3f;
const double eps=1e-8;
const double PI=acos(-1.0);
const int MAXN=2e5+5;
const int MOD=1e9+7;
int sgn(double x){if(fabs(x)<eps)return 0;if(x<0)return -1;else return 1;}
ll pw(ll a,ll n,ll mod){ll ret=1;while(n){if(n&1)ret=ret*a%mod;a=a*a%mod;n>>=1;}return ret;}
ll gcd(ll a,ll b){return b==0?a:gcd(b,a%b);}
//head

int n,m,a[MAXN],b[MAXN];
ll sum[MAXN];

int main(){
    sf("%d%d",&n,&m);
    sum[0]=0;
    for(int i=1;i<=n;i++)sf("%d",&a[i]),sum[i]=sum[i-1]+a[i];
    ll k,res=0;
    while(m--){
        sf("%I64d",&k);res+=k;
        if(res>=sum[n]){
            pf("%d\n",n);res=0;
            continue;
        }
        int l=1,r=n,mid;
        while(l<r){
            int mid=l+r>>1;
            if(sum[mid]>res)r=mid;
            else l=mid+1;
        }
        pf("%d\n",n-l+1);
    }
}
