#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<double> vd;
typedef vector<ld> vld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const int inf = 1e9 + 9;
const int mod = 1e9 + 7;
const ld eps = 1e-7;
const ll linf = 1e18 + 1;

#define pb push_back
#define eb emplace_back
#define mp make_pair
#define fst first
#define scn second

signed main()
{
    ios_base::sync_with_stdio(false);
    int n, a, b;
    cin >> n>> a >> b;
    if (a > b)
    {
        swap(a, b);
    }
    vi cur;
    for (int i = 0; i < n; i++)
    {
        cur.pb(i + 1);
    }
    int res = 1;
    while (1)
    {
        vi tmp;
        for (int i = 0; i < cur.size(); i += 2)
        {
            if (cur[i] == a && cur[i + 1] == b)
            {
                if (cur.size() == 2)
                {
                    cout << "Final!";
                }
                else
                {
                    cout << res;
                }
                return 0;
            }
            if (cur[i] == a || cur[i] == b)
            {
                tmp.pb(cur[i]);
            }
            else
            {
                tmp.pb(cur[i + 1]);
            }
        }
        cur = tmp;
        res++;
    }
}
