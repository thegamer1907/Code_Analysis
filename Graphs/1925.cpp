#include <bits/stdc++.h>
using namespace std;

const int M = 1e2 + 7;
int dp[M][M], a[M], b[M];

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0);

    int n, m;
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> a[i];

    cin >> m;
    for(int i = 1; i <= m; i++)
        cin >> b[i];

    sort(a + 1, a + n + 1);
    sort(b + 1, b + m + 1);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(abs(a[i] - b[j]) <= 1){
                dp[i][j] = 1 + dp[i - 1][j - 1];
            }
            dp[i][j] = max(dp[i][j], max(dp[i - 1][j], dp[i][j - 1]));
        }
    }



    cout << dp[n][m] << endl;

    return 0;
}
