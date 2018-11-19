#include <bits/stdc++.h>
#define rank ra
#define lson rt<<1
#define rson rt<<1|1
#define pb push_back
using namespace std;
typedef long long ll;
char res[10];
char s[200][10];
int main()
{
    int n;
    while(scanf(" %s",res)!=EOF)
    {
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
            scanf("%s",s[i]);
        int flag=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(i==j)
                {
                    if((s[i][0]==res[0]&&s[i][1]==res[1])||(s[i][1]==res[0]&&s[i][0]==res[1]))
                    {
                        flag=1;
                        break;
                    }
                    continue;
                }
                if(s[i][1]==res[0]&&s[j][0]==res[1])
                {
                    flag=1;
                    break;
                }
            }
            if(flag)
                break;
        }
        if(flag)
            printf("YES\n");
        else
            printf("NO\n");
    }
}