#include <bits/stdc++.h>

using namespace std;




int main()
{
    ios_base :: sync_with_stdio ( false ) ;

    int n, a, b ;

    cin >> n >> a >> b ;

    int ans = 0, step = 2 ;
    while ( a != b )
    {
        if ( a % step > 0 )
            a = a + (step/2) ;

        if ( b % step > 0 )
            b = b + (step/2) ;

        ans ++ ;
        step *= 2 ;
    }

    if ( step / 2 == n )
        cout << "Final!";
    else
        cout << ans ;

    return 0;
}
