#include <bits/stdc++.h>
#define ll long long
const int INF = 1e9;
const int N = 1e5 + 10;
const int K = 25;
using namespace std;
ll n, k, d[N];
ll f[K][N], l = 1, r;
ll num[N], sum;
bool used[N];
void rev(int x) {
    if(used[x] ^= 1) sum += num[d[x]]++;
    else sum -= --num[d[x]];
}
void solve(int L, int R) {
    while(l > L) rev(--l);
    while(l < L) rev(l++);
    while(r < R) rev(++r);
    while(r > R) rev(r--);
}
void div(int now, int L, int R, int ql, int qr) {
    if(L > R) return;
    int mid = L+R >> 1;
	int ans = ql;
    for(int i = min(mid, qr); i >= ql; i--) {
        solve(i, mid);
        if(f[now][mid] > f[now-1][i-1]+sum) ans = i, f[now][mid] = f[now-1][i-1]+sum; 
    }
    div(now, L, mid-1, ql, ans);
    div(now, mid+1, R, ans, qr);
}
int main() {
    scanf("%d%d", &n, &k);
    for(int i = 1; i <= n; i++)
      scanf("%d", &d[i]);
    memset(f, 0x3f, sizeof(f));
    f[0][0] = 0;
    for(int i = 1; i <= k; i++)
      div(i, 1, n, 1, n);
    printf("%lld\n", f[k][n]);
    return 0;
}