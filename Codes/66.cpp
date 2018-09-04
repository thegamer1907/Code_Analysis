#pragma GCC optimize("O3")
#define first x
#define second y
#include <bits/stdc++.h>

using namespace std;

enum {MOD0 = 1000000000, MOD7 = 1000000007, MOD9 = 1000000009};
typedef unsigned short ushort;typedef unsigned int uint;typedef long long ll;typedef unsigned long long ull;
template <typename T> ostream &operator<<(ostream &cout, vector<T> &a){for(size_t i = 0; i < a.size(); ++i) cout << a[i] << " "; return cout;}
template <typename T> ostream &operator<<(ostream &cout, vector<vector<T> > &a){for(size_t i = 0; i < a.size(); ++i) cout << a[i] << endl; return cout;}
#ifdef ONLINE_JUDGE
#define endl '\n'
#endif

ll a[500001];
int ans[500001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        a[i + 1] = a[i] + x;
    }
    ll sum = a[n];
    if (sum % 3) {
        cout << 0 << endl;
        return 0;
    }
    sum /= 3;
    for (int i = 1; i <= n; ++i) {
        ans[i] = ans[i - 1] + (a[i] == 2 * sum);
    }
    ll ret = 0;
    for (int i = 1; i < n; ++i) {
        if (a[i] == sum) {
            ret += ans[n - 1] - ans[i];
        }
    }
    cout << ret << endl;
    return 0;
}
