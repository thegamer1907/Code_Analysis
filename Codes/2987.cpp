#include <bits/stdc++.h>

using namespace std;

const int N = 1000006;
char s[N];
int z[N];

void zFunction() {
  int n = strlen(s);
  for (int i = 1, l = 0, r = 0; i < n; ++i) {
    if (i <= r) {
      z[i] = min(z[i - l], r - i + 1);
    }
    while (i + z[i] < n && s[z[i]] == s[i + z[i]]) {
      ++z[i];
    }
    if (i + z[i] - 1 > r) {
      l = i;
      r = i + z[i] - 1;
    }
  }
}

int main() {
#ifndef ONLINE_JUDGE
  freopen("input.in", "r", stdin);
#endif
  scanf("%s", s);
  zFunction();
  int n = strlen(s), len = 0;
  int maxZ = 0;
  for (int i = 1; i < n; ++i) {
    if (z[i] == n - i && maxZ >= z[i] && z[i] > len) {
      len = z[i];
      break;
    }
    maxZ = max(maxZ, z[i]);
  }
  if (len == 0) {
    puts("Just a legend");
    return 0;
  }
  s[len] = 0;
  printf("%s\n", s);
}
