#include <bits/stdc++.h>
#include <algorithm>
#define pb push_back
#define f first
#define s second
#define mod 1000000007
#define all(x) x.begin(),x.end()
#define sorta(x) sort(all(x))
#define sortr(x) sort(x.begin(),x.end())
#define forn(i,n) for (int i = 0; i < int(n); i++)
#define forn1(i,n) for (int i = 1; i <= n; i++)
#define forn2(i,n) for(int i=0;i<n.size();i++)
#define rev(x) reverse(x.begin(),x.end())
#define dwn(i,n) for(int i=(n); --i>=0; )
#define test int t;cin>>t;while(t--)
#define valid(i,j,n,m) (bool)(i >= 0 && i < n && j >= 0 && j < m)
#define valid1(i,j,n,m) (bool)(i > 0 && i <= n && j > 0 && j <= m)
#define line(n) getline(cin,n)
#define inf (long long)1e18
#define fll(a,v) memset(a, v, sizeof a)
#define sz(a) ((int)(a.size()))
#define bitcount __builtin_popcount
#define powof2(n) (!(n & (n-1)))
#define setbit(n,x) (n |= (1<<x))
#define checkbit(n,b) ((n >> b) & 1)
#define digits(i) (ll)((log(i)/log(10))+1)
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef vector< vector<int> > adjl;
/*ll from, to, w;
edge (ll from, ll to, ll w): from(from), to(to), w(w) {}
bool operator < (const edge & e) const {
  return (w > e.w);
}
};
typedef vector<vector<edge>> adjlw;
ll gcd (ll x, ll y) {if (y == 0)return x; return gcd(y, x % y);}
ll fx(ll n, ll md) {return ((n % md) + md ) % md;}*/
void O_o()
{
    ios::sync_with_stdio(0);
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
}
void aya()
{
    ios::sync_with_stdio(0);
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
}

int main()
{
    aya();
    int n; cin>>n;
    int arr[n];
    ll h=n-1,l=(n>>1)-1;
    forn(i,n)
      cin>>arr[i];
      sort(arr,arr+n);
      while(l >= 0)
      {
          if(arr[h] >= 2*arr[l])
            l--,h--,n--;
          else l--;
      }
    cout<<n;
}