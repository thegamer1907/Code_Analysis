#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int MAX_N = 1e5 + 5;

int num[16];
int N, K;

void solve()
{
  int kk = 1 << K;
  for (int mask = 1; mask < (1 << kk); ++mask) {
    int tmpMask = mask;
    int cnt[4] = {0, 0, 0, 0};
    int tot = 0;
    bool empty = false;
    while (tmpMask > 0) {
      int lowbit = tmpMask & -tmpMask;
      int idx = 31 - __builtin_clz(lowbit);
      //cout << "lowbit=" << lowbit << " idx=" << idx << endl;
      int tmpNum = num[idx];
      if (tmpNum == 0) {
        empty = true;
        break;
      }
      tot++;
      for (int i = 0; i < K; ++i) {
        if (idx >> i & 1) cnt[i]++;
      }
      tmpMask -= lowbit;
    }
    if (empty) continue;
    if(tot == 0) continue;
    bool ok = true;
    for (int i = 0; i < K; ++i) {
      if (cnt[i] * 2 > tot) {
        ok = false;
        break;
      }
    }
    if (ok) {
      //printf("mask=%d\n", mask);
      cout << "YES\n";
      return;
    }
  }
  cout << "NO\n";
}

int main()
{
#ifdef linjian
freopen("C:\\Users\\linjian\\Documents\\in.txt", "r", stdin);
#endif
  scanf("%d%d", &N, &K);
  for (int i = 0; i < N; ++i) {
    int tmp = 0;
    for (int j = 0; j < K; ++j) {
      int a;
      scanf("%d", &a);
      if (a) tmp |= 1 << j;
    }
    num[tmp]++;
  }
  solve();
  return 0;
}