#include <bits/stdc++.h>
using namespace std;
#define eps 1e-8
#define INF 0x3f3f3f3f
#define maxn 100005
#define LL long long
char s[maxn];
char str[105][2];
int main()
{
    int flag=0,n;
    scanf("%s",s);
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%s",str[i]);
        if(str[i][0]==s[0]&&str[i][1]==s[1])
            flag=1;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(str[i][1]==s[0]&&str[j][0]==s[1])
                flag=1;
        }
    }
    if(flag)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
