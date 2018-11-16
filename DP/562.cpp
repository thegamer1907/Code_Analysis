#include <bits/stdc++.h>
using namespace std;
const int MAX = 1e5 + 5;
char S[MAX];
int N, M, dp[MAX];

int main(){
    scanf("%s", S + 1);
    N = strlen(S + 1);
    for(int i = 1; i <= N; i++){
        if(S[i] == S[i + 1])
            dp[i] = dp[i - 1] + 1;
        else
            dp[i] = dp[i - 1];
    }
    scanf("%d", &M);
    for(int i = 1; i <= M; i++){
        int l, r;
        scanf("%d %d", &l, &r);
        printf("%d\n", dp[r - 1] - dp[l - 1]);
    }
    return 0;
}
