#include <bits/stdc++.h>
#define mod 1000000007
#define maxn 100005
using namespace std;
typedef long long ll;
int t;
ll dp[maxn];
ll pref[maxn];
void solve()
{
    int x,y;
    cin >> x >> y;
    if(x == 0)
    {
        cout << pref[y] << endl;
        return;
    }
    else
    {
        cout << (pref[y] - pref[x-1] + mod) % mod << endl;
        return;
    }
}
int k;
int main()
{
    ios_base::sync_with_stdio(false);
    cin >> t >> k;
    dp[0] = 1;
    pref[0] = 1;
    for(int i=1; i<=100000; i++)
    {
        dp[i] = dp[i-1];
        if(i >= k)
            dp[i] = (dp[i] + dp[i-k])%mod;
        pref[i] = (pref[i-1] + dp[i])%mod;
    }
    while(t--)
        solve();
    return 0;
}
