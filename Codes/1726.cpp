/*
  Task: D. Multiplication Table
  Site: codeforces
  Link: http://codeforces.com/problemset/problem/448/D
*/
#include <bits/stdc++.h>
using namespace std;

void err(istream_iterator<string> it) { cerr << endl; }
template<typename T, typename... Args> void err(istream_iterator<string> it, T a, Args... args) { cerr << *it << " = " << a << ", "; err(++it, args...); }
#define db(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }
#define dba(ar) { cerr << #ar << " = ["; for (auto x : ar) cerr << " " << x; cerr << "]" << endl; }
typedef long long int64;

int main(int argc, char* argv[]) {
  ios::sync_with_stdio(false); cin.tie(nullptr);
  int64 n, m, k; cin >> n >> m >> k;
  int64 low = 1, high = n * m;
  while (low + 1 <= high) {
    int64 x = (low + high) >> 1;
    int64 cnt = 0;
    for (int i = 1; i <= n; ++i) {
      cnt += min(x / i, m);
    }
    // db(x, cnt, low, high);
    if (cnt >= k) high = x; else low = x + 1;
  }
  cout << high << endl;
  return 0;
}
/**
 *  1  2  3  4  5
 *  2  4  6  8 10
 *  3  6  9 12 15
 * 
 * 1 2 2 3 3 4 4 5 6 6 8 9 10 12 15
 */
