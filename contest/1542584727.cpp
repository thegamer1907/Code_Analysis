// author: gary
#include <bits/stdc++.h>
using namespace std;
#define SZ(x) ( (int) (x).size() )
typedef pair<int, int> pii;
typedef long long ll;
template<class T> bool cmax(T& a, T b) { if(a < b) { a = b; return true; } return false; }
template<class T> bool cmin(T& a, T b) { if(a > b) { a = b; return true; } return false; }

int n, k;

int cnt[1 << 4];

int main() {
  scanf("%d%d", &n, &k);
  for(int i = 0; i < n; i++) {
    int x, mask;
    mask = 0;
    for(int j = 0; j < k; j++) {
      scanf("%d", &x);
      mask |= (x << j);
    }
    cnt[mask]++;
  }

  bool ok = cnt[0] > 0;
  for(int i = 0; i < (1 << k); i++) {
    if(!cnt[i]) continue;
    for(int j = 0; j < (1 << k); j++) {
      if(!cnt[j]) continue;
      ok |= (i & j) == 0;
    }
  }

  puts(ok ? "YES" : "NO");
  return 0;
}
