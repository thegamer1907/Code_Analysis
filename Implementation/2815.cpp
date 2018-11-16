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


void solve() {
    int n;
    cin >> n;
    cout << n / 2 << "\n";
    if (n & 1)
        cout << "3 ";
    else
        cout << "2 ";
    for (int i = 0; i < n / 2 - 1; i++)
        cout << "2 ";

}

int main() {
    init();
    solve();

    return 0;
}
