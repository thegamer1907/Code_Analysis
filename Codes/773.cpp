#include <cstdio>
bool check(int x)
{
    int sum=0;
    while(x)
        sum+=x%10,x/=10;
    return sum == 10;
}
int main()
{
    int k;
    scanf("%d",&k);
    for(int a=19;;++a)
    {
        if(check(a))
        {
            --k;
            if(!k)
            {
                printf("%d\n",a);
                return 0;
            }
        }
    }
}
