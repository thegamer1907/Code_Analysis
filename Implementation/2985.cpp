#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, m; cin >> n >> m;
  n = min(n, m);
  cout << (n&1? "Akshat": "Malvika") << '\n';
}
