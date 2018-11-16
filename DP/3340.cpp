#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
template<typename T>
vector<int> build_kmp(const T &s) {
  vector<int> f(s.size());
  int fp = f[0] = -1;
  for (int i = 1; i < s.size(); ++i) {
    while (~fp && s[fp + 1] != s[i]) fp = f[fp];
    if (s[fp + 1] == s[i]) ++fp;
    f[i] = fp;
  }
  return f;
}

int main() {
  ios_base::sync_with_stdio(false); cin.tie(0);
  string s; cin >> s;
  auto M = build_kmp(s);
  const int n = s.size();
  if (M[n - 1] == -1) return cout << "Just a legend\n", 0;
  if (count(M.begin(), M.end() - 1, M[n - 1])) 
    return cout << s.substr(0, M[n - 1] + 1) << '\n', 0;
  if (M[M[n - 1]] == -1) return cout << "Just a legend\n", 0;
  cout << s.substr(0, M[M[n - 1]] + 1) << '\n';



  
}
