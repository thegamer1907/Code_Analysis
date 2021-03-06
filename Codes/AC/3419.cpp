#include <bits/stdc++.h>
using namespace std;

int main ()
{
    ios::sync_with_stdio(0) , cin.tie(0) , cout.tie(0);

    long long n;
    cin >> n;
    long long l = 0 , r = n , mid , ans = 1e18;
    while(l <= r)
    {
        mid = (l + r) /2;
        long long temp = n , taken = 0;
        while(temp && mid != 0)
        {
            taken += min(mid , temp);
            temp = max(0*1ll , temp - mid);
            temp -= (temp / 10);
        }

        if(taken >= n/2 + n % 2 )
            r = mid-1 , ans = min(ans , mid);
        else l = mid+1;
    }

    cout << ans;

    return 0 ;
}
