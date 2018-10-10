#include <cstdio>
#include <algorithm>
#include <iostream>
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
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0)

typedef long long ll;
const int MAXINT=2147483640;
const ll MAXLL=9223372036854775800LL;
const ll MAXN=1000000;

using namespace std;

ll a[MAXN];

map <ll, ll> mp;
map <ll, ll> can;

int main()
{
    fast_io;

    ll n, k, i, j;

    cin >> n >> k;
    for (i = 1; i <= n; ++i) {
        cin >> a[i];
        mp[a[i]]++;
    }
    ll res = 0;
    for (i = n; i >= 1; --i) {
        if (i != n) can[a[i + 1]]++;
        mp[a[i]]--;
        if (a[i] % k == 0) res += (mp[a[i] / k] * can[a[i] * k]);
       }
       cout << res << endl;
    return 0;
}






