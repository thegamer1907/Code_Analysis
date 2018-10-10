#include <bits/stdc++.h>
#ifdef DEBUG
#include "_debug.cpp"
#include "callable.hpp/callable.hpp"
#endif
#define endl '\n'
using namespace std;
using ll = long long;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    ll k;
    cin >> n >> k;
    for(int ans = n; ans >= 1; ans--) {
        if(k % (1ll << (ans - 1)) == 0) {
            cout << ans << endl;
            return 0;
        }
    }
    return 0;
}
