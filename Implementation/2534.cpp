#include<bits/stdc++.h>
using namespace std;
#define CIN_ ios_base::sync_with_stdio(0); cin.tie(0);
#define mp make_pair
#define pb push_back
#define F first
#define S second
#define ll long long
#define Iti set<int>::iterator
#define Itl set<ll>::iterator
#define Itii set<pair<int,int> >::iterator
#define Itll set<pair<ll,ll> >::iterator
#define lp(i,u,v) for(int i=u;i<=v;i++)
#define Lp(i) for(int i=1;i<=n;i++)
#define Lp0(i) for(int i=0;i<n;i++)
#define inf 9223372036854775807
#define infi 2147483647
#define eps 0.000000000001
#define hi cout<<"HI\n";
#define prev cout<<"plz dont use me";
#define y1 cout<<"plz dont use me either";
#define all(x) x.begin(),x.end()
#define scni(a) scanf("%d",&a)
#define scnl(a) scanf("%I64d",&a)
#define pri(a) printf("%d ",a)
#define prL printf("\n")
#define prl(a) printf("%I64d ",a)
#define setval(a,p) memset(a,p,sizeof(a))
#define sz size
using namespace std;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vl;
int inp; void sc(ll &x) { scanf("%d",&inp); x=inp; }
void sc(ll &x,ll &y) { scanf("%d",&inp); x=inp; scanf("%d",&inp); y=inp; }
long long gcd(long long a, long long b) { return b?gcd(b,a%b):a; }
bool check(ll A)
{
    if(A<9032) return 1;
    return 0;
}
ll bslrg(ll L,ll R){ll mid,beg=L,en=R;while(true){if(en-beg<=20) for(ll i=en;i>=beg;i--) if(check(i)) return i;mid=(beg+en+1ll)/2;if(check(mid)) beg=mid;else en=mid-1ll;}return -1;}
ll bssml(ll L,ll R){ll mid,beg=L,en=R;while(true){if(en-beg<=20) for(ll i=beg;i<=en;i++) if(check(i)) return i;mid=(beg+en+1ll)/2;if(check(mid)) en=mid;else beg=mid+1ll;}return -1;}
void setbit(int &m,int ind,int val) { if(val) m=(m | (1<<ind)); else m=(m & ~(1<<ind)); }
bool getbit(int m,int ind) { int a=(1<<ind); a=(a & m); return a; }
int cntbits(int m) { int ret=0; while(m) {ret+=(m%2); m/=2;} return ret; }
#define M 200100
#define N 2100
const ll mod=1e9+7; const ll mod2=998244353; const ll mod3=1e9+9;
long long pow_mod(long long a,long long b){if(b==0)return 1;if(b%2)return(a*pow_mod((a*a)%mod,b/2))%mod;return pow_mod((a*a)%mod,b/2);}
ll n,m,k,L,tmp,maxi,mini,x,y,Q,root,a[M],sol;



int main()
{
    CIN_
    cin>>n>>m;
    Lp(i)
    {
        cin>>x;
        if(x>m) sol+=2;
        else sol++;
    }
    cout<<sol;










    return 0;
}
