#include <bits/stdc++.h>
using namespace std;
const int MAX = 105;
int N, A[MAX], dp[MAX][MAX], psum[MAX];
int main(){
    scanf("%d", &N);
    for(int i = 1; i <= N; i++){
        scanf("%d", A + i);
        psum[i] += psum[i - 1] + A[i];
    }
    int ans = 0;
    for(int i = 1; i <= N; i++){
        dp[i][i] = (A[i] == 0);
        ans = max(ans, dp[i][i] + psum[N] - psum[i] + psum[i - 1]);
        for(int j = i + 1; j <= N; j++){
            dp[i][j] = dp[i][j - 1] + (A[j] == 0);
            int sum = psum[i - 1] + (psum[N] - psum[j]);
            //cout << i << ' ' << j <<' ' << sum << ' ' << dp[i][j] <<endl;
            ans = max(ans, sum + dp[i][j]);
        }
    }
    printf("%d\n", ans);
    return 0;
}
