#include <bits/stdc++.h>
using namespace std;
const int MAXN=200;
int n;
char pw[MAXN][2];
int main()
{
    scanf("%2s",pw[0]);
    scanf("%d",&n);
    for(int i=1;i<=n;i++)scanf("%2s",pw[i]);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            if(pw[i][1]==pw[0][0] && pw[j][0]==pw[0][1])
            {
                printf("YES\n");
                return 0;
            }
    for(int i=1;i<=n;i++)
        if(pw[i][0]==pw[0][0] && pw[i][1]==pw[0][1])
        {
            printf("YES\n");
            return 0;
        }
    printf("NO\n");
}