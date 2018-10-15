#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define sz(x) (int)((x).size())
typedef pair< int, int > pii;
typedef pair< long long, long long > pll;
typedef long long ll;
typedef vector< int > vi;
typedef vector< ll > vll;
typedef vector< pii > vpii;
typedef vector< pll > vpll;

typedef long double ld;

const ll MOD = 1e9 + 7;
ll lgput(ll a, ll b, ll mod) {
    ll ret = 1;
    while( b ){
        if(b & 1) ret = (ret * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }

    return ret;
}

int binarySearch(vector< int > &v, int value) {
    int best = 0;
    for(int step = 29; step >= 0; --step) {
        if(best + (1<<step) < v.size() && v[best + (1<<step)] <= value) best += (1<<step);
    }

    return best;
}

inline ll inv(ll x, ll MOD) {
    return lgput(x, MOD - 2, MOD);
}

int main() {
//    freopen("input", "r", stdin); freopen("output", "w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cout.precision(12);
    cout << fixed;

    int n, m;
    cin >> n >> m;
    int maxx = 0;
    int sum = 0;
    for(int i = 1; i <= n; ++i) {
      int x;
      cin >> x;
      maxx = max(maxx, x);
      sum += x;
    }

  int mm = m;
    m = max(0, m - n*maxx + sum);

    cout << maxx + (m/n) + (m%n != 0);
    cout << ' ' << mm + maxx;
}
