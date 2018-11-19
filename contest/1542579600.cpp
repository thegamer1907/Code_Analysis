#include<bits/stdc++.h>
#define x first
#define y second
#define sz size()
#define pb push_back
#define ALL(X) (X).begin(),(X).end()
using namespace std;
using ll = long long;
using ii =  pair<int,int>;
const int MOD(1e9+7);
const int MAXN(1e5+11);

int n, m, a[MAXN][4];
int d[16];

int main()
{
    scanf("%d%d", &n, &m);

    for (int i = 0; i < n; i++) {
        int x = 0;
        for (int j = 0; j < m; j++)
            scanf("%d", a[i] + j), x |= a[i][j] << j;
        ++d[x];
    }

    if (m == 1) return puts(d[0] < 1 ? "NO" : "YES"), 0;

    for (int i = 0; i < 1 << m; i++) {
        for (int j = 0; j < 1 << m; j++)
            if (!(j & i) && d[i] && d[j]) return puts("YES"), 0;
    }

    return puts("NO"), 0;
}
