#include<bits/stdc++.h>
using namespace std;
int i,i0,n,m;
void prin(int f)
{
    if((f&1)==(n&1))
    {
        printf("I love ");
        if(f)
        {
            printf("that ");
            prin(f-1);
        }
    }
    else
    {
        printf("I hate ");
        if(f)
        {
            printf("that ");
            prin(f-1);
        }
    }
}
int main()
{
    while(scanf("%d",&n)!=EOF)
    {
        prin(n-1);
        printf("it\n");
    }
    return 0;
}