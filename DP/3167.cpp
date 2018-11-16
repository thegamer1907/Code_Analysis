#include <bits/stdc++.h>
#define inf (1<<17)

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int v;
  cin >> v;

  vector<int> c(9);
  int mc = inf;
  for (int i = 0; i < 9; i++) {
    cin >> c[i];
    mc = min(mc, c[i]);
  }

  int dig = v / mc;

  if (dig == 0){
    cout << "-1\n";
    return 0;
  }

  for (int i = dig - 1; i >= 0; i--) {
    int ts = v - i * mc, j;

    for (j=8;j>=0;j--)
      if (c[j] <= ts) break;

    cout << j+1;
    v -= c[j];
  }

  cout << "\n";
}
