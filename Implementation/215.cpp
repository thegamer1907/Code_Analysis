#include<bits/stdc++.h>

using namespace std;

#define int long long

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, a, b;
    cin >> n >> a >> b;
    a--;
    b--;
    int x = 2;
    int ans = 1;
    while (x < n)
    {
        if (a / x == b / x)
        {
            cout << ans;
            return 0;
        }
        ans++;
        x *= 2;
    }
    cout << "Final!";
    return 0;
}
