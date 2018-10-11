#include<stdio.h>
#include<string.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    char x[1005][555];
    char y[1005][555];
    for(int i=0;i<n;i++)
    {
        scanf("%s",x[i]);
    }
    for(int i=0;i<m;i++)
    {
        scanf("%s",y[i]);
    }
    if(n>m) printf("YES\n");
    else if(n<m) printf("NO\n");
    else
    {
        int sum=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(strcmp(x[i],y[j])==0) sum++;
            }
        }
        if(sum%2==0) printf("NO\n");
        else printf("YES\n");
    }

}
