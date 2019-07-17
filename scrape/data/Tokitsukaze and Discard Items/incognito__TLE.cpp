#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; (i) < (int) (n); (i) ++)
using namespace std;

int main() {
        long long n;
        scanf("%lld", &n);
        int m, k;
        scanf("%d%d", &m, &k);
        vector<int> a(m), pos(m);
        rep(i, m) {
                scanf("%d", &a[i]);
                a[i] --;
        }
        int acc = 0;
        int ans = 0;
        rep(i, m) {
                int p = (a[i] - acc + k) % k;
                int cnt = k - p;
                int b = a[i];
                while (a[i] <= b + cnt - 1) {
                        i ++;
                        acc ++;
                        if (i == m) {
                                break;
                        }
                }
                ans ++;
                i --;
        }
        printf("%d\n", ans);
        return 0;
}