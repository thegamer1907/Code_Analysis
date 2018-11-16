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

int a[200200];

void solve() {
    int n;
    int c1, c2;
    c1 = c2 = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x, c;
        cin >> x >> c;
        if (x < c)
            c2++;
        if (x > c)
            c1++;
    }
    if (c1 == c2)
        cout << "Friendship is magic!^^";
    if (c1 > c2)
        cout << "Mishka";
    if (c1 < c2)
        cout << "Chris";
}

int main() {
    init();
    solve();

    return 0;
}
