#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  scanf("%d", &n);
  vector<int> a(n);
  for (int i = 0; i < n; ++i) {
    scanf("%d", &a[i]);
  }
  vector<int> f(n, 1);
  for (int i = 1; i < n; ++i) {
    if (a[i] > a[i - 1]) {
      f[i] = max(f[i], f[i - 1] + 1);
    } 
  }
  printf("%d\n", *max_element(f.begin(), f.end()));
  return 0;
}