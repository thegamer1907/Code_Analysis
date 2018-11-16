#include <stdio.h>
#include <algorithm>
#include <string.h>
#include <stdlib.h>

int main()
{
    int n,t,p,a[30001],i;
    scanf("%d %d",&n,&t);
    for (i=1; i<n; i++) {
        scanf("%d",a+i);
    }
    p=1;
    while (p<n)
    {
        if (p == t)
        {
            printf("YES\n");
            return 0;
        }
        p=p+a[p];
    }
    if (p == t)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
