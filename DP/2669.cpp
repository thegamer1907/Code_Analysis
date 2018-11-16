#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;

ll dp[101][101];

int main()
{
    cout.precision(10); cout << fixed;
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string s, t;
    cin >> s >> t;
    int n = s.size();
    s = " " + s;
    t = " " + t;
    dp[0][50] = 1;
    for(int i = 1; i <= n; i++)
    {
        if(t[i] == '+') 
        {
            for(int j = 1; j <= 100; j++) dp[i][j] += dp[i - 1][j - 1];
        }
        else if(t[i] == '-')
        {
            for(int j = 0; j < 100; j++) dp[i][j] += dp[i - 1][j + 1];
        }
        else
        {
            for(int j = 0; j <= 100; j++) 
            {
                dp[i][j] += (j ? dp[i - 1][j - 1] : 0) + (j != 100 ? dp[i - 1][j + 1] : 0);
            }
        }
    }
    int end = 50;
    for(int i = 1; i <= n; i++)
    {
        if(s[i] == '+') end++;
        else end--;
    }
    ld cnt = 0;
    for(int i = 0; i <= 100; i++) cnt += dp[n][i];
    cout << dp[n][end] / cnt;
}