#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <queue>
// IN THE NAME OF GOD
using namespace std;
typedef long long ll ;



int main()
{
    ll k ;
    cin >> k ;
    for(ll y = 18 ; y <= 2000*1000*1000 ; y++ )
    {
        ll o = y ;
        ll s = 0 ;
        while(o)
        {
            s += o % 10 ;
            o/=10;

        }
        if( s == 10)
        k-- ;
        if( k == 0)
        {
            cout << y ;
            break ;
        }
    }
}