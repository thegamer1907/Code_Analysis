//#include<khoda>
#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
const int N = 2e5 + 100 ;

ll a[N][10];
ll c[N];
ll t[N];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n , k;
    cin >> n >> k;
    for ( int i = 1 ; i <= n ; i++ )
    {
        for ( int j = k-1 ; j >= 0 ; j-- )
        {
            cin >> a[i][j];
            c[(1<<j)] = a[i][j];
        }
        t[8*c[8] + 4*c[4] + 2*c[2] + 1*c[1] ]++;
    }
    if ( t[0] )
    {
        cout << "YES" ;
        return 0;
    }
    for ( int i = 0 ; i < (1<<k) ; i++ )
    {
        for ( int j = 0 ; j < (1<<k) ; j++ )
        {
            if ( (i & j) == 0 && t[i] && t[j] )
            {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
    return 0;
}
