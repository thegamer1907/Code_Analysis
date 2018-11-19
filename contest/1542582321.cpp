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

int f[MAXN];
int main()
{
//    freopen("1.in", "r", stdin);
//    freopen("1.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    srand(time(0));
    int n, k, i, j, x, y, p;
    cin >> n >> k;
    for (i = 1; i <= n; i++){
        x = 0;
        p = 1;
        for (j = 0; j < k; j++){
            cin >> y;
            if (y == 1) x += p;
            p *= 2;
        }
        f[x] = 1;
    }
    for (i = 0; i < p; i++)
        for (j = 0; j < p; j++) if (f[i] && f[j] && (i & j) == 0){
            cout << "YES" << endl;
            return 0;
        }
    cout << "NO" << endl;
    return 0;
}
