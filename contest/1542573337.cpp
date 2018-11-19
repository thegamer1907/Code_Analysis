#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=int(1e5+110);
const double PI=acos(-1.0);
int main(int argc, char const *argv[])
{
    char ans[20];
    while(~scanf("%s",ans+1))
    {
        int n;
        scanf("%d",&n);
        char s[n+10][30];
        int flag=0;
        for(int i=1;i<=n;i++)
        {
            scanf("%s",s[i]+1);
            if(strcmp(s[i]+1,ans+1)==0)
            {
                flag=1;
            }
        }

        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                //if(i!=j)
                {
                    if(s[i][2]==ans[1]&&s[j][1]==ans[2])
                    {
                        flag=1;
                    }
                }
            }
        }
        if(flag)
        {
            puts("YES");
        }
        else
        {
            puts("NO");
        }
    }
    return 0;
}