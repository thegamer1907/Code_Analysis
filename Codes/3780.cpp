#include <bits/stdc++.h>

using namespace std;

#define FOR(i,a,b) for(int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)
#define TRACE(x) cerr << #x << " = " <<  x << endl
#define mp make_pair
#define pb push_back
#define sz(s) (int)((s).size())
#define eps 10e-7

typedef long long ll;
typedef pair<int, int> pint;

string h;
int k[3], n[3], p[3];

int main() {
  cin >> h;
  REP(i, 3) k[i] = 0;
  for(char c: h) {
    if(c == 'B') k[0]++;
    else if(c == 'S') k[1]++;
    else k[2]++;
  }

  REP(i, 3) scanf("%d", &n[i]);
  REP(i, 3) scanf("%d", &p[i]);
  ll r;
  scanf("%lld", &r);


  ll lo = 0;
  ll hi = 200 + r;

  while(lo < hi) {
    ll mid = (lo + hi + 1) / 2;
    ll cur_cost = 0;
    REP(i, 3) {
      cur_cost += max(0LL, p[i] * (k[i] * mid - n[i]));
    }

    if(cur_cost <= r) {
      lo = mid;
    } else {
      hi = mid - 1;
    }
  }

  printf("%lld\n", lo);
  return 0;
}

