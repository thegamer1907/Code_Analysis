#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair

typedef long long ll;
typedef pair<int, int> pii;

const int MAXN = 1e5 + 5;

int n, k;
int a[MAXN][4];
int zero[4];
int mask[1 << 4];

int main() {
#ifdef LOCAL
  freopen("input", "r", stdin);
#endif
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cin >> n >> k;
  for (int i = 0; i < n; ++i) {
    int curmask = 0;
    for (int j = 0; j < k; ++j) {
      cin >> a[i][j];
      if (!a[i][j]) {
        ++zero[j];
        curmask |= 1 << j;
      }
    }
    ++mask[curmask];
  }
  if (mask[(1 << k) - 1] > 1) {
    cout << "YES\n";
    return 0;
  }
  for (int i = 0; i < 1 << k; ++i) {
    for (int j = i + 1; j < 1 << k; ++j) {
      if (mask[i] && mask[j] && (i | j) == (1 << k) - 1) {
        cout << "YES\n";
        return 0;
      }
    }
  }    
  for (int i = 0; i < k; ++i) {
    if (!zero[i]) {
      cout << "NO\n";
      return 0;
    }
  }
  if (k < 3) {
    cout << "YES\n";
    return 0;
  }
  if (k == 3) {
    for (int i = 0; i < n; ++i) {
      int cnt = 0;
      for (int j = 0; j < k; ++j) {
        cnt += !a[i][j];
      }
      if (cnt > 1) {
        cout << "YES\n";
        return 0;
      }
    }
    cout << "NO\n";
    return 0;
  }
  if (k == 4) {
    for (int i = 0; i < n; ++i) {
      int cnt = 0;
      for (int j = 0; j < k; ++j) {
        cnt += !a[i][j];
      }
      if (cnt > 2) {
        cout << "YES\n";
        return 0;
      }
    }
    cout << "NO\n";
    return 0;
  }
  return 0;
}