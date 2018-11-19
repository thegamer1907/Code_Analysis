#include<iostream>
#include<cstdio>
#include<cstring>
#include<queue>
#include<algorithm>
#include<vector>
#include<map>
#include<cstring>
#include<cmath>
using namespace std;

char str[3];
char a[105][3];

int main()
{
    while(~scanf("%s",str))
    {
        int n;
        scanf("%d",&n);
        for(int i=0; i<n; i++)
            scanf("%s",a[i]);
        int flag=0;
        for(int i=0; i<n; i++)
            if(str[0]==a[i][0]&&str[1]==a[i][1])
            {
                flag=1;
                break;
            }
        for(int i=0; i<n; i++)
            if(str[0]==a[i][1])
            {
                for(int j=0; j<n; j++)
                    if(str[1]==a[j][0])
                    {
                        flag=1;
                        break;
                    }
                if(flag)
                    break;
            }
        if(flag)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
