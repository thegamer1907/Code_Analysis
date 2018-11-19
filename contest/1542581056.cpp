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
#include <queue>
#include <unordered_map>
#define rust(a, b, c, d) sqrt(sqr(a - c) + sqr(b - d))

#define sqr(a) (a)*(a)
#define m_p make_pair
#define fi first
#define se second
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0)
#define files freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
#define endl '\n'

typedef long long ll;
const int MAXINT=2147483640;
const ll MAXLL=9223372036854775800LL;
const ll MAXN=1000000;

using namespace std;

string s[MAXN];
unordered_map <string, ll> mp;


bool check(string s1, string s2) {
    if (mp[s1] == 0) return 0;
    for (ll j = 0; j < s1.size(); ++j) if (s1[j] == '1' && s2[j] == '1') return 0;
    return 1;
}
int main()
{
    fast_io;

    ll n, k, i, j, y;

    cin >> n >> k;
    y = (1LL << k);
    for (i = 1; i <= n; ++i) {
        ll flag = 0;
        for (j = 1; j <= k; ++j) {
            ll x;
            cin >> x;
            s[i] += char(x + '0');
            if (x == 1) flag = 1;
        }
        if(!flag) {cout << "YES" << endl; return 0;}
        mp[s[i]] = 1;
    }

    for (i = 1; i <= n; ++i) {

        for (j = 0; j < y; ++j) {
            string ans = "";
            ll x = j;
            for (ll z = 1; z <= k; ++z) {
                if (x % 2) ans = '1' + ans;
                else ans = '0' + ans;
                x /= 2;
            }
            if (check(ans, s[i])) {cout << "YES" << endl; return 0;}
        }
    }
    cout << "NO" << endl;
    return 0;
}
