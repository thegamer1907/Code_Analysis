#include <bits/stdc++.h>
#define pb push_back
#define sz(a) ((int)a.size())
#define cina(a, n) a.resiz(n); for(auto &i: a) cin >> i;

using namespace std;

typedef long long ll;
typedef long double ld;

const int INF = 1e9 + 9;
const ld EPS = 1e-10;
const ll LINF = (ll)(1e18) + 9;
const ll M = 1e9 + 7;
const int N = 1024;

ll n;
vector <ll> a;

int main()
{
    #ifdef MAKS
    {
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    }
    #endif // MAKS
    cin >> n;
    ll m , k;
    cin >> m >> k;
    m--;
    k--;
    ll rez1 = 1, rez2 = 0;
    ll b = 1;
    while (rez1 != rez2)
    {
        rez1 = m / (1 << b);
        rez2 = k / (1 << b);
        b++;
    }
    if (n > (1 << (b - 1)))
        cout << b - 1;
    else
        cout << "Final!";
    return 0;

}
