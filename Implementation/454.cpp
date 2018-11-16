#include <stdio.h>

int num[105];

int main ()
{
    int n , m ;
    scanf ("%d %d" , &n , &m);
    int res = 0 ;
    for (int i = 1 ; i <= n ; ++i)
    {
        scanf ("%d" , &num[i]);
    }
    for (int i = 1 ; i <= n ; ++i)
    {
        if (num[i] >= num[m] && num[i])
            ++res ;
    }
    printf ("%d" ,res);
}
