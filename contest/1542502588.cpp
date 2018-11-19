#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,k;
const int N = 1e5+10;
const ll INF = 1e15;
int a[N], c[N], l_, r_; // [l_, r_)
ll f[N], g[N], tot;
void solve(int l, int r, int L, int R) {// [l, r), [L, R)
    
    if (l >= r) return;
    int mid = (l + r) >> 1, u = min(mid, R - 1);
    //printf("solve: %d %d %d %d %d\n", l, r, L, R, mid);
    while (l_ > u) tot += c[a[--l_]]++;
    while (r_ < mid + 1) tot += c[a[r_++]]++;
    while (l_ < u) tot -= --c[a[l_++]];
    while (r_ > mid + 1) tot -= --c[a[--r_]];
    int p = l_; ll &val = f[mid + 1];
    val = g[l_] + tot;
    while (l_ > L) {
        tot += c[a[--l_]]++;
        ll x = g[l_] + tot;
        if (x < val) val = x, p = l_;
    }
    solve(l, mid, L, p + 1);
    solve(mid + 1, r, p, R);
}

int main() {
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; i++) scanf("%d", a + i);
    fill(g + 1, g+n+1, INF);
    for (int i = 0; i < k; i++) {      
        solve(i,n,i,n);
        /*printf("i=%d: ", i);
        for (int j = 0; j <= n; j++) printf("%lld ", f[j]);
        printf("\n\n\n");*/
        copy(f,f+n+1,g);
    }
    printf("%lld\n", f[n]);
}