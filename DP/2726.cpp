#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
  int n, ans = 0;
  cin >> n;
  int b[] = {100, 20, 10, 5, 1};
  for (int i = 0; i < 5; i++) {
    ans += n / b[i];
    n %= b[i];
  }
  cout << ans << endl;
  return 0;
}
