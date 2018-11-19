#include <cstdio>

int const kMaxK = 4;

int g_counts[1 << kMaxK];

bool Can(int k, int counts[]) {
  if (counts[0] != 0)
    return true;

  int const full = 1 << k;
  for (int mask1 = 0; mask1 < full; ++mask1) {
    for (int mask2 = mask1 + 1; mask2 < full; ++mask2) {
      if (counts[mask1] != 0 && counts[mask2] != 0 && (mask1 & mask2) == 0)
        return true;
    }
  }
  return false;
}

int main() {
  int n, k;
  scanf("%d%d", &n, &k);

  for (int i = 0; i < n; ++i) {
    int m = 0;
    for (int j = 0; j < k; ++j) {
      int b;
      scanf("%d", &b);
      m = (m << 1) | b;
    }
    ++g_counts[m];
  }

  printf("%s\n", Can(k, g_counts) ? "YES" : "NO");
  return 0;
}
