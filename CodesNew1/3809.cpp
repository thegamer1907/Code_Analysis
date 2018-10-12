#define _debug

#define _out(x) cout << x << endl
#define _inf 1000000000000000000ll

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;

template<typename... Args>
void writeln(Args... args)
{
    ((cout << args << " "), ...);
    cout << endl;
}

#ifdef _debug
template<typename... Args>
void _db(Args... args)
{
    ((cerr << args << " ;; "), ...);
    cout << endl;
}
#else
template<typename... Args>
void _db(Args... args) {}
#endif


int main() {
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    ll sum = 0;
    ll a;
    ll maxxi = -1;
    for (int i = 0; i < n; ++i) {
        cin >> a;
        sum += a;
        maxxi = max(maxxi, a);
    }
    ll res = sum / (n - 1);
    if (sum % (n - 1) > 0) {
        ++res;
    }
    res = max(res, maxxi);
    cout << res << endl;
    return 0;
}
