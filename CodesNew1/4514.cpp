#include <bits/stdc++.h>
using namespace std;

typedef long long                   ll;
typedef long double                 ld;
typedef pair<int,int>               pii;
typedef pair<ll,ll>                 pll;
typedef pair<double,double>         pdd;
typedef pair<ld,ld>                 pld;
typedef pair<string , string>       pss;

#define all(x)                      (x).begin(),(x).end()
#define Sort(x)                     sort(all((x)))
#define X                           first
#define Y                           second
#define Mp                          make_pair
#define endt                        '\t'
#define ends                        ' '
#define error(x)                    cerr << #x << " = " << x << endl
#define fast_io                     ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
inline ll input(){ll n; cin >> n ; return n;}
ll pw(ll a , ll b)  { return (!b ? 1 : (b & 1 ? a * pw(a * a , b / 2) : pw(a * a , b / 2))); }

const ll MAXN = 5e5 + 10;
ll n , x , s[MAXN] , ans = 0;

int main()
{
    fast_io;

    cin >> n;
    for(ll i = 0 ; i < n ; i++) cin >> s[i];
    sort(s , s + n);

    x = n / 2;
    for(ll i = 0 ; i < n / 2 && x < n ; i++)
    {
        x = lower_bound(s + x , s + n , s[i] * 2) - s + 1;
        ans += (x != n + 1);
    }
    cout << n - ans << endl;

    return 0;
}
