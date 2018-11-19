#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector <int> arr(100, 0);
  for (int i = 0; i < n; i++) {
    int sum = 0;
    for (int j = 0; j < k; j++) {
      int val;
      cin >> val;
      sum = (sum << 1) + val;
    }
    arr[sum] = 1;
  }  
  int ok = 0;
  if (arr[0]) {
    ok = 1;
  }
  if (ok) {
    cout << "YES";
    return 0;
  }

  for (int i = 0; i < (1 << k); i++) {
    for (int j = i + 1; j < (1 << k); j++) {
      if (arr[i] && arr[j] && ((i & j) == 0)) {
        ok = 1;
      }
    }
  }

  if (ok) {
    cout << "YES";
  } else {
    cout << "NO";
  }

  return 0;
}