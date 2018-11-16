#include <iostream>
#include <stdio.h>
#include <math.h>
#include <algorithm>
#include <vector>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <set>

using namespace std;

long long input[5010];
long long sum[5010];
long long dp[5010][5010];

int main() {

    int i , j , n , m , k;
    cin >> n >> m >> k;
    for (i = 0;i < n;i ++) {
        cin >> input[i];
    }
    for (i = 0;i < n;i ++) {
        if (i == 0) {
            sum[i] = input[i];
        } else {
            sum[i] = sum[i - 1] + input[i];
        }
    }
    for (i = 0;i < n;i ++) {
        if (i > 0) {
            for (j = 1;j <= k;j ++) {
                dp[i][j] = dp[i - 1][j];
            }
        }
        if (i - m + 1 >= 0) {
            for (j = 1;j <= k;j ++) {
                long long temp = sum[i];
                if (i - m >= 0) {
                    temp -= sum[i - m];
                    temp += dp[i - m][j - 1];
                }
                if (temp > dp[i][j]) {
                    dp[i][j] = temp;
                }
            }
        }
    }
    cout << dp[n - 1][k] << endl;

}



















