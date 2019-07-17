#include <bits/stdc++.h>
using namespace std;

#define sc(a) scanf("%d",&a)
#define sc2(a,b) sc(a), sc(b)
#define pri(x) printf("%d\n",x)
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define BUFF ios::sync_with_stdio(false);

typedef long long int ll;
typedef long double ld;
typedef vector < int > vi;
typedef vector < vi > vvi;
typedef pair < int, int > ii;
typedef vector < ii > vii;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
const int MOD = 1e9+7;
const ld pi = acos(-1);

ll n, m, k;
int main() {
  cin >> n >> m >> k;
  queue<ll> q;
  for(int i=0; i<m; i++) {
    ll x; cin >> x;
    q.push(x);
  }
  ll total = 0;
  ll acc = 0, acc_ = 0;
  ll k_max = k;
  while(!q.empty()) {
    ll e = q.front() - acc;
    if(e > k_max) {
      if(acc_)
        total += 1;
      acc += acc_;
      acc_ = 0;
      e = q.front() - acc;
      k_max = (e - (e % k));
      if(k_max < e) k_max += k;
    }
    else {
      acc_++;
      q.pop();
      if(q.empty()) total++;
    }
  }
  cout << total << endl;
  return 0;
}