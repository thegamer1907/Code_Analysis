#include<stdio.h>
int main()
{
    int n,k,a[100],count=0,i,j;
    scanf("%d%d",&n,&k);
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    for(i=0; i<n; i++)
    {
        if(i==k-1)
            j=a[i];
    }
    for(i=0; i<n; i++)
    {
        if(a[i]>=j&&a[i]>0)
            count++;
    }
    printf("%d\n",count);
    return 0;
}
