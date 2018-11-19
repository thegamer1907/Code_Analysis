#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool vis[16];
int N, K;

int main()
{
#ifdef linjian
freopen("C:\\Users\\linjian\\Documents\\in.txt", "r", stdin);
#endif
  scanf("%d%d", &N, &K);
  for (int i = 0; i < N; ++i) {
    int mask = 0;
    for (int j = 0; j < K; ++j) {
      int a;
      scanf("%d", &a);
      mask |= a << j;
    }
    vis[mask] = true;
  }
  if (vis[0]) {
    printf("YES\n");
    return 0;
  }
  for (int i = 1; i < 16; ++i) {
    if (vis[i]) {
      for (int j = i + 1; j < 16; ++j) {
        if (vis[j]) {
          if ((i & j) == 0) {
            printf("YES\n");
            return 0;
          }
        }
      }
    }
  }
  printf("NO\n");
  return 0;
}