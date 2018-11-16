#include<stdio.h>
#include<math.h>
int main()
{
    int n,xi,yi,zi,i,a=0,b=0,c=0;
    float sum;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d %d",&xi,&yi,&zi);
        a=a+xi;
        b=b+yi;
        c=c+zi;
    }
    sum=sqrt(a*a+b*b+c*c);
    if(sum==0)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
