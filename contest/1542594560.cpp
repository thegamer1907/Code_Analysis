#include <bits/stdc++.h>

using namespace std;

string s, t, a[1000];
int n;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  cin >> s >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      t = a[i] + a[j];
      if (t.find(s) != -1) {
        cout << "YES";
        return 0;
      }
    }
  }

  cout << "NO";

  return 0;
}