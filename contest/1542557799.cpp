#include <map>
#include <algorithm>
#include <cassert>
#include <climits>
#include <complex>
#include <cstdio>
#include <string>
#include <iostream>
#include <queue>
#include <string>
#include <tuple>
#include <vector>
#include <bitset>
using namespace std;
using ll = long long;
using ld = long double;
template <typename T> T &chmin(T &a, const T &b) { return a = min(a, b); }
template <typename T> T &chmax(T &a, const T &b) { return a = max(a, b); }
#define all(a) (a).begin(), (a).end()
#define uni(a) (a).erase(unique(all(a)), (a).end())
#define bit(n, i) (((n) >> (i)) & 1)
#define bitcount(n) __builtin_popcountll(n)
#define DEBUG(X) cerr<<"  "<<#X<<" = "<<X<<endl;
#define DUMP(A, n) for (auto x=begin(A); x!=begin(A)+n;x++){cout <<*x<< ' ';} cout<<endl;
#define DUMPP(A, n, m) for (auto x=begin(A); x != begin(A)+n;x++) {for (auto y=begin(*x); y != begin(*x)+m;)cout <<*y++<< ' '; cout<<endl;};
#define DUMPM(M) for (auto itr=mp.begin(); itr!=mp.end(); itr++) {cout<<itr->first<<" -> "<<itr->second<<endl;}
#define FOR(i,x,y) for(int i=(x);i<(int)(y);i++)
#define FORP(i,x,y) for(int i=(x);i<=(int)(y);i++)
#define REP(i,y) for(int i=0;i<(int)(y);i++)
#define REPP(i,y) for(int i=1;i<=(int)(y);i++)
#define RREP(i,n) for(int i=(int)(n)-1;i>=0;i--)
#define bs2int(bs) (int)((bs).to_ulong())

int n,k;
map<int, bool> mp;

int main() {
  cin>>n>>k;
  REP(i,n) {
    bitset<4> bs;
    REP(j,k) {
      int v; cin>>v;
      if (v) bs.set(j);
    }
    mp[bs2int(bs)] = true;
  }
  REP(i,(1<<k)-1) {
    if (!mp[i]) continue;
    REP(j,(1<<k)-1) {
      if (!mp[j]) continue;
      if ((i & j)==0) {
        cout << "YES" << endl;
        return 0;
      }
    }
  }
  cout << "NO" << endl;
  return 0;
}
