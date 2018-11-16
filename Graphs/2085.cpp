#include <bits/stdc++.h>

using namespace std;

int solve(int n, int m) {
  if (n >= m) {
    return n-m;
  }
  if (m % 2 == 0) {
    return 1 + solve(n, m/2);
  }
  else {
    return 2 + solve(n, (m+1)/2);
  }
}

int main() {
  int n, m;
  cin >> n >> m;
  cout << solve(n, m) << endl;
  return 0;
}
