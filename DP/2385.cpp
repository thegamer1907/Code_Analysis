#include <bits/stdc++.h>
using namespace std;

void init() {
//#if __GLIBCXX__ == 20160609
#ifdef KEK
    freopen("a.in", "r", stdin);
    ///freopen("a.out", "w", stdout);
#else
    ///freopen(TASKNAME".in", "r", stdin);
    ///freopen(TASKNAME".out", "w", stdout);
#endif
}
#define pb push_back
#define fi first
#define se second

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;

const double EPS = 1e-9;
const int INF = (int)1e9 + 41;
const int N = (int)1e6 + 34;

string num_to_string(int x) {
    string s = "";
    int n = x;
    while (n) {
        s += char(n % 10 + '0');
        n /= 10;
    }
    reverse(s.begin(), s.end());
    return s;
}

int a[200200], s[200200];

void solve() {
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        s[i] = (!i ? 0 : s[i - 1]) + a[i];
    int ps = 0;
    for (int i = 1; i < n; i++) {
        if (i + k > n)
            break;
        if (s[i + k - 1] - (!i ? 0 : s[i - 1]) < s[ps + k - 1] - (!ps ? 0 : s[ps - 1]))
            ps = i;
    }
    cout << ps + 1;
}

int main() {
    init();
    solve();

    return 0;
}
