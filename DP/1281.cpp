#include <bits/stdc++.h>
#include <queue>
#include <set>
#include <cmath>
#include <iomanip>
#include <fstream>
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define ull unsigned long long
#define ll long long
#define hash hosh
#define y1 yy1
#define y2 yy2
#define y0 yy0
#define pii pair <int, int>
#define ppi pair <pair <int, int>, int>
#define pll pair <ll, ll>
using namespace std;
const int mod1 = 1e9 + 7;
const int mod2 = 1e9 + 9;
const int maxN = 2e2;
const int INF = 1e9 + 7;
const ll LL_INF = 1e18 + 11;
using namespace std;
int n, dp[maxN][maxN], ans, a[maxN];
void file()
{
     freopen("numbers.in", "r", stdin);
     freopen("numbers.out", "w", stdout);
}
void boost()
{
     ios_base :: sync_with_stdio(false);
     cin.tie(0);
     cout.tie(0);
}
int main()
{
    boost();
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
         cin >> a[i];
    }
    for(int l = 1; l <= n; l++)
    {
         dp[l][l] = a[l];
         for(int r = l + 1; r <= n; r++)
         {
              dp[l][r] = dp[l][r - 1] + a[r];
         }
    }
     for(int l = 1; l <= n; l++)
     {
         for(int r = l; r <= n; r++)
         {
              ans = max(ans, ((r - l + 1) - dp[l][r]) + dp[1][l - 1] + dp[r + 1][n]);
         }
    }
    cout << ans;
}