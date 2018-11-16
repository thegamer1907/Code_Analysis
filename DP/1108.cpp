#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int num[n+1],a[n+1],sum=0,max=-1,c1=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
        if(num[i]==1)
        {
            a[i]=-1;
            c1++;
        }
        else
            a[i]=1;
    }
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        if(sum>max)
            max=sum;
        if(sum<0)
            sum=0;
    }
    printf("%d",c1+max);
    return 0;
}
