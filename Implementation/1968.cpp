#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a[100][3],i,j,p=0,q=0,r=0;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        p=p+a[i][0];
        q=q+a[i][1];
        r=r+a[i][2];

    }
    if (p==0 && q==0 & r==0)
        printf("YES");
    else
        printf("NO");

}