#include<stdio.h>

int main()
{
    int i,n,a,b,c,x=0,y=0,z=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d %d %d",&a, &b, &c);

        x=x+a;
        y=y+b;
        z=z+b;



    }

     if(x==0&&y==0&&z==0)
    printf("YES");
    else{
        printf("NO");
    }
    return 0;
}
