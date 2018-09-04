//#pragma GCC optimize("O3")
#include <bits/stdc++.h>
#define enl printf("\n")
#define case(t) printf("Case #%d: ", (t))
#define ni(n) scanf("%d", &(n))
#define nl(n) scanf("%I64d", &(n))
#define nai(a, n) for (int i = 0; i < (n); i++) ni(a[i])
#define nal(a, n) for (int i = 0; i < (n); i++) nl(a[i])
#define pri(n) printf("%d\n", (n))
#define prl(n) printf("%I64d\n", (n))
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vii vector<pii>
#define vi vector<int>
#define pb push_back
#define mp make_pair
#define fi first
#define se second
typedef long long ll;
const double pi = acos(-1);
const int MOD = 1e9 + 7;
const int INF = 1e9 + 7;
const int MAXN = 1e6 + 5;
const double eps = 1e-10;
using namespace std;
int a[MAXN];

int main()
{
    int n, l;
    ni(n), ni(l);
    for (int i = 0; i < n; i++)
        ni(a[i]);
    sort(a, a + n);
    double lo = max(a[0], l - a[n - 1]), hi = INF;
    while (abs(lo - hi) > eps)
    {
        double m = (lo + hi) / 2.;
        double p = a[0] + m;
        bool fl = 1;
        for (int i = 1; fl && i < n; i++)
        {
            if (a[i] - m > p + eps)
                fl = 0;
            p = a[i] + m;
        }
        if (fl)
            hi = m;
        else
            lo = m;
    }
    printf("%.20f\n", lo);
    return 0;
}
