#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
#define maxn 5000
using namespace std;
char str[maxn];
char s[maxn][maxn];
int n;
int main()
{
    while(~scanf("%s",str))
    {
        int len=strlen(str);
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
            scanf("%s",s[i]);
        bool flag=false;
        for(int i=1;i<=n;i++)
        {
            if(s[i][0]==str[0]&&s[i][1]==str[1])
            {
                flag=true;
                break;
            }
            for(int j=1;j<=n;j++)
            {
                if(s[i][1]==str[0]&&s[j][0]==str[1])
                {
                    flag=true;
                    break;
                }
            }
        }
        if(flag)
            printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
