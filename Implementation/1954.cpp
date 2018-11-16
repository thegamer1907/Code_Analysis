#include<stdio.h>
int main()
{
    long long int a,b,c,d,e=0,f=0,g=0;
    int i;
    scanf("%lld",&a);
    for(i=0; i<a; i++)
    {
        scanf("%lld%lld%lld",&b,&c,&d);
        e=e+b;
        f=f+c;
        g=g+d;
    }
    if(e==0 && f==0 && g==0)
    {
        printf("YES\n");
    }
    else
        printf("NO\n");
    return 0;
}
