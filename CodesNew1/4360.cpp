#include <bits/stdc++.h>
using namespace std;

string reduce(string s1, string s2) {
  int i = 1;
  for ( ; i < min(s1.length(), s2.length()); ++i) {
    if (s1[i] > s2[i]) {
      return s1.substr(0, i);
    }
    if (s1[i] < s2[i]) {
      return s1;
    }
  }
  return s1.substr(0, i);
}

int main() {
  int n;
  cin >> n;
  vector<string> v(n);
  for (int i = 0; i < n; ++i) {
    cin >> v[i];
  }

  for (int i = 0; i < n - 1; ++i) { 
    v[n - 2 - i] = reduce(v[n - 2 - i], v[n - 1 - i]);
  }
  for (int i = 0; i < n; ++i) {
    cout << v[i] << "\n";
  }
}
