#include <bits/stdc++.h>
using namespace std;
int main()
{
    char p[2];
    int n;
    scanf("%s %d",p,&n);
    char s[n][2];
    int i,j,f=0;
    for (i=0; i<n; i++) scanf("%s",s[i]);
    for (i=0; i<n; i++)
    {
        if ((s[i][1]==p[0] && s[i][0]==p[1]) || (s[i][0]==p[0] && s[i][1]==p[1]))
        {
            f=1;
            break;
        }
        for (j=0; j<n-1; j++)
            if ((s[i][1]==p[0] && s[j][0]==p[1]) || (s[j][1]==p[0] && s[i][0]==p[1]))
            {
                f=1;
                break;
            }
    }
    printf( f ? "YES\n" : "NO\n");
    return 0;
}
