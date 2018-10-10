#include <iostream>
#include <algorithm>
using namespace std;

const int N = 1e5 + 6;

long long ans(0), S, sol;

int n, v[N];

long long auxv[N];

bool _merge(int val) {
    for (int i = 1; i <= n; ++i) {
        auxv[i] = 1LL * v[i] + 1LL * i * val;
    }
    sort(auxv + 1, auxv + n + 1);
    sol = 0;
    for (int i = 1; i <= val; ++i) {
        sol += auxv[i];
    }
    return (sol <= S);
}

int cb() {
    int pas = 1<<30, r(0);
    while (pas > 0) {
        if (r + pas <= n && _merge(r + pas)) {
            r += pas;
            ans = sol;
        }
        pas >>= 1;
    }
    return r;
}

int main()
{
    cin >> n >> S;
    for (int i = 1; i <= n; ++i) {
        cin >> v[i];
    }
    cout << cb();
    cout.flush();
    cout << " " << ans;
    return 0;
}
