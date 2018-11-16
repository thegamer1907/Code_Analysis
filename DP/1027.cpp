#include <bits/stdc++.h>
using namespace std;

const int M = 1e3 + 7;

int dp[M], a[M];

int main()
{
    int n;
    scanf("%d", &n);
    int one = 0;
    for(int i = 0; i < n; i++){
        int x;
        scanf("%d", &x);
        if(x == 1){
            one++;
            a[i] = -1;
        }
        else
            a[i] = 1;
    }

    dp[0] = a[0];
    for(int i = 1; i < n; i++){
        dp[i] = max(a[i] + dp[i - 1], a[i]);
    }

    printf("%d", *max_element(dp, dp + n) + one);

    return 0;
}
