  #include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  int n = (int)s.length();
  vector<int> z(n, 0);
  for (int i = 1, l = 0, r = 0; i < n; i++) {
    if (i <= r) {
      z[i] = min(z[i - l], r - i + 1);
    }

    while (i + z[i] < n && s[z[i]] == s[i + z[i]]) {
      z[i]++;
    }

    if (r < i + z[i] - 1) {
      l = i;
      r = i + z[i] - 1;
    }
  }

  z[0] = n;
  vector<int> psum(n + 1, 0);
  for (int val: z) {
    psum[val]++;
  }

  for (int i = n - 1; i >= 0; i--) {
    psum[i] += psum[i + 1];
  }

  for (int i = 1; i < n; i++) {
    if (z[i] + i != n) {
      continue;
    }

    if (psum[z[i]] > 2) {
      cout << s.substr(0, z[i]) << endl;
      return 0;
    }
  }

  cout << "Just a legend" << endl;
  return 0;
}