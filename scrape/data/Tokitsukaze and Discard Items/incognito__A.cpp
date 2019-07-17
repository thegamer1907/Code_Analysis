#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; (i) < (int) (n); (i) ++)
using namespace std;

int main() {
        long long n;
        scanf("%lld", &n);
        long long m, k;
        scanf("%lld%lld", &m, &k);
        vector<long long> a(m), pos(m);
        rep(i, m) {
                scanf("%lld", &a[i]);
                a[i] --;
        }
        long long acc = 0, ans = 0;
        rep(i, m) {
                long long p = (a[i] - acc + k) % k;
                long long cnt = k - p;
                long long b = a[i];
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
        printf("%lld\n", ans);
        return 0;
}