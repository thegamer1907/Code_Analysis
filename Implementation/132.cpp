#include <bits/stdc++.h>

using namespace std;

#define sqr(a) ((a)*(a))
#define forn(i, n) for (int i = 0; i < (n); i++)
#define rforn(i, n) for (int i = (n) - 1; i >= 0; i--)
#define sz(a) int(a.size())
#define pb push_back

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ld, ld> pld;
typedef pair<ll, ll> pll;

const int N = 1e6 + 9;
const int M = 1e3 + 9;
const int INFINT = 1e9 + 9;
const ll INFLL = 1e18 + 9;
const ld EPS = 1e-12;

int find_lg(int k) {
    int cnt = 0;
    while (k != 1) {
        k >>= 1;
        cnt++;
    }
    return cnt;
}

int main()
{
    ios::sync_with_stdio(0);
    int n, a, b, l, r, m, pc, cnt;
    cin >> n >> a >> b;
    l = 1;
    r = n;
    if (a > b)
        swap(a, b);
    cnt = find_lg(n);
    pc = cnt;
    while (l < r) {
        m = (l + r)/2;
//        cout << l << ' ' << r << '\n';
        if (a <= m && b <= m) {
            r = m;
            cnt--;
        }
        else if (a > m && b > m) {
            l = m + 1;
            cnt--;
        }
        else {
            break;
        }
    }
    if (cnt == pc)
        cout << "Final!";
    else
        cout << cnt;
    return 0;
}
