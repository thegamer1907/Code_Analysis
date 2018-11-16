#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
  int n;
  cin >> n;
  int ans = 0;
  while (n--) {
    int u, v;
    cin >> u >> v;
    if (u > v) ans++;
    else if (u < v) ans--;
  }
  if (ans > 0) cout << "Mishka\n";
  else if (ans < 0) cout << "Chris\n";
  else cout << "Friendship is magic!^^\n";
  return 0;
}
