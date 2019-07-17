#pragma GCC optimize ("O3")
#include <bits/stdc++.h>
using namespace std;
#define MuhammedAly ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(x) (x).begin(),(x).end()
#define allr(x) (x).rbegin(),(x).rend()
#define pb push_back
#define eb emplace_back
#define popc(x) __builtin_popcount(x)
#define LLMX 1e18
#define NotinRange(n, m) i<0||i>=(n)||j<0||j>=(m)
#define mem(x, y) memset((x),(y),sizeof (x))
#define sz(a) (int)(a).size()
#define inFile(s) freopen((s),"r",stdin)
#define outFile(s) freopen((s),"w",stdout)
#define biEdge(v, a, b) (v)[(a)].pb((b)), (v)[(b)].pb((a))
#define pi (2 * acos(0))
#define X real()
#define Y imag()
#define cross(a, b) ((conj(a) * (b)).Y)
#define dot(a, b) ((conj(a) * (b)).X)
#define vec(a, b) ((b) - (a))
typedef long long ll;
typedef long double ld;
typedef complex<double> point;
typedef tuple<int, int, int> line;
typedef pair<point, point> segment;
typedef vector<point> polygon;
const int N = 1e5 + 5, M = 20 + 5, OO = 0x3f3f3f3f, mod = 1e9 + 7, base = 131, mod2 = 1000136437, mod3 = 998244353;
const double EPS = 1e-9;
ll n, m, k, arr[N], ans, page = 1, l, r, cnt;
int main()
{
    MuhammedAly
    cin >> n >> m >> k;
    for(int i = 0 ; i < m ; i++)
        cin >> arr[i];
    int i = 0;
    while(i < m)
    {
        r = page * k;
        l = r - k + 1;
        if(arr[i] - cnt < l || arr[i] - cnt > r)
            page = ceil((arr[i] - cnt) * (ld)1 / k);
        else
        {
            ans++;
            ll cur = 0;
            while(i < m && arr[i] - cnt >= l && arr[i] - cnt <= r)
                i++, cur++;
            cnt += cur;
        }

    }
    cout << ans;
    return 0;
}