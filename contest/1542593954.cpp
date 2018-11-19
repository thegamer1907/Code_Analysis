#include <bits/stdc++.h>
#define LL __int64

using namespace std;

int n;
bool flag;
char s[10],st[1000][10];

int main()
{
//    freopen("a.in","r",stdin);
    for ( ; scanf("%s",s)!=EOF; )
    {
        scanf("%d",&n);
        for (int i=1; i<=n; i++) scanf("%s",st[i]);
        flag=false;
        for (int i=1; i<=n; i++)
        for (int j=1; j<=n; j++)
        {
            if (st[i][0]==s[0] && st[i][1]==s[1]) flag=true;
            if (st[i][1]==s[0] && st[j][0]==s[1]) flag=true;
            if (st[j][0]==s[0] && st[j][1]==s[1]) flag=true;
        }
        printf(flag?"YES\n":"NO\n");
    }
    return 0;
}
