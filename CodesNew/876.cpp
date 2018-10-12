#include<bits/stdc++.h>

using namespace std ;

#define ll long long int
#define fr(i,n) for ( int i = 1 ; i <= n ; i++ )
#define pb push_back
#define pf push_front
#define CO(a) cout << a ; exit(0) ;
#define FOR(a,b,c) for ( int i = a ; i <= b ; i+=c )
const long long int INF = 1e9 ;
const int N = 2e5+2 ;

map < string , int > mp ;
int n , m , cnt , lnt ;
string s , x ;

int main()
{
    cin >> n >> m ;
    for ( int i = 1 ; i <= n ; i++ )
    {
        cin >> s ;
        mp[s] = 1;
    }
    for ( int i = 1 ; i <= m ; i++ )
    {
        cin >> x ;
        if ( mp[x] == 1 )
        {
            cnt++ ;
        }
    }
    if ( n < m )
    {
        cout << "NO" ;
        return 0 ;
    }
    else if ( n > m )
    {
        cout << "YES" ;
        return 0 ;
    }
    if ( cnt % 2 == 1 )
    {
        cout << "YES" ;
        return 0;
    }
    else
    {
        cout << "NO" ;
        return 0 ;
    }
}
