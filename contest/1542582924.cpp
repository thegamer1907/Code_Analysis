#include <bits/stdc++.h>
#define rep(i,a,n) for (int i=a;i<=n;i++)
#define per(i,a,n) for (int i=n;i>=a;i--)
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
#define SZ(x) ((int)(x).size())
using namespace std;
typedef vector<int> vi;
typedef long long ll;
typedef pair<int,int> pii;
const ll mod=1000000007;
ll powmod(ll a,ll b) {ll res=1;a%=mod; assert(b>=0); for(;b;b>>=1){if(b&1)res=res*a%mod;a=a*a%mod;}return res;}
const int maxn=1e5+10;
int a[maxn];
bool vis[100],sum[100];
int main()
{
   // cout<<(0^0)<<endl;
    int b[4];
    int n,k;
    scanf("%d%d",&n,&k);
    bool ok=0;
    rep(i,1,n) {
        rep(j,0,k-1) {
            scanf("%d",&b[j]);
            a[i]|=(b[j]<<j);
        }
        vis[a[i]]=1;
    }
    rep(i1,0,(1<<k)-1) {
        rep(i2,0,(1<<k)-1) {
            if( vis[i1]&&vis[i2]&&( (i1+i2)==(i1^i2) ) ) ok=1;
        }
    }
    puts(ok?"YES":"NO");
    return 0;
}
