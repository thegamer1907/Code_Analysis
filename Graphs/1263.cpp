#include <bits/stdc++.h>
#define rep(i, a, comp, b)      for(auto i = a; i comp b; ++i)
#define per(i, a, comp, b)      for(auto i = a; i comp b; --i)
#define loop(i, a, comp, b, op) for(auto i = a; i comp b; i op)
#define repeat(t)               for(auto tmp__ = t; tmp__ > 0; --tmp__)
#define sz(x) ((int)sizeof(x))
#define pb push_back
#define eb emplace_back
constexpr int INF = 2e9;
constexpr int MOD = 1e9 + 7;
constexpr int MAXINPUT = 1e5 + 10;
using ll  = long long;
using ull = unsigned long long;
using ii  = std::pair<int, int>;
template <class T>
using matrix = std::vector<std::vector<T>>;
using namespace std;

ll n;
vector<ll> a;

template<class T>
T max_range_sum(std::vector<T>& vec) {
    constexpr int INF = 2e9;
    T max_sum = (T)-INF;
    T sum = 0;
    for(auto i : vec) {
        sum += i;
        max_sum = ((max_sum < sum) ? sum : max_sum);
        if(sum < 0) sum = 0;
    }
    return max_sum;
}
ll k;


int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
//    ll k;
    cin >> n >> k;
    a.resize(n+11);
    rep(i, 0, <, n-1) cin >> a[i];

    bool can = false;
    ll p = 0;
    while(true) {
        if(p == k-1) {
            can = true;
            break;
        }
        if(p > k-1) break;
        p += a[p];
    }
    if(can) cout << "YES" << endl;
    else cout << "NO" << endl;

}