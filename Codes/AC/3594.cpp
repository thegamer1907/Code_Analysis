#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define pll pair<ll,ll>
#define vl vector<ll>
#define vll vector < pll >
#define sl set<ll>
#define mll map<ll,ll>
#define itr :: iterator
#define pf push_front
#define f first
#define s second
#define MOD 1000000007

struct edge {
    ll A;
    ll B; 
};

bool edgecompare(edge lhs, edge rhs) { if(lhs.B!=rhs.B)return lhs.B < rhs.B;
else return lhs.A<rhs.A;}

const ll MAX = 1000000;

ll n, m, k;
ll x, s;
ll a[MAX], b[MAX], c[MAX], d[MAX];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m >> k;
    cin >> x >> s;
    a[0] = x;
    b[0] = 0;
    c[0] = 0;
    d[0] = 0;
    for (ll i = 1; i <= m; i++) cin >> a[i];
    for (ll i = 1; i <= m; i++) cin >> b[i];
    for (ll i = 1; i <= k; i++) cin >> c[i];
    for (ll i = 1; i <= k; i++) cin >> d[i];

    ll sol = n * x;

    for (ll i = 0; i <= m; i++)
    {
        ll left = s - b[i];
        if (left < 0) continue;

        ll l = 0, r = k;
        while (l < r)
        {
            ll m = (l + r + 1) / 2;
            
            if (d[m] <= left) l = m; 
            else r = m-1;
        }

        sol = min(sol, (n - c[l]) * a[i]);
    }
    cout << sol << endl;
    return 0;
}