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

int n, k;
int a[16];

void solve()
{
    cin >> n >> k;
    for(int i = 0; i < n; i++)
    {
        int msk = 0;
        for(int j = 0; j < k; j++)
        {
            int x; cin >> x;
            msk |= (x << j);
        }
        a[msk] = 1;
    }
    int w = (1 << k);

    for(int i = 0; i < w; i++)
    {
        for(int j = 0; j < w; j++)
        {
            if((i & j) == 0 && a[i] && a[j])
            {
                cout << "YES";
                return;
            }
        }
    }
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
