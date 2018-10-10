#include <bits/stdc++.h>
#ifdef DEBUG
#include "_debug.cpp"
#include "callable.hpp/callable.hpp"
#endif
#define endl '\n'
using namespace std;
using ll = long long;
struct frend { int m, s; };
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, d;
    cin >> n >> d;
    vector<frend> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i].m >> a[i].s;
    }
    sort(a.begin(), a.end(), [](auto& x, auto& y) {
        return x.m < y.m;
    });
    ll ans = 0;
    ll sum = 0;
    for(int i = 0, j = 0; i < n; sum -= a[i].s, i++) {
        for(; a[j].m - a[i].m < d and j < n; j++) {
            sum += a[j].s;
        }
        ans = max(ans, sum);
    }
    cout << ans << endl;
    return 0;
}
