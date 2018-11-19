#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>
#include <cassert>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

#define PROBLEM "c"

#define SIZE(__c) (int)(__c).size()

#define BIT(__i) (1<<(__i))
#define ISSET(__n, __i) (((__n)&BIT(__i))!=0)

int main() {
#ifdef LAPTOP
  freopen(PROBLEM".in", "r", stdin);
#endif
  int i, j, f, m, M, c, n, Z, K, k, bn[16];
  while (scanf("%d %d", &Z, &K)==2) {
    memset(bn, 0, sizeof bn);
    for (i=0; i<Z; i++) {
      n=0;
      for (j=0; j<K; j++) {
        scanf("%d", &k);
        n=2*n+k;
      }
      bn[n]=1;
    }
    vector<int> nb;
    for (i=0; i<(1<<K); i++)
      if (bn[i])
        nb.push_back(i);
    f=0;
    M=(1<<SIZE(nb));
    for (m=1; m<M; m++) {
      c=0;
      vector<int> cn(K);
      for (i=0; i<SIZE(nb); i++)
        if (ISSET(m, i)) {
          c++;
          for (j=0; j<K; j++)
            if (ISSET(nb[i], j))
              cn[j]++;
        }
      f=1;
      for (i=0; i<K; i++)
        if (2*cn[i]>c) {
          f=0;
          break;
        }
      if (f)
        break;
    }
    puts(f ? "YES" : "NO");
  }
  return 0;
}
