//D
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <bitset>
#define Log(x) (31 - __builtin_clz(x))
#define rep(i,l,r) for(int i=l;i<=r;i++)
#define red(i,r,l) for(int i=r;i>=l;i--)
#define re(i,n) for(int i=0;i<n;i++)
#define db(x) cout<<#x<<"="<<(x)<<" "
#define el cout<<endl
#define PII pair<int, int>
#define PIII pair<PII, int>
#define c0 first
#define c1 second
using namespace std;
const int MXN = 210, lim = 16;
int n, m;
char a[MXN][MXN];
char s[2][MXN][MXN] = {};
bitset <1<<lim> c[MXN][lim + 1];

int main()
{
    scanf("%d", &n);
    rep(k, 1, n)
    {
        re(t, lim)
            c[k][t].reset();
        scanf("%s", a[k]);
        int l = strlen(a[k]);
        re(i, l)
        {
            int r = 0;
            rep(j, i, (l - 1))
            {
                if (j - i >= lim) break;
                r = (r << 1) + (a[k][j] - '0');
                c[k][j - i][r] = 1;
            }
        }
        re(j, min(lim, l))
            s[0][k][j] = a[k][j];
        rep(j, l - min(lim, l), l - 1)
            s[1][k][l - j - 1] = a[k][j];
        //puts(s[0][k]);
        //puts(s[1][k]);el;
    }
    scanf("%d", &m);
    rep(t, 1, m)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        re(i, lim)
            c[n + t][i] = c[x][i] | c[y][i];
        static char b[MXN]; int l;
        memset(b, 0, sizeof(b));
        strcat(b, s[1][x]); reverse(b, b + strlen(b));
        strcat(b, s[0][y]);
        l = strlen(b);
        //db(b),el;
        //db(c[n +t][1][3]),el;
        //db(c[n +t][1][3]),el;
        re(i, l)
        {
            int r = 0;
            rep(j, i, (l - 1))
            {
                if (j - i >= lim) break;
                r = (r << 1) + (b[j] - '0');
                c[n + t][j - i][r] = 1;
            }
        }
        //db(c[n +t][0][3]),el;
        //db(c[n +t][1][3]),el;

        strcat(s[0][n + t], s[0][x]);
        if (strlen(s[0][n + t]) < lim)
        {
            strcat(s[0][n + t], s[0][y]);
            s[0][n + t][lim] = 0;
        }
        strcat(s[1][n + t], s[1][y]);
        if (strlen(s[1][n + t]) < lim)
        {
            strcat(s[1][n + t], s[1][x]);
            s[1][n + t][lim] = 0;
        }
        //puts(s[0][n + t]);
        //puts(s[1][n + t]);el;

        int ans = lim;
        re(i, lim)
        {
            re(j, (1 << (i + 1) ))
            if (!c[n + t][i][j])
            {
                ans = i;
                break;
            }
            if (ans != lim) break;
        }
        printf("%d\n", ans);
    }
    return 0;
}