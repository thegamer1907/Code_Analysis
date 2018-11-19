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

string s1[MAXN];

int main()
{
    fast_io;

    ll n, i, j;
    string s;

    cin >> s;
    cin >> n;
    for (i = 1; i <= n; ++i) {
        cin >> s1[i];
        if (s1[i] == s) {cout << "YES" << endl; return 0;}
    }
    for (i = 1; i <= n; ++i)
        for (j = 1; j <= n; ++j) if (s1[i][1] == s[0] && s1[j][0] == s[1]) {cout << "YES" << endl; return 0;}
    cout << "NO" << endl;
    return 0;
}
