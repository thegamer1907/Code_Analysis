#include <bits/stdc++.h>

using namespace std;

int n, k;
map <int, int> exist;

int main() {
  scanf("%d %d", &n, &k);
  for(int i = 0; i < n; i++) {
    int mask = 0;
    for(int j = 0; j < k; j++) {
      int x;
      scanf("%d", &x);
      if(x) mask |= (1 << j);
    }
    exist[mask]++;
  }
  for(int i = 0; i < (1 << k); i++) {
    for(int j = 0; j < (1 << k); j++) {
      if((i & j) == 0 and exist[i] and exist[j]) {
        cout << "YES";
        return 0;
      }
    }
  }
  cout << "NO";
  return 0;
}