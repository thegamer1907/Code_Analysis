#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n, k;

ll m, a;

map <ll, ll> p[3]; 

int main() {
    ios::sync_with_stdio(false);
    cin >> n >> k;
    for (int i = 1; i <= n; i ++) {
        cin >> a;
        if (a % k == 0) p[2][a] += p[1][a / k], p[1][a] += p[0][a / k];
        p[0][a] ++;
    }
    for (auto i : p[2])
        m += i.second;
    cout << m;
    return 0;
}