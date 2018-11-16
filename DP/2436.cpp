#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;
typedef pair<long long, long long> pll;
typedef long long ll;
typedef long double ld;

typedef vector<int> vi;
typedef vector<long long> vl;
typedef vector<pair<int,int>> vii;
typedef vector<pair<long long, long long>> vll;

const ll MOD = 1e9 + 7;
const ll INF = MOD;

void solve();

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}



const int N = 1e5 + 10;
void solve()
{
    int t, k;
    cin >> t >> k;

    vi dp(N);
    for (int i = 0; i < k; i++)
    {
        dp[i] = 1;
    }
    for (int i = k; i < N; i++)
    {
        dp[i] = (dp[i - 1] + dp[i - k]) % MOD;
    }

    vi pref(N);
    pref[0] = 0;
    for (int i = 1; i < N; i++)
    {
        pref[i] = (pref[i - 1] + dp[i - 1]) % MOD;
    }

    for (int q = 0; q < t; q++)
    {
        int a, b;
        cin >> a >> b;
        
        cout << (pref[b + 1] - pref[a] + MOD) % MOD << endl;
    }
}
