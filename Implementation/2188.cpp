#include<stdio.h>
int main ()
{
    int x,y,z,i,a,sumx=0,sumy=0,sumz=0;
    scanf("%d", &a);
    for(i=1; i<=a; i++)
    {
        scanf("%d%d%d", &x,&y,&z);
        sumx+=x;
        sumy+=y;
        sumz+=z;
    }
    if(sumx==0 && sumy==0 && sumz==0)
        printf("YES");
    else
        printf("NO");
    return 0;
}