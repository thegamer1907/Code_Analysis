#include <bits/stdc++.h>
typedef long long ll ;
using namespace std;

ll n , s ;
ll a[100500] , c[100500];


bool check(int mid)
{

    for(int i = 0 ; i < n ; i++) c[i] = a[i] + 1LL*(i + 1)*mid;

    sort(c , c + n);

    ll res = 0 ;
    for(int i = 0 ; i < mid ; i++) res += c[i] ;


    return res <= s;
}
int main()
{
    cin >> n >> s ;

    for(int i = 0 ; i < n ; i++) cin >> a[i];


    int low = 0 , high = n + 1  , ans = 0 ;
    while(high - low > 1)
    {
        ll mid = (low + high)/2 ;
        if(check(mid))
            ans = mid , low = mid ;
        else
            high = mid;
    }

    int res = 0 ;
    for(int i = 0 ; i < n ; i++) c[i] = a[i] + 1LL*(i + 1)*ans;

    sort(c , c + n);

    for(int i = 0 ; i < ans ; i++) res += c[i] ;

    cout << ans << " " << res << endl ;


    return 0;
}
