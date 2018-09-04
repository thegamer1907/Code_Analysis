#include <bits/stdc++.h>

using namespace std;

#define int long long

const int N = 1e5 + 7;

int n, s;
int a[N];
int sum;
int w[N];

bool check(int k) {
  for (int i = 0; i < n; i++) {
    w[i] = a[i] + (i + 1) * k;
  }
  sort(w, w + n);
  for (int i = 0; i < k; i++) {
    sum += w[i];
  }
  if (sum <= s) {
    return true;
  }
  return false;
}

int32_t main()
{
  ios_base::sync_with_stdio(0); cin.tie(0);
  cin >> n >> s;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int l = 0, r = n + 1;
  while (r - l > 1) {
    int mid = (l + r) / 2;
    if (check(mid)) {
      l = mid;
    }
    else {
      r = mid;
    }
    sum = 0;
  }
  check(l);
  cout << l << " " << sum << endl;
  return 0;
}
