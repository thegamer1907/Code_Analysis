//Author: dream_maker
#include<bits/stdc++.h>
using namespace std;
//----------------------------------------------
typedef pair<int, int> pi;
typedef long long ll;
typedef double db;
#define fi first
#define se second
#define fu(a, b, c) for (int a = b; a <= c; ++a)
#define fd(a, b, c) for (int a = b; a >= c; --a)
#define fv(a, b) for (int a = 0; a < (signed)b.size(); ++a)
const int INF_of_int = 1e9;
const ll INF_of_ll = 1e18;
template <typename T>
void Read(T &x) {
  bool w = 1;x = 0;
  char c = getchar();
  while (!isdigit(c) && c != '-') c = getchar();
  if (c == '-') w = 0, c = getchar();
  while (isdigit(c)) {
    x = (x<<1) + (x<<3) + c -'0';
    c = getchar();
  }
  if (!w) x = -x;
}
template <typename T>
void Write(T x) {
  if (x < 0) {
    putchar('-');
    x = -x;
  }
  if (x > 9) Write(x / 10);
  putchar(x % 10 + '0');
}
//----------------------------------------------
const int N = 1e5 + 10;
const int M = 23;
int n, m, a[N], cnt[N] = {0};
ll nowl = 1, nowr = 0, res = 0;
ll dp[N][M];
void move_step(int al, int ar) {
  while (nowr < ar) {
    ++nowr;
    res += cnt[a[nowr]];
    ++cnt[a[nowr]];
  }
  while (nowl > al) {
    --nowl;
    res += cnt[a[nowl]];
    ++cnt[a[nowl]];
  }
  while (nowr > ar) {
    --cnt[a[nowr]];
    res -= cnt[a[nowr]];
    --nowr;
  }
  while (nowl < al) {
    --cnt[a[nowl]];
    res -= cnt[a[nowl]];
    ++nowl;
  }
}
void solve(int l, int r, int ql, int qr, int k) {
  if (l > r) return;
  int mid = (l + r) >> 1, pos = mid;
  fu(i, ql, min(qr, mid - 1)) {
    move_step(i + 1, mid);
    if (dp[i][k - 1] + res < dp[mid][k]) {
      dp[mid][k] = dp[i][k - 1] + res;
      pos = i;
    }
  }
  solve(l, mid - 1, ql, pos, k);
  solve(mid + 1, r, pos, qr, k);
}
int main() {
#ifdef dream_maker
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  Read(n), Read(m);
  fu(i, 1, n) Read(a[i]);
  fu(i, 1, n) 
    fu(j, 0, m) dp[i][j] = INF_of_ll;
  dp[0][0] = 0;
  fu(i, 1, m) solve(1, n, 0, n, i);
  Write(dp[n][m]);
  return 0;
}