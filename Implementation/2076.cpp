#include<stdio.h>
int main()
{
    int n,t,i,j,s1=0,s2=0,s3=0;
    int a[100][3]={0};
    scanf("%d",&n);

        for(i=0;i<n;i++)
        {
            for(j=0;j<3;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }

    for(i=0;i<n;i++)
    {
        s1=a[i][0]+s1;
        s2=a[i][1]+s2;
        s3=a[i][2]+s3;
    }

    if(s1==0 && s2==0 && s3==0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;

}
