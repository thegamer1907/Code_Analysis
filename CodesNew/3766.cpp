#include <stdio.h>

int main ()
{
    int x, y, z = 0, t = 0;
    scanf("%d %d", &x, &y);
    int a[x];
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < x; i++)
    {
        z = z + a[i];
        
    }
    for (int i = 0; i < x; i++)
    {
    	if (a[i] > t)
        {
            t = a[i];
        }
    }
    int t1 = t;
    t1 = t1 + y;
    z = (z + y);
    if ((z / x) < t || (z / x) + 1 < t)
    {
    	printf("%d", t);
    }
   	else
   	{
    if (z % x ==0)
        printf("%d", z / x);
    else if (z % x != 0)
        printf("%d", (z / x) +1);
   	}
    printf(" %d", t1);
    return 0;
}