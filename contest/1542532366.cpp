#include <bits/stdc++.h>
using namespace std;
#define N 100100
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

int n;
char s[N][2];
bool vis[30][30];

int main() {
    //freopen("1.in", "r", stdin);
    //freopen("11.out", "w", stdout);
    gets(s[0]);
    scanf("%d\n", &n);
    for (int i = 1; i <= n; i ++) gets(s[i]), vis[s[i][0]-'a'][s[i][1]-'a'] = 1;
    for (int i = 1; i <= n; i ++)
        for (int j = 1; j <= n; j ++)
            vis[s[i][1]-'a'][s[j][0]-'a'] = 1;

    if (vis[s[0][0]-'a'][s[0][1]-'a']) puts("YES");
    else puts("NO");

    return 0;
}
