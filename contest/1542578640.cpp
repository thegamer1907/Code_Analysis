#include <bits/stdc++.h>

using namespace std;

int n, k, sum, val, arr[1000];

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  cin >> n >> k;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < k; j++) {
      cin >> val;
      sum = (sum << 1) + val;
    }
    arr[sum] = 1;
    sum = 0;
  }  
  if (arr[0]) {
    cout << "YES";
    return 0;
  }

  for (int i = 0; i < (1 << k); i++) {
    for (int j = i + 1; j < (1 << k); j++) {
      if (arr[i] && arr[j] && ((i & j) == 0)) {
        cout << "YES";
        return 0;
      }
    }
  }

  cout << "NO";

  return 0;
}