#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;
int main()
{
    int n,a,b,times=0,fin=0;
    scanf("%d %d %d",&n,&a,&b);
    for(;n!=1;fin++)
    {
        n/=2;

    }
    for(;;)
    {
        if((min(a,b)-1)%2==0&&(max(a,b)-min(a,b)==1))
            break;
        if(a!=1)
        {
            if(a%2==0)
                a/=2;
            else a=(a+1)/2;
        }
        if(b!=1)
        {
            if(b%2==0)
                b/=2;
            else b=(b+1)/2;
        }
        times++;
    }
    times++;
    if(times==fin)
        printf("Final!");
    else printf("%d",times);
    return  0;
}
