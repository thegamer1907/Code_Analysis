#include <bits/stdc++.h>
using namespace std;

const int N = 1e2,oo = 0x3f3f3f3f;
int n,dp[N][N],coun = 0,A[N],maxi = 0;

int solve(){
    for (int i = 0;i<n;i++){
        for (int j = i;j<n;j++){
            int sum = 0;
            for (int k = 0;k<n;k++){
                if (k<i || k>j)
                    sum += A[k];
                else
                    sum += (A[k] ^ 1);
            }
            if (sum>maxi)
                maxi = sum;
        }
    }
    return maxi;
}


int main(){
    memset(dp,-1,sizeof dp);
    scanf("%d ",&n);
    for (int i =0; i<n;i++){
        scanf("%d",A+i);
    }
    printf("%d",solve());

    return 0;
}
