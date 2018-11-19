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
    char x, y, a, b;
    int n, i, f1 = 0, f2 = 0;
    cin >> x >> y;
    cin >> n;
    for (i = 1; i <= n; i++){
        cin >> a >> b;
        if (a == x && b == y){
            cout << "YES" << endl;
            return 0;
        }
        if (a == y) f1 = 1;
        if (b == x) f2 = 1;
    }
    if (f1 && f2) cout << "YES" << endl; else cout << "NO" << endl;
    return 0;
}
