#pragma GCC optimize("Ofast")
#pragma GCC optimize("inline")
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
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0)

typedef long long ll;
const int MAXINT=2147483640;
const ll MAXLL=9223372036854775800LL;
const ll MAXN=1000000;
const double pi=3.1415926535897932384626433832795;
using namespace std;

ll f1[300000];
ll f2[300000];

int main()
{

// freopen("1.in", "r", stdin);
// freopen("1.out", "w", stdout);
    fast_io;
    srand(time(0));

    string s,s1,s2;
    ll n;

    cin >> s;
    cin >> n;

    ll h1=0;

    for (int i=1; i<=n; i++) {
        cin >> s1;
        f1[s1[0]]=1;
        f2[s1[1]]=1;

        if (s1==s) {
            cout << "YES" << endl;
            return 0;
        }

    }

//

    if (f2[s[0]]==1 and f1[s[1]]==1) {
        cout << "YES" << endl;
        return 0;
    }

   cout << "NO" << endl;

    return 0;
}
