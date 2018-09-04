#include <bits/stdc++.h>

using namespace std;

#define REP(i,m) for(int i=0; i<m; i++)
#define FOR(i,n,m) for(long long i=n; i<m; i++)
#define INF 1000000001
#define INFL (1LL << 60)
#define MOD 998244353
#define ALL(v) v.begin(),v.end()
#define pb push_back
#define ll long long int
#define P pair<int, int>

int main() {
  int n;
  scanf("%d", &n);
  int d[n];
  REP(i, n) scanf("%d", &d[i]);
  ll sum = 0;
  REP(i, n) sum += d[i];
  ll cur = 0;
  vector<ll> l, r;
  REP(i, n){
    cur += d[i];
    if(2*cur > sum) break;
    l.pb(cur);
  }
  cur = 0;
  REP(i, n){
    cur += d[n-1-i];
    if(2*cur>sum) break;
    r.pb(cur);
  }
  sort(ALL(r));
  REP(i, l.size()){
    if(binary_search(ALL(r), l[l.size()-i-1])){
      cout << l[l.size()-i-1] << endl;
      return 0;
    }
  }
  cout << 0 << endl;
  return 0;
}
