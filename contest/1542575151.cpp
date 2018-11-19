#include<bits/stdc++.h>
using namespace std;
#define maxn 1010
char s[2],t[maxn][3];
int main()
{
    scanf("%s",s);
    int n;scanf("%d",&n);
    for(int i=1;i<=n;++i)
    {
        scanf("%s",t[i]);
        if(s[0]==t[i][0]&&s[1]==t[i][1])
        {
            puts("YES");
            exit(0);
        }
    }
    for(int i=1;i<=n;++i)
        for(int j=1;j<=n;++j)
        {
            if(t[i][1]==s[0]&&t[j][0]==s[1])
            {
                puts("YES");
                exit(0);
            }
        }
    puts("NO");
    return 0;
}
