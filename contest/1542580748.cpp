#include <bits/stdc++.h>

#define Pi acos(-1.)
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define pii pair<int, int>
#define FILE "knapsack"
#define standart 1

using namespace std;

typedef long long ll;

const int INF = 1e9;
const ll LINF = 4e18;
const int MAXN = 1e5 + 228;
const int MOD = 1e9 + 7;
const double eps = 1e-14;

int cnt = 0;

void solve()
{
    int h, m, s, t1, t2;
    cin >> h >> m >> s >> t1 >> t2;
    h *= 10;
    t1 *= 10;
    t2 *= 10;
    m *= 2;
    s *= 2;
    if(s > 0)
        m++;
    if(s > 0 || m > 0)
        h++;
    h %= 120;
    t1 %= 120;
    t2 %= 120;
    m %= 120;
    s %= 120;
    int mn = min(t1, t2);
    int mx = max(t1, t2);
    t1 = mn, t2 = mx;
    if(t1 < h && h < t2)
        cnt++;
    if(t1 < m && m < t2)
        cnt++;
    if(t1 < s && s < t2)
        cnt++;
    if(cnt == 0 || cnt == 3)
        cout << "YES";
    else
        cout << "NO";

}

int main()
{
    if(!standart)
    {
        freopen(FILE".in", "r", stdin);
        freopen(FILE".out", "w", stdout);
    }
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t = 1;
    while(t--)
        solve();

    return 0;
}
