#include<stdio.h>
int main()
{
    int k, n, x, count=0, a[100];
    scanf("%d %d", &n, &k);
    for(x=0; x<=n-1; x++)
    {
        scanf(" %d", &a[x]);
    }
    for(x=0; x<=n-1; x++)
    {
        if(a[x] >= a[k-1] && a[x]>0)
        {
            count = count + 1;
        }
        else
            continue;
    }
    printf("%d\n", count);
    return 0;
}