#include <bits/stdc++.h>

#define MAXN 200010
#define endl '\n'
#define oo (1ll<<62)

using namespace std;

typedef long long ll;

ll N, ans, lim;

bool eat( ll k ){
    ll a = 0, b = 0, now = N;
    while ( now ){
           a += min( k, now );
           now = max( now-k, 0ll );
           b += now/10;
           now -= now/10;
    }
    return a >= b;
}

int main(){

    #ifndef ONLINE_JUDGE
        freopen( "a.in", "r", stdin );
    #endif // ONLINE_JUDGE

    ios_base::sync_with_stdio( false );
    cin.tie( false ); cout.tie( false );

    cin >> N;

    lim = (N+1)/2;

    ans = lim;

    ll a = 1, b = (N+1)/2, mid;

    for ( mid = (a+b)/2; a <= b; mid = (a+b)/2 ){
        if ( eat( mid ) ){
            ans = mid;
            b = mid-1;
        }
        else {
            a = mid+1;
        }
    }

    cout << ans << '\n';

return 0;
}
