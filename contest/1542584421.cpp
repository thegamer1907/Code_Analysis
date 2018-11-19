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
#define p_b push_back
#define m_p make_pair
#define fi first
#define se second
#define endl "\n"

typedef long long ll;
typedef long double ld;
const int MAXINT = 2147483640;
const ll MAXLL = 9223372036854775800LL;
const ll MAXN = 1123456;
const ll MOD = 1123456769;
using namespace std;

int main()
{
//    freopen("1.in", "r", stdin);
//    freopen("1.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    srand(time(0));
    int h, m, s, t1, t2, f1 = 0, f2 = 0, i, a, b, c;
    cin >> h >> m >> s >> t1 >> t2;
    h %= 12;
    t1 %= 12;
    t2 %= 12;
    a = h * 3600 + m * 60 + s;
    b = (m * 60 + s) * 12;
    c = s * 12 * 60;
    t1 *= 3600;
    t2 *= 3600;
    if (t1 > t2) swap(t1, t2);
    if (t1 < a && a < t2) f1 = 1; else f2 = 1;
    if (t1 < b && b < t2) f1 = 1; else f2 = 1;
    if (t1 < c && c < t2) f1 = 1; else f2 = 1;
    if (f1 + f2 < 2) cout << "YES" << endl; else cout << "NO" << endl;
    return 0;
}
