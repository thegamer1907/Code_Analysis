#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e5 + 10;
typedef long long ll;
ll n;
ll check( ll x ) {
    ll now, sum;
    now = n, sum = 0;
    while( now ) {
        if( now <= x ) {
            sum += now;
            break;
        }
        now -= x;
        sum += x;
        now -= now / 10;
    }
    return sum;
}
int main(){
    while( cin >> n ) {
        ll le = 1, ri = n, mid;
        while( le < ri ) {
            mid = ( le + ri ) / 2;
            if( check(mid) >= ( n + 1 ) / 2 ) {
                ri = mid;
            } else {
                le = mid + 1;
            }
        }
        cout << le << endl;
    }
    return 0;
}