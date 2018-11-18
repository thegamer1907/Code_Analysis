#define __USE_MINGW_ANSI_STDIO 0
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define int ll
using VI = vector<int>;
using VVI = vector<VI>;
using PII = pair<int, int>;

#define FOR(i, a, n) for (ll i = (ll)a; i < (ll)n; ++i)
#define REP(i, n) FOR(i, 0, n)
#define ALL(x) x.begin(), x.end()
#define PB push_back

const ll LLINF = (1LL<<60);
const int INF = (1LL<<30);
const int MOD = 1000000007;

template <typename T> T &chmin(T &a, const T &b) { return a = min(a, b); }
template <typename T> T &chmax(T &a, const T &b) { return a = max(a, b); }
template <typename T> bool IN(T a, T b, T x) { return a<=x&&x<b; }
template<typename T> T ceil(T a, T b) { return a/b + !!(a%b); }
template<class S,class T>
ostream &operator <<(ostream& out,const pair<S,T>& a){
  out<<'('<<a.first<<','<<a.second<<')';
  return out;
}
template<class T>
ostream &operator <<(ostream& out,const vector<T>& a){
  out<<'[';
  REP(i, a.size()) {out<<a[i];if(i!=a.size()-1)out<<',';}
  out<<']';
  return out;
}

int dx[] = {0, 1, 0, -1}, dy[] = {1, 0, -1, 0};

bool flag[100010];
int a[100010], dp[25][100010];

int sum, L, R, cnt[100010];
inline void add(int idx) { sum += cnt[a[idx]]++; }
inline void del(int idx) { sum -= --cnt[a[idx]]; }
int W(int l, int r) {
  while(L > l) add(--L);
  while(L < l) del(L++);
  while(R < r) add(++R);
  while(R > r) del(R--);
  return sum;
}

signed main(void)
{
  int n, k;
  cin >> n >> k;
  REP(i, n) cin >> a[i], --a[i];
  cnt[a[0]]++;

  // int tl, tr;
  // while(cin>>tl>>tr) {
  //   cout << W(tl, tr) << endl;
  // }
  // return 0;

  function<void(int,int,int,int,int)>
  func = [&](int i, int l, int r, int optl, int optr) {
    if(l > r) return;
    int mid = (l+r)/2, optm = -1;
    FOR(j, optl, min(mid+1, optr+1)) {
      int ncost = dp[i-1][j] + W(j+1, mid); // [j+1, mid]
      if(dp[i][mid] > ncost) {
        dp[i][mid] = ncost;
        optm = j;
      }
    }
    func(i, l, mid-1, optl, optm);
    func(i, mid+1, r, optm, optr);
    return;
  };

  REP(i, n) dp[0][i] = W(0, i);
  FOR(i, 1, k) REP(j, n) dp[i][j] = LLINF;

  FOR(i, 1, k) func(i, 0, n-1, 0, n-1);

  // REP(i, k) {
  //   REP(j, n) cout << dp[i][j] << " ";
  //   cout << endl;
  // }

  cout << dp[k-1][n-1] << endl;

  return 0;
}
