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

#define _MAX 10000000
#define _MAX_N 1000000

int v[_MAX_N];
int spf[_MAX + 1];
int divs_count[_MAX + 1];
ll left_to_right[_MAX + 2];
ll right_to_left[_MAX + 2];

int main() {
    ios::sync_with_stdio(false);

    // calculate smallest prime factor
    for (int i = 1; i <= _MAX; ++i) {
        if (i % 2 == 0) {
            spf[i] = 2;
        } else {
            spf[i] = i;
        }
    }
    for (int i = 3; i * i <= _MAX; ++i) {
        if (spf[i] != i) {
            continue;
        }
        for (int t = i * i; t <= _MAX; t += i) {
            if (spf[t] == t) {
                spf[t] = i;
            }
        }
    }
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    
    // now we iterate all numbers and count their prime factors
    for (int i = 0; i < n; ++i) {
        int num = v[i];
        while (num > 1) {
            int lowest_prime_factor = spf[num];
            divs_count[lowest_prime_factor]++;
            while(num % lowest_prime_factor == 0) {
                num /= lowest_prime_factor;
            }
        }
    }
    ll sum = 0;

    for (int i = 0; i <= _MAX; ++i) {
        sum += divs_count[i];
        left_to_right[i] = sum;
    }

    sum = 0;
    for (int i = _MAX; i >= 0; --i) {
        sum += divs_count[i];
        right_to_left[i] = sum;
    }

    ll full = left_to_right[_MAX];
    int m;
    cin >> m;
    int low, high;
    for (int r = 0; r < m; ++r) {
        cin >> low >> high;
        if (low > _MAX) {
            cout << 0 << '\n';
            continue;
        }
        high = min(high, _MAX);
        ll left_slice = left_to_right[low - 1];
        ll right_slice = right_to_left[high + 1];
        ll res = full - left_slice - right_slice;
        cout << res << '\n';
    }
    flush(cout);
    return 0;
}
