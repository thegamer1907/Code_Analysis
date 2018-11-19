#include <bits/stdc++.h>

using namespace std;

int kt[1000][1000],t1,t2,a[10],d,tmp,i;


main()
{
    #ifndef ONLINE_JUDGE
    freopen ("aa.inp","r",stdin) ;
    freopen ("aa.out","w",stdout);
    #endif // ONLINE_JUDGE
    scanf("%d%d%d%d%d",&a[1],&a[2],&a[3],&t1,&t2);
    ///////////////////////////
    if (t1 == 12) t1 = 0;
    if (t2 == 12) t2 = 0;
    if (a[1] == 12) a[1] = 0;
    if (t1 > t2)
    {
        tmp = t1;
        t1 =t2;
        t2 = tmp;
    }
    t1 = t1 * 5;
    t2 = t2 * 5;
    a[1] = a[1] * 5;
    if (a[2] == 0 && a[3] == 0) {
        kt[a[1]][(a[1]+1)%60] = 1;
        tmp = (a[1] - 1) % 60;
        tmp = (tmp + 60) % 60;
        kt[tmp][a[1]] = 1;
    } else kt[a[1]][(a[1]+1)%60] = 1;
    if (a[3] == 0) {
        kt[a[2]][(a[2]+1)%60] = 1;
        tmp = (a[2] - 1) % 60;
        tmp = (tmp + 60) % 60;
        kt[tmp][a[2]] = 1;
    } else kt[a[2]][(a[2]+1)%60] = 1;
    kt[a[3]][(a[3]+1) % 60] = 1;
    tmp = (a[3] - 1) % 60;
    tmp = (tmp + 60) % 60;
    kt[tmp][a[3]] = 1;
    d = 0;
    for (i = t1; i <= t2-1; i++)
        if (kt[i][i+1] == 1) d++;
    if (d == 0)
    {
        printf("YES");
        return 0;
    }
    d = 0;
    while (t2 != t1)
    {
        tmp = (t2+1) % 60;
        if (kt[t2][tmp] == 1) d++;
        t2 = tmp;
    }
    if (d == 0) printf("YES"); else printf("NO");
}
