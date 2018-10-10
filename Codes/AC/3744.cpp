#include <iostream>
#include <vector>
#define ll unsigned long long int

using namespace std;//binary search fija lija

ll s[3], p[3], r[3], money;

int f( ll n ){//numero de hamburguesas
    ll res = 0;
    for( int i = 0 ; i < 3 ; i++ ){
        if( r[i]*n > s[i] )res += ( r[i]*n - s[i] )*p[i];
    }
    return (res <= money);
}

ll bin(){
    ll lo = 0, hi = 100000000000000000, mid = hi/2;
    while( lo <= hi ){
        if( f( mid ) and !f( mid + 1 ) ) return mid;
        else if( f(mid) ) lo = mid + 1;
        else hi = mid - 1;
        mid = ( lo + hi )/2;
    }
}

int main()
{
    string st;
    cin >> st;
    r[0] = 0, r[1] = 0, r[2] = 0;
    for( int i = 0 ; i < st.size() ; i++ ){
        if( st[i] == 'B' ) r[0]++;
        else if( st[i] == 'S' ) r[1]++;
        else r[2]++;
    }
    cin >> s[0] >> s[1] >> s[2];
    cin >> p[0] >> p[1] >> p[2];
    cin >> money;
    cout << bin();
    return 0;
}



