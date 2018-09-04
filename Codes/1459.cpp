#include <bits/stdc++.h>

using namespace std;

const int N = 100010;

int arr[N];
int b[N];

int n;
int s;

pair <bool, int> F(int sz) {
  for (int i = 1; i <= n; ++i) {
    b[i] = arr[i] + i * sz;
  }
  sort(b + 1, b + n + 1);
  int sum = 0;
  for (int i = 1; i <= sz; ++i) {
    sum += b[i];
    if (sum > s) {
      return {0, 0};
    }
  }
  return {1, sum};
}

int main() {
  scanf("%d %d", &n, &s);
  for (int i = 1, x; i <= n; ++i) {
    scanf("%d", arr + i);
  }
  int l = 0, r = n;
  int ans1 = 0;
  int ans2 = 0;
  for (int i = 0; i < 20; ++i) {
    int m = (l + r) >> 1;
    pair <bool, int> p = F(m);
    if (p.first) {
      l = m + 1;
      ans2 = p.second;
      ans1 = m;
    } else {
      r = m - 1;
    }
  }
  printf("%d %d", ans1, ans2);
  return 0;
}