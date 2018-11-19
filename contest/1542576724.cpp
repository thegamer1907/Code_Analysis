#include <iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
#define ll long long
#define maxn 107
char str[maxn][10],a[10];
int main()
{
    int n;
    bool flag=false;
    scanf("%s",a);
    scanf("%d%*c",&n);
    for(int i=1;i<=n;i++)
        scanf("%s",str[i]);
    for(int i=1;i<=n;i++)
    {
        if(strcmp(str[i],a)==0)
        {
            flag=true;
            printf("YES\n");
            break;
        }
        if(str[i][1]==a[0])
        {
            for(int j=1;j<=n;j++)
            {
                if(str[j][0]==a[1])
                {
                    flag=true;
                    printf("YES\n");
                    break;
                }
            }
        }
        if(flag)
            break;
    }
    if(!flag)
        printf("NO\n");
    return 0;
}
