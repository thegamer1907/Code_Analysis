/*
 *  Author: Tara Prasad
 */
#include <bits/stdc++.h>
// #define DEBUG
#ifdef DEBUG
  #include "printcpp11.h" 
#endif
using namespace std;

#define F first
#define S second
#define mp make_pair
#define mt make_tuple
#define pb push_back
#define ALL(x) x.begin(), x.end()
#define REV_ALL(x) x.rbegin(), x.rend()
#define SZ(x) (int)x.size()
#define CONTAINS(cont, val) (cont.find(val) != cont.end())
#define endl '\n'
#define what_is(x) cout << #x << " = " << x << endl
#define IO_SPEED_UP ios::sync_with_stdio(false);cin.tie(NULL)
#define FOR(i, st, ed, inc) for(ll i = st; i < ed; i += inc)

typedef long long ll;typedef pair<ll, ll> ii;
typedef vector<ll> vi;typedef vector<bool> vb;
typedef vector<ii> vii;typedef vector<vi> vvi;

const ll PINF = 1E9;
const ll NINF = -1E9;
const ll M = 1E9 + 7;
const double EPS = 1E-9;

string s;
int cnt[3]; // count of each ingredient required to make the burger
int n[3];
int p[3];
int ing_left[3];
ll r;
int free_burgers = PINF;

bool feasible(ll num_burgers) {
  num_burgers -= free_burgers;
  ll ing_req[3]; // can be very big, use ll
  ll price = 0;
  for(int i = 0; i < 3; i++) {
    ing_req[i] = (ll)num_burgers * (ll)cnt[i] - (ll)ing_left[i];
    if(ing_req[i] > 0) {
      price += ing_req[i] * (ll)p[i];
    }
  }
  if(price <= r) {
    return true;
  }
  return false;
}

int main() {
  IO_SPEED_UP;
#ifdef DEBUG
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  cin >> s;
  for(int i = 0; i < SZ(s); i++) {
    if(s[i] == 'B') cnt[0]++;
    if(s[i] == 'S') cnt[1]++;
    if(s[i] == 'C') cnt[2]++;
  }
  cin >> n[0] >> n[1] >> n[2];
  cin >> p[0] >> p[1] >> p[2];
  cin >> r;
  for(int i = 0; i < 3; i++) {
    if(cnt[i] == 0) continue;
    free_burgers = min(free_burgers, n[i]/cnt[i]);
  }
  for(int i = 0; i < 3; i++) {
    ing_left[i] = n[i] - free_burgers * cnt[i];
  }
  ll ans = 0, lo = 0, hi = 1E13; // too high value for hi leads to overflow
  while(lo <= hi) {
    ll mid = (lo + hi)/2;
    if(feasible(mid)) {
      lo = mid + 1;
      ans = mid;
    } else {
      hi = mid - 1;
    }
  }
  cout << ans << "\n";
  return 0;
}