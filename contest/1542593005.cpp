#include <bits/stdc++.h>

using namespace std;


#define MAXN 101
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  string pass;
  cin >> pass;
  int n;
  string a[MAXN];
  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  for (int i = 0; i < n; ++i) {
    if (a[i]==pass) {
      cout << "YES" << endl;
      return 0;
    }
  }
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      if (a[i][1]==pass[0] && a[j][0]==pass[1] || a[j][1]==pass[0] && a[i][0]==pass[1]) {
        cout << "YES" << endl;
        return 0;
      }
    }
  }
  cout << "NO" << endl;
  return 0;
}
