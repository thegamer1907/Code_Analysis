#include <bits/stdc++.h>

using namespace std;

char ch[10],a[1000][10];
int n,i,j;
bool kt;

main()
{
    #ifndef ONLINE_JUDGE
    freopen ("aa.inp","r",stdin) ;
    freopen ("aa.out","w",stdout);
    #endif // ONLINE_JUDGE
    scanf("%c%c\n",&ch[1],&ch[2]);
    scanf("%d\n",&n);
    for (i = 1;i <= n; i++)
        scanf("%c%c\n",&a[i][1],&a[i][2]);
    kt = false;
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            if (a[i][2]==ch[1] && a[j][1] == ch[2]) kt = true;
    for (i = 1; i <= n; i++)
        if (a[i][1] == ch[1] && a[i][2] == ch[2]) kt = true;
    if (kt == true) printf("YES"); else printf("NO");
}
