#include <bits/stdc++.h>
const int INF = 1e9;
const int N = 1e3 + 10;
using namespace std;

typedef long long ll;
typedef long double ld;


int main()
{
    ll n, m, k, x;
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cin >> n >> m >> k;
    queue <ll> a;
    for (int i = 0; i < m; ++i) {
        cin >> x;
        a.push(x);
    }
    ll page = 1;
    ll ans = 0;
    int sz = 0;

    while (!a.empty()) {
        sz = m - a.size();
        page = (a.front() - sz) / k;
        if ((a.front() - sz) % k != 0) {
            ++page;
        }
        while (!a.empty() && (a.front() - sz) <= page * k) {
            a.pop();
        }
        ++ans;
    }
    cout << ans;
    return 0;
}