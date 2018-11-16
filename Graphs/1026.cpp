#include <bits/stdc++.h>
using namespace std;

int vis[111111];

int main( )
{
    int n, t, d;
    int ara[111111];
    int i;

    scanf("%d %d", &n, &t);

    for (i = 1; i < n; i++)     scanf("%d", &ara[i]);

    vis[1] = 1;
    for (i = 1; i < n; )
    {
        i = i + ara[i];
        if (i > t)  break;
        vis[i] = 1;
    }

    if (vis[t] == 0)    printf("NO\n");
    else                printf("YES\n");

    return 0;
}
