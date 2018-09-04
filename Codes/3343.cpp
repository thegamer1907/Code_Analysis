#include <cstdio>
#include <algorithm>
using namespace std;
int n, a[100010];

bool judge(int x) {
    x *= n;
    for (int i = 0; i < n; ++i)
        if (a[i] <= x) return true;
    return false;
}

void solve() {
    int mi = 1e9, mx = 0;
    for (int i = 0; i < n; ++i) {
        a[i] -= i;
        mi = min(a[i], mi);
        mx = max(a[i], mx);
    }
    int L = 0, R = mx / n + 1, mid;
    while (L < R) {
        mid = ((long long)L + R) / 2;
        if (judge(mid))
            R = mid;
        else
            L = mid + 1;
    }
    int ans;
    for (int i = 0; i < n; ++i) if (a[i] <= L * n) {
        ans = i + 1;
        break;
    }
    printf("%d\n", ans);
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
        scanf("%d", a + i);
    solve();
    return 0;
}