#include <bits/stdc++.h>

using namespace std;

constexpr int N = 1e5 + 10;

long long n, m, v, ans;
map <long long, long long> p1, p2;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> v;
        if (v % m == 0) {
            ans += p2[v / m];
            p2[v] += p1[v / m];
        }
        p1[v]++;
    }
    cout << ans << '\n';
    return 0;
}
