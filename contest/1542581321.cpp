#include <bits/stdc++.h>

using namespace std ;
int main()
{
    char a[100] = {} , b[100][100] = {}, c[10010] = {};
    scanf("%s", a) ;

    int i, n, check  ;
    scanf("%d", &n) ;
    for(i = 0 ; i < n ; i++)
        scanf("%s", b[i]) ;

    for(i = 0 ; i < n ; i++)
    {
        check = 0 ;
        if(a[0] == b[i][1])
        {
            check = 1 ;
            break ;
        }
    }

    if(check == 1)
        for(i = 0 ; i < n ; i++)
        {
            check = 0 ;
            if(a[1] == b[i][0])
            {
                check = 1 ;
                break ;
            }

        }

    if(check == 0)
    {
        for(i = 0 ; i < n ; i++)
        {
            if(strcmp(a, b[i]) == 0)
            {
                check = 1 ;
                break ;
            }
        }
    }


    if(check == 1)
        printf("YES\n") ;
    else
        printf("NO\n") ;

    return 0 ;
}
