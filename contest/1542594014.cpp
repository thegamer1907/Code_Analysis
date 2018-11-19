#include <bits/stdc++.h>

using namespace std;

string s, t, a[107];
int n, yes;

int main() {

  cin >> s >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      t = "";
      t += a[i];
      t += a[j];
      if (t.find(s) != -1) {
        yes = 1;
      }
    }
  }  

  cout << (yes ? "YES" : "NO");

  return 0;
}