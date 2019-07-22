#include <stdio.h>

typedef long long ll;

int main(int argc, char const *argv[]) {
  ll n, k, j, sum = 0;
  int m, num = 0;
  scanf("%I64d %d %I64d", &n, &m, &k);
  ll h = k;
  scanf("%I64d", &j);
  if (k == 1) {
    for (int i = 1; i < m; i++) {
      scanf("%I64d", &j);
    }
    printf("%d\n", m);
  }
  else {
   for (int i = 0; i < m;) {
    if (j <= h) {
      sum++;
      if(i != m-1) scanf("%I64d", &j);
      i++;
    }
    else {
     if(sum == 0)  h += k;
     else {
      h += sum;
      num ++;
      sum = 0;
     }
    }
   }
  printf("%d\n", num+1);
  }
  return 0;
}