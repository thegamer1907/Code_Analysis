#include <bits/stdc++.h>

using namespace std;

int v[100003][2];
int n, k;
string a;

int f(int l, int key, int cnt, int r) {
  int res = l;
  while (l <= r) {
    int m = (l + r) / 2;
    if (v[m][key] > cnt) {
      r = m - 1;
    }
    else {
      res = m;
      l = m + 1;
    }
  }
  return res;
}

int main() {
  scanf("%d %d", &n, &k);
  cin >> a;
  a = '@' + a;
  int cntA, cntB;
  cntA = cntB = 0;
  for (int i = 1; i <= n; i++) {
    if (a[i] == 'a')
      cntA++;
    else
      cntB++;
    v[i][0] = cntA;
    v[i][1] = cntB;
  }
  int ans = 0;
  int r = f(1, 1, k, n);
  int d = f(1, 0, k, n);
  ans = max(ans, r);
  ans = max(ans, d);
  for (int i = 1; i <= n; i++) {
    int key = (a[i] == 'a');
    int r = f(i, key, v[i][key] + k, n);
    ans = max(ans, r - i + 1);
  }
  printf("%d", ans);
  return 0;
}