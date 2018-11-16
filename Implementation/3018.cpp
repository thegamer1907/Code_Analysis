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

string s[1234];

void solve() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> s[i];
    bool ok = false;
    for (int i = 0; i < n; i++) {
        if (s[i][0] == s[i][1] && s[i][0] == 'O') {
            s[i][0] = s[i][1] = '+';
            ok = true;
            break;
        }
        if (s[i][3] == s[i][4] && s[i][3] == 'O') {
            s[i][3] = s[i][4] = '+';
            ok = true;
            break;
        }
    }
    if (!ok)
        cout << "NO";
    else {
        cout << "YES\n";
        for (int i = 0; i < n; i++)
            cout << s[i] << "\n";
    }
}

int main() {
    init();
    solve();

    return 0;
}
