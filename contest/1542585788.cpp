#include <cstdio>
#include <iostream>
using namespace std;

int tab[20];

int main() {
  int n, k, x, s;
  scanf("%d%d", &n, &k);
  for (int i = 1; i <= n; i ++) {
    s = 0;
    for (int j = 1; j <= k; j ++) {
      scanf("%d", &x);
      s <<= 1; s += x;
    }
    tab[s] = 1;
  }
  bool flag;
  for (int i = 0; i < 16; i ++)
    if (tab[i])
      for (int j = 0; j < 16; j ++)
	if (tab[j]) {
	  flag = 1;
	  for (int k = 0; k < 4; k ++)
	    if (((i >> k) & 1) && ((j >> k) & 1)) flag = 0;
	  if (flag) return puts("YES"), 0;
	}
  puts("NO");
  return 0;
}
