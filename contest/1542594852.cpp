#include <bits/stdc++.h>
using namespace std;
#define popCnt(x) (__builtin_popcountll(x))
typedef long long Long;
typedef long double Double;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#ifdef Local
  freopen("test.in", "r", stdin);
#else
#define endl '\n'
#endif

  string pass;
  cin >> pass;

  int n;
  cin >> n;

  vector<string> v(n);

  for (auto& s : v) {
    cin >> s;
  }

  for (auto s1 : v) {
    for (auto s2 : v) {
      string tmp = s1 + s2;
      if (tmp.find(pass) != string::npos) {
        cout << "YES";
        return 0;
      }
    }
  }

  cout << "NO";
}
