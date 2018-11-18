#include <bits/stdc++.h>
#include <unistd.h>
#define inf 1000000007LL
#define INF 1000000000000000007LL
#define mp make_pair
#define pb push_back
#define eb emplace_back
#define st first
#define nd second
#define ll long long
#define ld long double
#define pii pair<int,int>
#define vi vector<int>
#define vll vector<long long>
#define vpii vector<pair<int,int>>
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(),(x).end()
#define LOG(x) (63-__builtin_clzll(x))
#define rep(i, n) for(int i=0; i<(n); ++i)
#define rep1(i, n) for(int i=1; i<=(n); ++i)
#define endr cerr<<'\n'
#define endl '\n'
#ifdef DEBUG
#define pv(...) cerr<<'\n',dbg(#__VA_ARGS__, __VA_ARGS__)
#define ps(x) {cerr<<'\n'<<#x<<":\n:";for(auto _q:(x)){cerr<<_q<<" ";}cerr<<'\n';}
#define pa(x, xs) {cerr<<'\n'<<#x<<":\n:";for(int _q=0; _q<=(xs); ++_q){cerr<<x[_q]<<" ";}cerr<<'\n';}
#define pal(x, xs) {cerr<<'\n'<<#x<<":\n";for(int _q=0; _q<=(xs); ++_q){cerr<<_q<<": "<<setw(_q? 3-(int32_t)log10(_q):3)<<x[_q]<<'\n';}cerr<<'\n';}
#define ppii(x, xs) {cerr<<'\n'<<#x<<":\n";for(int _q=0; _q<=(xs); ++_q){cerr<<_q<<": "<<setw(_q? 6-(int32_t)log10(_q):6)<<x[_q].first<<" "<<setw(5)<<x[_q].second<<'\n';}cerr<<'\n';}
#define pm(x, xn, xm) {cerr<<'\n'<<#x<<":\n";for(int _qa=0; _qa<=(xn); ++_qa){for(int _qb=0; _qb<=(xm); ++_qb){cerr<<setw(6)<<x[_qa][_qb]<<" ";}cerr<<'\n';}cerr<<'\n';}
#else
#define cerr if(0)cout
#define pv(...) if(0)endr
#define ps(x) if(0)endr
#define pa(x, xs) if(0)endr
#define pal(x, xs) if(0)endr
#define ppii(x, xs) if(0)endr
#define pm(x, xn, xm) if(0)endr
#endif
using namespace std;
template<class T> void dbg(const char* xn, T x){cerr<<xn<<": "<<x<<"\n";} template<class T, class... TA> void dbg(const char* xn, T x, TA... t){while(*xn!=',')cerr<<*xn++;cerr<<": "<<x<<",";dbg(xn+1, t...);}
template<class T> inline bool upd_max(T &x, T y){return y>x?x=y,true:false;} template<class T> inline bool upd_min(T &x, T y){return y<x?x=y,true:false;}
const int N = 100007;
const int K = 21;
#define int long long

int n, k, A[N], dp[K][N], cnt[N];


int Left = 0, Right = -1, cost = 0;
inline void Add(int i)
{
  cost += cnt[A[i]]++;
}

inline void Remove(int i)
{
  cost -= --cnt[A[i]];
}

inline void Move(int l, int r)
{
  while (Left > l) Add(--Left);
  while (Left < l) Remove(Left++);
  while (Right > r) Remove(Right--);
  while (Right < r) Add(++Right);
}

inline pii solveFor(int d, int i, int a, int b)
{
  int res = INF, best = -1;
  for (int j=a; j<=min(b, i-1); ++j)
  {
    Move(j+1, i);
    if (upd_min(res, dp[d][j] + cost)) best = j;
  }

  return mp(res, best);
}

void go(int d, int l, int r, int a, int b)
{
  int m = (l + r)/2;
  pii tmp = solveFor(d, m, a, b);
  int res = tmp.st, best = tmp.nd;
  upd_min(dp[d+1][m], res);

  if (l<=m-1) go(d, l, m-1, a, best);
  if (m+1<=r) go(d, m+1, r, best, b);
}

void solve()
{
  cin>>n>>k;
  rep1(i, n) cin>>A[i];

  rep(d, k+1) rep(i, n+1) dp[d][i] = INF;
  dp[0][0] = 0;
  rep(d, k) go(d, 1, n, 0, n-1);

  cout<<dp[k][n];
}

int32_t main()
{
ios_base::sync_with_stdio(0); cin.tie(0);
cout<<fixed<<setprecision(10);

  solve();

return 0;
}
