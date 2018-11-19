#include <bits/stdc++.h>
#define pb push_back
#define fi first
#define se second

using namespace std;

typedef long long unsigned ll;
typedef long double ld;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;

const ld eps = 1e-12;
const double PI = 3.14159265359;
const int INF = 1e9 + 41;
const ll LINF = 1e18 + 41;
const int N = 1000 * 100;

ll myRand() {
    ll q = rand();
    return (q << 16) ^ rand();
}

int myabs(int x) {
    return (x < 0 ? -x : x);
}

void init() {
    #ifdef KEK
        freopen("a.in", "r", stdin);
        //freopen("a.out", "w", stdout);
    #else
        ///freopen("input.txt", "r", stdin);
        ///freopen("output.txt", "w", stdout);
    #endif // HARD
    cout.precision(2);
}

string a[500];

void solve() {
    string s;
    int n;
    cin >> s >> n;
    string q = "";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == s) {
            cout << "YES";
            return;
        }
    }
    for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++) {
        string t = a[i] + a[j];
        if (s[0] == t[1] && s[1] == t[2]) {
            cout << "YES";
            return;
        }
    }
    cout << "NO";
}

int main() {
    init();
    solve();
    return 0;
}
    