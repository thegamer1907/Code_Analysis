#include <bits/stdc++.h>

using namespace std;

#define endl           '\n'
#define LL             long long
#define ULL            unsigned long long
#define all(x)         x.begin(), x.end()

const LL MOD = 1000000007;
const LL LINF = 0x3f3f3f3f3f3f3f3fLL;
const int INF = 0x3f3f3f3f;
const int N = 1e5 + 5;

string r;
LL nb, ns, nc;
LL pb, ps, pc;
LL b, s, c, have;

inline bool check(LL m) {
    LL need_b = max(0LL, m * b - nb);
    LL need_s = max(0LL, m * s - ns);
    LL need_c = max(0LL, m * c - nc);
    LL cost = need_b * pb + need_s * ps + need_c * pc;
    return have >= cost;
}

int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    cin >> r;
    cin >> nb >> ns >> nc;
    cin >> pb >> ps >> pc;
    cin >> have;
    for (auto i : r) {
        if (i == 'B') b++;
        if (i == 'S') s++;
        if (i == 'C') c++;
    }
    LL lo = 0, hi = 1e15, res = 0;
    while (lo <= hi) {
        LL mid = (lo + hi) >> 1;
        if (check(mid)) res = mid, lo = mid + 1;
        else hi = mid - 1;
    }
    printf("%lld\n", res);
    return 0;
}