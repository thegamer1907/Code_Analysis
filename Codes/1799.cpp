#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
ll n , m , k;

ll deepika(ll x)
{
    ll i , j , k, res = 0;
    x--;
    for(i = 1 ; i <= n ; i++)
    {
        res += min(x/i,m);
    }
    return res;
}

int main()
{

    scanf("%lld %lld %lld",&n,&m,&k);
    ll l = 1 , r = n*m+1 , mid , ans;
    while(l <= r)
    {
        mid = (l+r)/2;
        if(deepika(mid) < k)
        {
            ans = mid;
            l = mid+1;
        }
        else
        {
            r = mid-1;
        }
    }
    printf("%lld\n",ans);

    return 0;
}
