/*
https://codeforces.com/problemset/problem/500/A
#graph
*/

#include <iostream>
using namespace std;

int a[1234567];

int main() {
  int n, t;
  scanf("%d %d", &n, &t);
  for (int i = 1; i < n; i++) {
    scanf("%d", a + i);
  }
  int x = 1;
  while (x < t) {
    x += a[x];
  }
 cout<<(x == t ? "YES" : "NO");
  return 0;
}

