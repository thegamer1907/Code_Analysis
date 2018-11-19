#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
  cin.sync_with_stdio(false);
  int n, K;
  cin >> n >> K;
  vector<int> a(1 << K);
  for (int i = 0; i < n; i++) {
    int v = 0;
    for (int j = 0; j < K; j++) {
      int t;
      cin >> t;
      if (t) v ^= (1 << j);
    }
    a[v] = 1;
  }
  for (int i = 0; i < 1 << K; i++) {
    for (int j = 0; j < 1 << K; j++) {
      if (a[i] && a[j] && !(i & j)) {
        cout << "YES" << endl;
        return 0;
      }
    }
  }
  cout << "NO" << endl;
  return 0;
}
