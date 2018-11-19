# include <bits/stdc++.h>
using namespace std;
# define orz(x) cerr<<#x<<" = "<<x<<endl
# define sq(x) ((x)*(x))
# define x first
# define y second

typedef double DB;
typedef long long LL;
typedef pair<int, int> Pr;
const DB EPS = 1e-8;
const int INF = 0x3f3f3f3f;
const int N = 300;

char s[N][3];
char pwd[4];
int n;

int main(void) {
# ifdef owly
    freopen("in.txt", "r", stdin);
# endif

    scanf("%s", pwd);
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%s", s[i]);

    bool ok = false;
    for (int i = 0; i < n; i++) if (pwd[0] == s[i][0] && pwd[1] == s[i][1]) ok = true;
    if (ok) return 0 * puts("YES");

    ok = false;
    for (int i = 0; i < n; i++) if (pwd[0] == s[i][1]) ok = true;
    if (!ok) return 0 * puts("NO");
    ok = false;
    for (int i = 0; i < n; i++) if (pwd[1] == s[i][0]) ok = true;
    if (!ok) return 0 * puts("NO");
    puts("YES");

    return 0;
}
