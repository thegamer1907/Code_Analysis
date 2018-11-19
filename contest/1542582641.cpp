#include <stdio.h>
#define MAXK 21

bool found[MAXK];

int main() {
  int n, K;
  scanf("%d%d", &n, &K);
  for (int i = 0; i < n; i++) {
    int bt = 0;
    for (int j = 0; j < K; j++) {
      int x;
      scanf("%d", &x);
      bt = bt * 2 + x;
    }
    found[bt] = true;
  }
  for (int i = 0; i < (1 << K); i++) {
    if (!found[i]) {
      continue;
    }
    int j = (1 << K) - 1 - i;
    for (int k = 0; k <= j; k++) {
      if ((j & k) == k && found[k]) {
	printf("YES\n");
	return 0;
      }
    }
  }
  printf("NO\n");
  return 0;
}
