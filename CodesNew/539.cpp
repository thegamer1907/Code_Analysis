#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define Max(x,y,z) max(x,max(y,z))
#define Min(x,y,z) min(x,min(y,z))
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define trace1(x)                cerr<<#x<<": "<<x<<endl
#define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
#define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
 
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef pair<long long, long long> pll;
typedef vector<ll> vi;
typedef vector<vi> vvi;
typedef pair<ll,ll> ii;
typedef vector<pair<ll,ll> > vii;
typedef vector<long long> vll;
typedef vector<vll> vvll;
typedef vector<char> vc;
typedef vector<vc> vvc;
typedef vector<pair<long long,long long> > vpll;
typedef vector<bool> vb;
typedef vector<vb> vvb;
typedef pair<ll,pair<ll,ll> > iii;
#define PI 3.141592653589793
#define mod (ll)(998244353)
//# define N 300005
template<typename T> T gcd(T a,T b) { if(a==0) return b; return gcd(b%a,a); }
template<typename T> T pow(T a,T b, ll m){T ans=1; while(b>0){ if(b%2==1) ans=((ans%m)*(a%m))%m; b/=2; a=((a%m)*(a%m))%m; } return ans%m; }
# define INF (ll)1e18+5LL
# define LG 20  
typedef pair<ll,pair<ll,ll> > pii;
# define INF1 1e9
# define maxn 10000002
# define offset 100005


/*************************************************
struct Coupon {
    ll l;
    ll r;
    ll id;

    Coupon(ll l, ll r, ll id): l(l), r(r), id(id) {} // Initialization

    bool operator<(const Coupon& c) { // Sorting
        return l < c.l;    
    }
};

**************************************************/
int cnt[maxn];
bool vis[maxn];
int sp[maxn];

void sieve()
{
  vis[0]=vis[1]=1;
  for(int i=2;i<maxn;i++)
  {
     if(vis[i])
       continue;
     for(int j=i;j<maxn;j+=i)
     {
       vis[j]=1;
       if(sp[j]==-1)
         sp[j]=i;
     }
  }
}


int main()
{
  IOS;
  int n;
  cin >> n;
  memset(sp,-1,sizeof sp);
  sieve();
  int a[n+1];
  for(int i=1;i<=n;i++)
  {
     cin >> a[i];
     while(a[i]!=1)
     {
       cnt[sp[a[i]]]++;
       int j=sp[a[i]];
       while(a[i]%j==0)
          a[i]/=j;
     }
  }

  for(int i=2;i<maxn;i++)
  {
    //trace2(i,cnt[i]);
     cnt[i]+=cnt[i-1];
     //trace1(cnt[i]);
  }
  
  int m;
  cin >> m;

  for(int i=0;i<m;i++)
  {
     int l,r;
     cin >> l >> r;
     if(l>=maxn)
     {
       cout << "0"<<"\n";
       continue;
     }
     r=min(maxn-1,r);
     //trace4(l-1,r,cnt[l-1],cnt[r]);
     int ans=cnt[r]-cnt[l-1];
     cout << ans<<"\n";
  }
}