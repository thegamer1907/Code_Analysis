#include <bits/stdc++.h>
#define INF 2e9
#define pi 3.1415926535

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  int n, m;
  cin >> n >> m;
  set <string> t;
  for (int i = 0; i < n + m; i++) {
    string tmp;
    cin >> tmp;
    t.insert(tmp);
  }
  if (n > m) {
    cout << "YES";
    return 0;
  }
  if (n < m) {
      cout << "NO";
      return 0;
  }
  if (t.size() % 2)
    cout << "YES";
  else
    cout << "NO";
  return 0;
}