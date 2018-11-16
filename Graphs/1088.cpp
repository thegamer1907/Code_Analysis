#include<stdio.h>
int main()
{
    int n,t,i,j;
    scanf("%d%d",&n,&t);
    int a[n-1];
    for(i=0;i<n-1;i++)
        scanf("%d",&a[i]);
    for(i=1,j=1;i<=n;i=a[i-1]+j)
    {
        j=i;
        if(i>t)
        {
            printf("NO\n");
            break;
        }
        else if(i==t)
        {
            printf("YES\n");
            break;
        }
    }
    return 0;
}

