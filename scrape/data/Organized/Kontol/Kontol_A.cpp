#define DEBUG(...)
/*                        Strip me down and go to town                        */
/*                          Lick me over upside down                          */
/*                     Pound and pound and pound and pound                    */
/*                        Baby make me make that sound                        */
/*                Aaah, aaah, aaah, aaah, aaaaaaaaaaaaaaaaaah!                */
#include<stdio.h>

typedef long long int LL;

LL P[100005];

int main() {
  LL N, k;
  int m;
  scanf("%lld %d %lld", &N, &m, &k);
  for (int i = 0; i < m; i++) {
    scanf("%lld\n", &P[i]);
    P[i]--;
  }
  int ans = 0;
  int rem = 0;
  int i = 0;
  while (i < m) {
    LL pick = (P[i] - rem + k) % k;
    LL range = P[i] - pick + k - 1;
    ans++;
    while (i < m && P[i] <= range) {
      i++;
      rem = (rem + 1) % k;
    }
  }
  printf("%d\n", ans);
  return 0;
}