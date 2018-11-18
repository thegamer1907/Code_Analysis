#include <bits/stdc++.h>
using namespace std;
#define N 100100
#define K 5
#define inf 1000000000
#define eps 1e-7
#define pi acos(-1)
#define gc getchar
#define pc putchar
#define pb push_back

typedef pair<int, int> pii;
typedef long long ll;

template <class T>
inline void chkmax(T &x, T y) {if (x < y) x = y;}

template <class T>
inline void chkmin(T &x, T y) {if (x > y) x = y;}

int n, k, ii, mini = 5, a[N][K], s[N];
bool fl, vis[5][5];
vector <int> v;

int main() {
    //freopen("1.in", "r", stdin);
    //freopen("11.out", "w", stdout);
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i ++) {
        for (int j = 0; j < k; j ++)
            scanf("%d", &a[i][j]), s[i] += a[i][j];
        if (mini > s[i]) mini = s[i], ii = i;
    }
    if (mini == 0) fl = 1;
    else if (mini == 1) {
        for (int j = 0; j < k; j ++) if (a[ii][j]) v.pb(j);;
        fl = 0;
        for (int i = 0; i < n; i ++)
            if (!a[i][v[0]]) fl = 1;
    }
    else if (mini == 2 && k == 4) {
        for (int i = 0; i < n; i ++) {
            if (s[i] > 2) continue;
            v.clear();
            for (int j = 0; j < k; j ++)
                if (a[i][j]) v.pb(j);
            vis[v[0]][v[1]] = 1;
        } fl = 0;
        if (vis[0][1] && vis[2][3]) fl = 1;
        if (vis[0][2] && vis[1][3]) fl = 1;
        if (vis[0][3] && vis[1][2]) fl = 1;
    }
    else fl = 0;
    if (fl) puts("YES");
    else puts("NO");

    return 0;
}
