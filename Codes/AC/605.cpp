#include <cstdio>

bool check(int a)
{
    int s=0;
    while(a>0)
    {
        if(s>10) return false;
        s+=a%10;
        a/=10;
    }
    if(s==10) return true;
    return false;
}
int main()
{
    int k;
    int s=0;
    scanf("%d",&k);
    for(int i=0;;i++)
    {
        if(check(i)) s++;
        if(s==k)
        {
            printf("%d",i);
            return 0;
        }
    }
    return -1;
}
