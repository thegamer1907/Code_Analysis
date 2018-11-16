#include <bits/stdc++.h>

#pragma GCC optimize("Ofast")
#pragma GCC optimize("no-stack-protector")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,popcnt,abm,mmx,tune=native")
#pragma GCC optimize("fast-math")

#define rn(n) int n; cin >> n;
#define fv(i, n) for (int i = 0; i < n; i++)
#define mp(a, b) make_pair(a, b)

typedef long long ll;

const int INF = 1'000'000'007;

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

    ll a; cin >> a;
    if (a % 2) cout << -1 * (a + 1) / 2;
    else cout << a / 2;
}
