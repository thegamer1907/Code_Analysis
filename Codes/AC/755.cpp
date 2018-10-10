#include "bits/stdc++.h"
using namespace std;
typedef long long LL;

int main() {
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  int k; cin >> k;
  int i;
  for (i = 1; k > 0; i++) {
    int s = 0;
    for (int j = i; s <= 10 && j > 0; j /= 10) {
      s += j % 10;
    }
    if (s == 10) k--;
  }
  cout << (i - 1) << '\n';
  return 0;
}
