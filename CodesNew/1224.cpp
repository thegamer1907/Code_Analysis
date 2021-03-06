#include <bits/stdc++.h>

using namespace std;

#define fr first
#define sc second
#define pb push_back
#define ins insert
#define input freopen("input.txt","r",stdin)
#define output freopen("output.txt","w",stdout)
#define mp make_pair
#define fast_io ios_base::sync_with_stdio(0);
#define y1 yy1
//iterator , unsigned, begin, end, count, continue
// fixed setprecision

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef vector<int> vi;
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;

string itosm(ll x)
{
    if(x == 0)
        return "0";
    string res = "";
    while(x > 0)
    {
        res += ((x % 10) + '0');
        x /= 10;
    }
    reverse(res.begin(), res.end());
    return res;
}

ll stoim(string str)
{
    ll res = 0;
    int p = 0;
    if(str[0] == '-')
        p++;
    for(int i = p; i < str.length(); i++)
    {
        res *= 10;
        res += (str[i] - '0');
    }
    return res;
}

const ll infll = 1e18 + 3;
const int inf = 1009000999;
const ld eps = 1e-7;
const int maxn = 1e6 + 1146;
const int baseint = 1000200013;
const ll basell = 1e18 + 3;
const ld PI = acos(-1.0);
const ll mod = 1e9 + 7;

ll binpow(ll x, ll st)
{
    if(st == 0)
        return 1;
    if(st & 1)
        return binpow(x, st - 1) * x % mod;
    ll res = binpow(x, st >> 1);
    return res * res % mod;
}

int a[maxn];

void solve()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int mn = a[0];
    for(int i = 1; i < n; i++)
        mn = min(a[i], mn);
    mn -= (mn % n);
    int ans = mn;
    int i = 0;
    while(1)
    {
        if(a[i] <= ans)
            break;
        ans++;
        i++;
        i %= n;
    }
    cout << i + 1;
}

int main()
{
    srand(time(0));
//    srand(228);
    fast_io;
    cin.tie(0);
    cout.tie(0);
//    input;
//    output;
//    freopen("money.in", "r", stdin);
//    freopen("money.out", "w", stdout);
//    for(int i = 0; i < 100000; i++)
//        brut();
//     int t;
//     cin >> t;
//    scanf("%d", &t);
//     int cnt = 1;
//     while(t--){
//        cout << "Case #" << cnt << ": ";
        solve();
//        brut();
//         cout << "\n";
//        puts("");
//        cnt++;
//     }
    return 0;
}
