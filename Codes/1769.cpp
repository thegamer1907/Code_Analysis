// In the name of Allah the Lord of the Worlds.

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
ll n , m , k;

ll f(ll x)
{
    ll counter = 0;
    for(ll i=1;i<=n;i++){

        ll temp = x/i;
        counter+=min(m , temp);
    }

    return counter;
}

int main(void)
{

    scanf("%lld %lld %lld",&n , &m , &k);

    ll hi = n*m , low = 1 , t = 70 , mid , ans = -1;

    while(t--){

        mid = (hi+low)/2;
        ll temp = f(mid);

        if(temp>=k){

            ans = mid;
            hi = mid-1;
        }

        else low = mid+1;
    }

    printf("%lld\n",ans);

    return 0;
}
