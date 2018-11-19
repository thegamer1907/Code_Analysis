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

const int MAXK = 20;

struct Item {
  int strip;
  string prv, suf;
  set<string> x[MAXK+5];

  void init(string s) {
    strip = 0;
    prv = suf = s;
  }
  void add(string s) {
    if (SZ(s) >= MAXK+5) return;
    x[SZ(s)].insert(s);
  }
  void norm() {
    if (SZ(prv) >= MAXK) {
      prv = prv.substr(0, MAXK);
      strip = 1;
    }
    if (SZ(suf) >= MAXK) {
      suf = suf.substr(SZ(suf)-MAXK, MAXK);
      strip = 1;
    }
  }

  void dd() {
    dump(prv);
    dump(suf);
    dump(strip);
    REP(i,5) {
      dump(x[i]);
    }
  }

} hao[1005];

int N;
string ip[1005];

void make(int id) {
  string s = ip[id];
  hao[id].init(s);
  int n = SZ(s);
  REP(i,n) {
    REP1(j,0,i) {
      hao[id].add(s.substr(j, i-j+1));
    }
  }
}

void merge(int a, int b) {
  hao[N] = hao[a];
  REP(i,MAXK) {
    for (auto it:hao[b].x[i]) {
      hao[N].x[i].insert(it);
    }

  }

  string s1 = hao[a].suf;
  string s2 = hao[b].prv;

  REP(i,SZ(s1)) {
    REP(j,SZ(s2)) {
      string ss = s1.substr(i, SZ(s1)-i) + s2.substr(0, j+1);
      hao[N].add(ss);
    }
  }

  hao[N].strip = 0;
  if (hao[a].strip == 0) {
    hao[N].prv = hao[a].prv + hao[b].prv;
  } else {
    hao[N].prv = hao[a].prv;
    hao[N].strip = 1;
  }

  if (hao[b].strip == 0) {
    hao[N].suf = hao[a].suf + hao[b].suf;
  } else {
    hao[N].suf = hao[b].suf;
    hao[N].strip = 1;
  }
  hao[N].norm();
}
int main() {
  IOS;
  cin >> N;
  REP(i,N) {
    cin >> ip[i];
  }

  REP(i,N) {
    make(i);
  }

  int Q;
  cin >> Q;
  REP(_,Q) {
    int a,b;
    cin >> a >> b;
    a--;
    b--;
    merge(a, b);

    int ans = 0;
    REP1(i,1,MAXK) {
      if (SZ(hao[N].x[i]) == (1LL << i)) ans = i;
      else break;
    }

    N++;
    cout << ans << endl;
  }

  //hao[0].dd();
  //hao[1].dd();
  //hao[5].dd();
  //hao[6].dd();

  return 0;
}

