#include <bits/stdc++.h>

#define sqr(a) (a) * (a)
#define fi first
#define se second
#define m_p make_pair
#define p_b push_back
#define endl "\n"

typedef long long ll;
const int MAXN = 1123456;
const int MAXINT = 2147483640;
const ll MAXLL = 9223372036854775800LL;
const int MAXANS = 1000000007;
const int MOD = 1000000123;
const int MOD2 = 1000000321;
using namespace std;

int f[MAXN];
int main(){
//    freopen("1.in", "r", stdin);
//    freopen("1.out", "w", stdout);
    ios_base :: sync_with_stdio(0);
    cin.tie(0);
    srand(time(0));
    int n, a, b, i, j, kol, res;
    cin >> n >> a >> b;
    if (a > b) swap(a, b);
    kol = n;
    res = 0;
    while (!f[a] && !f[b]){
        for (i = 1; i <= n; i++) if (!f[i]){
            for (j = i + 1; j <= n; j++) if (!f[j]){
                if (i == a || i == b) f[j] = 1; else f[i] = 1;
                i = j;
                break;
            }
        }
        ++res;
        kol /= 2;
        if (res == 10) break;
    }
    if (kol == 1) cout << "Final!" << endl; else cout << res << endl;
    return 0;
}
