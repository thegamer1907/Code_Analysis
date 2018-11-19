#include <bits/stdc++.h>

using namespace std;

int cnt[1 << 7];

int main() {
  #ifdef Zonda_R
    freopen("data.in", "r", stdin);
    freopen("data.out", "w", stdout);
  #endif
  int n, k;
  scanf("%d %d", &n, &k);
  memset(cnt, 0, sizeof cnt);
  for(int i = 0; i < n; ++i) {
    int tt = 0, x;
    for(int j = k - 1; j >= 0; --j) {
      scanf("%d", &x);
      tt |= (x << j);
    }
    cnt[tt]++;
  }
  for(int i = 0; i < 16; ++i) {
    for(int j = 0; j < 16; ++j) {
      if((i & j) == 0 && cnt[i] > 0 && cnt[j] > 0) { 
        puts("YES"); return 0; 
      }
    }
  }
  puts("NO");
  return 0;
}