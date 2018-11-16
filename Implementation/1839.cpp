#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> pii;
typedef vector<ll> vi;
typedef vector<ull> vull;
typedef vector<string> vst;
typedef vector<pii> vpii;
typedef map<ll, ll> mpii;
typedef set<ll> seti;

#define sci(t)  scanf("%d", &t)
#define scull(t) scanf("%ulld", &t)
#define scc(t)  scanf("%c", &t)
#define scs(t)  scanf("%s", t);
#define scd(t)  scanf("%lf", &t)
#define mem(a, b)   memset(a, (b), sizeof(a))
#define loop(i, j, k, inc)   for(ll i - j; i < = k; i += inc)
#define rloop(i, j, k, dec)  for(ll i = j; i>= k; i-=dec)
#define rep(i, j)   loop(i, 0, j - 1, 1)
#define rrep(i, j)  rloop(i, j - 1, 0, 1)
#define all(cont)   cont.begin(), cont.end()
#define rall(cont)  cont.end(), cont.begin()
#define foreach(it, l)  for(auto it = l.begin(); it != l.end(); it++)
#define sz(x)  x.size()
#define mp make_pair
#define pb push_back
#define INF (ll)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007


int main() {
    int n, x = 0, y = 0, z = 0;

    cin >> n;
    while (n--) {
        int a, b, c;
        cin >> a >> b >> c;
        x += a, y += b, z += c;
    }
    if (x || y || z)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}