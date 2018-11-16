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

int a[123123];

void solve() {
    string s;
    cin >> s;
    int n = s.length();
    for (int i = 0; i < n; i++)
        a[i] = s[i] - '0';
    for (int i = 0; i < n; i++)
    if (a[i] % 8 == 0) {
        cout << "YES\n" << a[i];
        return;
    }
    for (int i = 0; i < n; i++)
    for (int j = i + 1; j < n; j++) {
        if ((a[i] * 10 + a[j]) % 8 == 0) {
            cout << "YES\n" << a[i] << a[j];
            return;
        }
    }
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
    for (int k = j + 1; k < n; k++) {
        if ((a[i] * 100 + a[j] * 10 + a[k]) % 8 == 0) {
            cout << "YES\n" << a[i] << a[j] << a[k];
            return;
        }
    }
    cout << "NO";
}

int main() {
    cout.precision(12);
    init();
    solve();

    return 0;
}
