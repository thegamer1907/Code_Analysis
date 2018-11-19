#include <bits/stdc++.h>
using namespace std;
bool blocked[12];
int main() {
  int h, m, s, t1, t2;
  cin >> h >> m >> s >> t1 >> t2;
  h %= 12;
  t1 %= 12;
  t2 %= 12;
  if (t1 > t2) {
    swap(t1, t2);
  }
  m /= 5;
  s /= 5;
  blocked[h] = true;
  blocked[m] = true;
  blocked[s] = true;
  bool ok1 = true, ok2 = true;
  for (int i = t1; i % 12 != t2; i++) {
    if (blocked[i % 12]) ok1 = false;
  }
  for (int i = t2; i % 12 != t1; i++) {
    if (blocked[i % 12]) ok2 = false;
  }
  if (ok1 || ok2) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
  return 0;
}
