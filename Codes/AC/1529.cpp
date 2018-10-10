#include <bits/stdc++.h>

using namespace std;
#define ll long long
const int Nmax = 100000 + 5;
ll x[Nmax], n, S, y[Nmax], s, ans;
int main()
{
    cin >> n >> S;
    for(int i = 1; i <= n ; ++i)
        cin >> x[i];
    int st = 0, dr = n + 1;
    while(dr - st > 1)
    {
        int mid = st + (dr - st) /2;
        for(int i = 1; i <= n ;++i)
            y[i] = x[i] + 1LL * i * mid;
        sort(y + 1, y + n + 1);
        s = 0;
        for(int i = 1;i <= mid; ++i)
        {
            s+=y[i];
            if(s > S)break;
        }
        if(s > S)
            dr = mid;
        else
        {
            ans = s;
            st = mid;
        }
    }
    cout << st << " " << ans;
    return 0;
}
