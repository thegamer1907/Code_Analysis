#include <bits/stdc++.h>

using namespace std;

const int N = 103;

string a[N], s;
int n;

int main() {
  #ifdef GG
    freopen("a.in", "r", stdin);
    freopen("a.out", "w", stdout);
  #endif
  cin >> s;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      string tmp = a[i] + a[j];
      if (tmp.find(s) != string::npos) {
        cout << "YES";
        return 0;
      }
    }
  }
  cout << "NO";
  return 0;
}
