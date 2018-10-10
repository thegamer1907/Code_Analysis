#include <cstring>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> z_function(const char* s, int n) {
  int l = 0, r = 0;
  vector<int> z(n, 0);
  for (int i = 1; i < n; ++i) {
    if (i > r) r = i;
    if (i == r || i + z[i - l] >= r) {
      while (r < n && s[r] == s[r - i]) ++r;
      l = i;
      z[i] = r - l;
    } else {
      z[i] = z[i - l];
    }
  }
  return z;
}

const int N = 1e6 + 10;
char s[N];

int main() {
  while (scanf("%s", s) >= 0) {
    int n = strlen(s);
    auto z = z_function(s, n);
    int mx = 0;
    for (int i = 1; i < n; ++i) {
      mx = max(mx, (i + z[i] == n ? z[i] - 1 : z[i]));
    }
    int ans = 0;
    for (int i = n - 1; i >= 0; --i) {
      if (z[i] + i == n && z[i] <= mx) {
        ans = n - i;
      }
    }
    if (ans == 0) {
      printf("Just a legend\n");
    } else {
      s[ans] = '\0';
      printf("%s\n", s);
    }
  }
}
