#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    int a[105];
    memset(a,0,sizeof(a));
    int c,b;
    scanf("%d",&c);
    for(int i = 0 ; i < c ; i ++)
    {
        int x;
        scanf("%d",&x);
        a[x] = 1;
    }
    scanf("%d",&b);
    for(int i = 0 ; i < b ; i ++)
    {
        int x;
        scanf("%d",&x);
        a[x] = 1;
    }
    for(int i = 1 ; i <= n ; i ++)
    {
        if(a[i] == 0)
        {
            printf("Oh, my keyboard!\n");
            return 0;
        }
    }
    printf("I become the guy.\n");
    return 0;
}
