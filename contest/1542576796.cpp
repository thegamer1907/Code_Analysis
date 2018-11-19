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
//#define endl "\n"

typedef long long ll;
typedef long double ld;
const int MAXINT = 2147483640;
const ll MAXLL = 9223372036854775800LL;
const ll MAXN = 1123456;
const ll MOD = 1123456769;
const int magic = 15;
using namespace std;

string suff[MAXN], pref[MAXN];
bool f[222][17][33333];
int step[30];
int main()
{
//    freopen("1.in", "r", stdin);
//    freopen("1.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    srand(time(0));
    int n, i, j, z, t, x, p, m, fer, sec, ans = 1, flag;
    string s;
    cin >> n;
    step[0] = 1;
    for (i = 1; i <= 25; i++) step[i] = step[i - 1] * 2;
    for (i = 1; i <= n; i++){
        cin >> s;
        for (j = 1; j <= magic; j++){
            for (z = 0; z <= int(s.size()) - j; z++){
                x = 0;
                p = 1;
                for (t = z; t < z + j; t++) {
                    if (s[t] == '1') x += p;
                    p *= 2;
                }
                f[i][j][x] = 1;
            }
        }
        pref[i] = s.substr(0, 10000);
        suff[i] = s.substr(max(0, int(s.size() - 10000)), 10000);
    }

    cin >> m;
    for (i = 1 + n; i <= m + n; i++){
        cin >> fer >> sec;
        s = suff[fer] + pref[sec];

        for (j = 1; j <= magic; j++){
            for (z = 0; z <= int(s.size()) - j; z++){
                x = 0;
                p = 1;
                for (t = z; t < z + j; t++) {
                    if (s[t] == '1') x += p;
                    p *= 2;
                }
                f[i][j][x] = 1;
            }
        }
        pref[i] = s.substr(0, 10000);
        suff[i] = s.substr(max(0, int(s.size() - 10000)), 10000);

        flag = ans = 0;
        for (j = 1; j <= magic; j++){
            for (z = 0; z < step[j]; z++) {
                f[i][j][z] = (f[i][j][z] || f[fer][j][z]) || f[sec][j][z];
                if (!f[i][j][z]) flag = 1;
            }
            if (!flag) ans = j; else break;
        }
        cout << ans << endl;
    }
    return 0;
}