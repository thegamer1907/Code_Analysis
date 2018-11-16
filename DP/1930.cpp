//...creator:cfmaster...//
#include<bits/stdc++.h>
#define ll long long
using namespace std ;
ll a[100010] , dis[100010] ;
bool x[100010] ;
int main ()
{
    ll n , m , ans = 0 ;
    cin >> n >> m ;
    for ( ll i = 1 ; i <= n ; i ++ )
    {
        cin >> a[i] ;
    }
    for ( ll i = n ; i >= 1 ; i -- )
    {
        if ( x[a[i]] == 0 )
        {
            x[a[i]] = 1 ;
            ans ++ ;
        }
        dis[i] = ans ;
    }
    for ( ll i = 1 ; i <= m ; i ++ )
    {
        ll x ;
        cin >> x ;
        cout << dis[x] << '\n' ;
    }
}

