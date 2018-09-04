#include <bits/stdc++.h>

using namespace std;

#if 1
    #define pv(x) cout<<#x<<" = "<<x<<"; ";cout.flush()
    #define pn cout<<endl
#else
    #define pv(x)
    #define pn
#endif

#ifdef ONLINE_JUDGE
    #define in cin
    #define out cout
#else
    ifstream in("date.in");
    ofstream out("date.out");
#endif

using ll = long long;
using ull = unsigned long long;
using uint = unsigned int;
#define pb push_back
#define mp make_pair
const int NMax = 1e5 + 5;
const ll inf_ll = 1e18 + 5;
const int inf_int = 1e9 + 5;
const int mod = 1e9 + 7;
using zint = int;

// get the total number of cells in the multiplication table that are <= mx;
ll getTotal(ll mx, ll N, ll M) {
    ll ans = 0;

    for (ll i = 1;i <= N;++i) {
        // add the number of such cells for the ith row;
        ans += min(mx / i, M);
    }

    return ans;
}

int main() {
    cin.tie(0);
    cin.sync_with_stdio(false);

    ll N,M,K;
    in >> N >> M >> K;

    ll ans = 0;
    ll pw = 1;
    for (;pw <= N*M;pw <<= 1) ;
    pw >>= 1;

    // binary search;
    while (pw) {
        if (getTotal(ans + pw, N, M) < K) {
            ans += pw;
        }

        pw >>= 1;
    }

    out << ans + 1;

    return 0;
}

