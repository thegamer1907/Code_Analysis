#include<stdio.h>
int main()
{
    int n,x[100]={0},y[100]={0},z[100],i,j=0,k=0,l=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d%d",&x[i],&y[i],&z[i]);
    }
    for(i=0;i<n;i++)
    {
        j+=x[i];
        k+=y[i];
        l+=z[i];
    }
    if(j==0&&k==0&&l==0)
        printf("YES");
    else
        printf("NO");
}
