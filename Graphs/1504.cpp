#include<stdio.h>
#include<string.h>
int main()
{
    unsigned long long n,t,a[30005],i,j,k,l,flag=1;
    scanf("%I64d %I64d",&n,&t);
    for(i=1;i<=n-1;i++)
        scanf("%I64d",&a[i]);
        //printf("%d",a[3]);
    for(j=1;j<=n-1;)
    {
        l=a[j]+j;
        if(l==t)
        {
            printf("YES\n");
            flag=0;
            break;

        }
        else
        j=l;

    }
    if(flag==1)
        printf("NO\n");
        return 0;
}