#define _CRT_SECURE_NO_WARNINGS

#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>

using namespace std;

typedef long long LL;
typedef unsigned long long ULL;
typedef long double LD;

#define PI acos(-1);
#define mp make_pair
#define all(x) x.begin(), x.end()

template<typename T> istream & operator >> (istream &in, vector<T> &a) {
  for (auto &x : a) {
    in >> x;
  }
  return in;
}

template<typename T> ostream & operator << (ostream &out, const vector<T> &a) {
  for (auto x : a) {
    out << x << " ";
  }
  return out;
}

void solve() {
  int n, m;
  cin >> n >> m;
  unordered_set<string> a, b, ab;
  string s;
  while (n--) {
    cin >> s;
    a.emplace(s);
  }
  while (m--) {
    cin >> s;
    b.emplace(s);
    if (a.count(s)) {
      ab.emplace(s);
    }
  }

  int fi = (ab.size() + 1) / 2 + a.size() - ab.size();
  int se = ab.size() / 2 + b.size() - ab.size();
  if (fi > se) {
    cout << "YES" << endl;
  }
  else {
    cout << "NO" << endl;
  }
}

#define name ""

int main() {
  ios_base::sync_with_stdio(false);
  //cin.tie(0);
  //freopen(name ".in", "r", stdin), freopen(name ".out", "w", stdout);
  //freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
  cout.setf(ios::fixed);
  cout.precision(8);
  solve();

  return 0;
}