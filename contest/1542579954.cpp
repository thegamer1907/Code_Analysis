//bcw0x1bd2 {{{
#include<bits/stdc++.h>
#include<unistd.h>
using namespace std;
#define FZ(x) memset((x),0,sizeof(x))
#define F first
#define S second
#define MP make_pair
#define PB push_back
#define IOS ios_base::sync_with_stdio(0); cin.tie(0);
#define SZ(x) ((int)((x).size()))
#define ALL(x) begin(x),end(x)
#define REP(i,x) for (int i=0; i<(x); i++)
#define REP1(i,a,b) for (int i=(a); i<=(b); i++)

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef long double ld;

#ifdef DARKHH
#define FILEIO(name)
#else
#define FILEIO(name) \
  freopen(name".in", "r", stdin); \
  freopen(name".out", "w", stdout);
#endif

#ifdef DARKHH
template<typename T>
void _dump( const char* s, T&& head ) { cerr<<s<<"="<<head<<endl; }

template<typename T, typename... Args>
void _dump( const char* s, T&& head, Args&&... tail ) {
  int c=0;
  while ( *s!=',' || c!=0 ) {
    if ( *s=='(' || *s=='[' || *s=='{' ) c++;
    if ( *s==')' || *s==']' || *s=='}' ) c--;
    cerr<<*s++;
  }
  cerr<<"="<<head<<", ";
  _dump(s+1,tail...);
}

#define dump(...) do { \
  fprintf(stderr, "%s:%d - ", __PRETTY_FUNCTION__, __LINE__); \
  _dump(#__VA_ARGS__, __VA_ARGS__); \
} while (0)

template<typename Iter>
ostream& _out( ostream &s, Iter b, Iter e ) {
  s<<"[";
  for ( auto it=b; it!=e; it++ ) s<<(it==b?"":" ")<<*it;
  s<<"]";
  return s;
}

template<typename A, typename B>
ostream& operator <<( ostream &s, const pair<A,B> &p ) { return s<<"("<<p.first<<","<<p.second<<")"; }
template<typename T>
ostream& operator <<( ostream &s, const vector<T> &c ) { return _out(s,ALL(c)); }
template<typename T, size_t N>
ostream& operator <<( ostream &s, const array<T,N> &c ) { return _out(s,ALL(c)); }
template<typename T>
ostream& operator <<( ostream &s, const set<T> &c ) { return _out(s,ALL(c)); }
template<typename A, typename B>
ostream& operator <<( ostream &s, const map<A,B> &c ) { return _out(s,ALL(c)); }
#else
#define dump(...)
#endif
// }}}
// Let's Fight! ~OAO~~

int N,K;
int cnt[4];
vector<int> ip[100005];
int cc[16];

int bf() {
  REP(i,1<<N) {
    if (!i) continue;
    REP(j,K) cnt[j] = 0;
    REP(j,N) {
      if (i & (1<<j)) {
        REP(k,K) cnt[k] += ip[j][k];
      }
    }
    int ok = 1;

    int half = __builtin_popcount(i) / 2;
    REP(j,K) if (cnt[j] > half) ok = 0;
    if (ok) {
      dump(bitset<10>(i));
      return 1;
    }
  }
  return 0;
}

int main() {
  IOS;
  cin >> N >> K;
  REP(i,N) {
    ip[i].resize(K);
    REP(j, K) cin >> ip[i][j];
    while (SZ(ip[i]) < 4) ip[i].PB(0);

    int s = 0;
    REP(j, 4) {
      s = (s << 1) | ip[i][j];
    }
    cc[s]++;
  }

  int ok = 0;
  static const int MAX = 1<<16;
  vector<int> vec;
  REP(i,MAX) {
    int sz = N;
    vec.clear();
    REP(j,16) {
      if (i & (1 << j)) {
        vec.PB(j);
        sz = min(sz, cc[j]);
      }
    }
    if (sz == 0) continue;
    if (SZ(vec) == 0) continue;

    REP(j,4) cnt[j] = 0;

    for (auto s:vec) {
      REP(k,4) if (s & (1<<k)) cnt[k] += sz;
    }

    ok = 1;
    int half = (sz * SZ(vec)) / 2;
    REP(j,4) {
      if (cnt[j] > half) ok = 0;
    }
    if (ok) {
      for (auto it:vec) {
        dump(bitset<4>(it), sz);
      }
      break;
    }
  }


  //assert(ok == bf());
  if (ok) cout << "YES" << endl;
  else cout << "NO" << endl;

  return 0;
}


