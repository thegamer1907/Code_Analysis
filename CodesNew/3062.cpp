// Author: Narut Sereewattanawoot. Email: narut.se@gmail.com //
#include <bits/stdc++.h>
struct CERR_RED {
  template <typename T> CERR_RED& operator<<(T&& t) { std::cerr << "\033[0;31m" << t << "\033[0m"; return *this; }
  CERR_RED& operator<<(std::ostream& (*os)(std::ostream&)) { std::cerr << os; return *this; }
} cerr_red;

#define cerr          cerr_red
#define MOD(i, n)     (((i) % (n) + (n)) % (n))
#define y1            y12345

using Ll = long long;
using namespace std;

int k;
string s;

auto Solve()
{
  int n = s.length();
  vector<int> pos(1, 0);  
  for (int i = 0; i < int(n); i++) {
    if (s[i] == '1') pos.push_back(i+1);
  }
  pos.push_back(n+1);
  Ll ans = 0;
  if (k == 0) {
    for (int i = 0; i < pos.size()-1; i++) {
      int gap = pos[i+1]-pos[i];
      ans += 1LL*gap*(gap-1)/2;
    }
    return ans;
  }
  for (int i = 1; i + k < pos.size(); i++) {
    ans += 1LL*(pos[i]-pos[i-1])*(pos[i+k]-pos[i+k-1]);
  }
  return ans;
}

int main() {
  #ifdef IDE_TEST_
  #define NAME "io/test"
  if (!freopen(NAME ".in", "r", stdin)) cerr << "freopen failed" << endl;
  // freopen(NAME ".out", "w", stdout);
  #else
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  #endif
  cout << fixed << setprecision(10);
  cin >> k >> s;
  cout << Solve();
}
