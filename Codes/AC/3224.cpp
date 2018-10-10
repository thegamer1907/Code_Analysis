/*
  Task: B. World Cup
  Link: http://codeforces.com/contest/996/problem/B
*/

#include <bits/stdc++.h>
using namespace std;

void err(istream_iterator<string> it) { cerr << endl; }
template<typename T, typename... Args> void err(istream_iterator<string> it, T a, Args... args) { cerr << *it << " = " << a << ", "; err(++it, args...); }
#define db(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }
#define dba(ar) { cerr << #ar << " = ["; for (auto x : ar) cerr << " " << x; cerr << "]" << endl; }
typedef long long int64;
#define ret(x) { cout << x << endl; return; }

void solve() {
  int n; cin >> n;
  vector<int> a(n);
  int minA = 1e9 + 10;
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
    minA = min(minA, a[i]);
  }
  for (int i = 0; i < n; ++i) a[i] -= (minA / n) * n;
  for (int i = 0, j = 0; ; i = (i + 1) % n, j++) {
    if (a[i] <= j) ret(i + 1);
  }
}

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(false); cin.tie(nullptr);
  solve();
  return 0;
}
