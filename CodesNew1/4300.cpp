#include <bits/stdc++.h>
#define pb push_back
#define F first
#define S second
#define ins insert
#define mp make_pair
#define fo(i, n1, n, x) for(int i = n1; i <= n; i += x)
#define foo(i, n, n1, x) for(int i = n; i >= n1; i -= x)
#define bit __builtin_popcount
#define md (l + ((r - l) / 2))
#define all(x) x.begin(),x.end()
#define ll long long
#define ld long double
#define eb emplace_back
#define ub upper_bound
#define lb lower_bound
#define ios ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define file(s) if (fopen(s".in", "r")) freopen(s".in", "r", stdin), freopen(s".out", "w", stdout)

using namespace std;

const int N = 5e5 + 11, mod = 1e9 + 7;
const int INF1 = 2e9 + 11;
const ll INF2 = 2e18 + 11;
const int base = 500;
const int P = 31;
const int dx[] = {1, -1, 0, 0, 1, 1, -1, -1};
const int dy[] = {0, 0, 1, -1, 1, -1, 1, -1};
const double EPS = 1e-12;
const double PI = acos(-1.0);

int n;
string s[N];
main() {
    file("queue");
    ios;
    cin >> n;
    fo(i, 1, n, 1) cin >> s[i];
    foo(i, n - 1, 1, 1) if (s[i] > s[i + 1]) for (int j = 0; j < s[i].size(); ++j) if (s[i][j] > s[i + 1][j]) s[i] = s[i].substr(0, j);
    fo(i, 1, n, 1) cout << s[i] << "\n";
    return 0;
}
