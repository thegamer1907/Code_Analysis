#include <bits/stdc++.h>

using namespace std;
typedef long long LL;
typedef pair<int, int> pii;

#define MAXN 200003
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define FAIL {cout << -1 << endl; return 0;}

int N, M;
LL K;

LL f(LL k) {
    LL r = 0;
    for (int i = 1; i <= N; i++)
        r += min(1LL * M, k / i);

    return r;
}

int main(int argc, char **argv) {
#ifdef OJ
    freopen("input.txt", "rt", stdin);
    //freopen("output.txt", "wt", stdout);
#endif
    ios::sync_with_stdio(false);

    scanf("%d %d %lld", &N, &M, &K);

    LL l = 0, r = 1LL * N*M;
    while (r - l > 1) {
        LL m = (l + r) / 2;
        if (f(m) < K) l = m;
        else r = m;
    }

    printf("%lld\n", r);
    return 0;
}