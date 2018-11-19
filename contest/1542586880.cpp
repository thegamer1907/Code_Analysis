#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int h, m, s, t1, t2, t[60] = {0};
  cin >> h >> m >> s >> t1 >> t2;
  t1 *= 5; t2 *= 5;
  t1 %= 60; t2 %= 60;
  t[(h*5) % 60] = 1; t[m] = 1, t[s] = 1;

  for(int i = 0; i < 60; i++) {
    if((t1 + i) % 60 == t2) {
      cout << "YES" << endl;
      return 0;
    }
    if(t[(i + t1) % 60] == 1) {
      break;
    }
  }
  for(int i = 0; i < 60; i++) {
    if((t2 + i) % 60 == t1) {
      cout << "YES" << endl;
      return 0;
    }
    if(t[(i + t2) % 60] == 1) {
      break;
    }
  }
  cout << "NO" << endl;
  return 0;
}
