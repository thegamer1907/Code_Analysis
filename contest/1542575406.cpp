#include <bits/stdc++.h>
using namespace std;
int mp[6666];
int main()
{
    int n,k,x;
    scanf("%d%d",&n,&k);
    for (int i=1;i<=n;i++) {
        int tmp = 0;
        for (int j = 1; j <= k; j++) {
            scanf("%d", &x);
            tmp = tmp * 2 + x;
        }
        mp[tmp]=1;
    }

    for (int i=0;i<(1<<k);i++)
        for (int j=0;j<(1<<k);j++)
            if (mp[i] && mp[j] && (i&j)==0)
            {
                puts("YES");
                return 0;
            }
    puts("NO");
    return 0;
}