#include <cstdio>
#include <vector>
#include <cstring>
using namespace std;

typedef long long ll;
const int maxn = 1e6 + 10;
int k, n;
char s[maxn];
vector<int> v;
ll ans = 0;

ll solve_0() {
    ll ret = 0, t;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '1') { 
            continue;
        }
        t = 1;
        for (++i; s[i] == '0'; ++i) {
            ++t;
        }
        ret += t * (t + 1) / 2;
    }
    return ret;
}

int main() {
#ifdef ac
    freopen("test.in", "r", stdin);
    freopen("test.out", "w", stdout);
#endif
    scanf("%d %s", &k, s);
    n = strlen(s);
    if (k == 0) {
        printf("%lld\n", solve_0());
        return 0;
    }
    v.push_back(0);
    for (int i = 0; i < n; ++i) {
        if (s[i] == '1') {
            v.push_back(i + 1);
        }
    }
    v.push_back(n + 1);
    for (int i = 1; i + k - 1 < (int)v.size() - 1; ++i) {
        ans += 1ll * (v[i] - v[i - 1]) * (v[i + k] - v[i + k - 1]);
    }
    printf("%lld\n", ans);
    return 0;
}