#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0) , cin.tie(0) , cout.tie(0);

    long long n , m , k;
    cin >> n >> m >> k;

    long long l = 0 , r = n*m , mid ;
    while(l <= r)
    {
        mid = (l + r) / 2;
        long long res = 0;
        for(int i = 1 ; i <= n ; i++)
            res += min(m , (mid-1) / i);
        if(res < k)
            l = mid+1;
        else r = mid-1;
    }

    cout << l-1;

    return 0;
}
