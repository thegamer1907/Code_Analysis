#include<stdio.h>
#include<string.h>

char a[2000][600];
char b[2000][600];
int main()
{
    int n,m;
    while(~scanf("%d%d",&n,&m))
    {
        int t = 0;
        for(int i = 0; i < n; i++)
            scanf("%s",a[i]);
        for(int i = 0; i < m; i++)
        {
            scanf("%s",b[i]);
            for(int j = 0; j < n; j++)
            {
                if(strcmp(b[i],a[j]) == 0)
                    t++;
            }
        }
        if(n > m)
            printf("YES\n");
        else if(n == m && t % 2 == 1)
        {
                printf("YES\n");
        }
        else
            printf("NO\n");
    }
}