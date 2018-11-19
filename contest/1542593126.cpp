#include <bits/stdc++.h>
using namespace std;

char ss[100][10];
char psd[10];
int main() {
    scanf("%s",psd);

    int n;
    scanf("%d",&n);

    bool fg=false;
    for (int i=1;i<=n;i++)
    {
        scanf("%s",ss[i]);
        if (ss[i][0] == psd[0] && ss[i][1] == psd[1])
            fg=true;
    }

    for (int i=1;i<=n;i++)
        for (int j=1;j<=n;j++)
            {
                if (ss[i][1] == psd[0] && ss[j][0]==psd[1])
                    fg=true;
            }

    if (fg) puts("YES");
    else
        puts("NO");
    return 0;
}