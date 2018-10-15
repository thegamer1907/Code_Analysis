#include <iostream>
#include <cstdio>
using namespace std;
int n,m;
int min_k,max_k;
int a[105];
int main()
{
    int maxx = -1;
    int sum = 0;
    scanf("%d %d",&n,&m);
    sum = sum + m;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        sum = sum + a[i];
        maxx = max(maxx,a[i]);
    }
    if(n == 1)
    {
        printf("%d %d\n",sum,sum);
        return 0;
    }
    int x = sum/n;
    int y = sum%n;

    //printf("x == %d y == %d\n",x,y);
   // printf("maxx == %d\n",maxx);
    if(y == 0)
        min_k = max(x,maxx);
    else{
        min_k = max(x + 1,maxx);
    }
    max_k = maxx + m;
    printf("%d %d\n",min_k,max_k);
    return 0;
}
