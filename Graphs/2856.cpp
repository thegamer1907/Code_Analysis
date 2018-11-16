#pragma GCC optimize("omit-frame-pointer")
#pragma GCC optimize("unroll-loops")

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <map>
#include <vector>
#include <cstring>
#include <iomanip>
#include <set>
#include <sstream>
#include <ctime>

#define rust(a, b, c, d) sqrt(sqr(a - c) + sqr(b - d))
#define sqr(a) (a)*(a)
#define m_p make_pair
#define fi first
#define se second
#define pb push_back
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0)


typedef long long ll;
const int MAXINT=2147483640;
const ll MAXLL=9223372036854775800LL;
const ll MAXN=1000000;
const double pi=3.1415926535897932384626433832795;
using namespace std;

multiset<ll> st;
ll x1[300000];
ll n, kol = 0;
vector<pair<ll,ll> > v[300000];


void dfs(int xx, ll val) {

    ll z = val - *(st.begin());
    if (z > x1[xx]) return;
    st.insert(val);



    kol++;
    for (int i = 0; i < v[xx].size(); i++) dfs(v[xx][i].fi, v[xx][i].se + val);
    st.erase(st.lower_bound(val));

}

int main()
{
// freopen("1.in", "r", stdin);
// freopen("1.out", "w", stdout);

    fast_io;
    srand(time(0));

    ll a, b;

    cin >> n;
    for (int i = 1; i <= n; i++) cin >> x1[i];
    for (int i = 2; i <= n; i++) {
        cin >> a >> b;
        v[a].push_back({i, b});
    }

    dfs(1, 0);
    cout << n - kol << endl;

    return 0;
}


