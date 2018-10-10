#include<bits/stdc++.h>
using namespace std;
int digit[20], dn;
int dp[20][20];

int dfs(int pos, int sum, bool lead, bool limit){
    if(pos == 0)return sum == 10 ? 1 : 0;
    if(!limit && !lead &&dp[pos][sum] != -1)return dp[pos][sum];
    int top = limit ? digit[pos] : 9;
    int ans = 0;
    for(int i = 0;i <= top;++i){
        if(sum + i > 10)break;
        ans += dfs(pos - 1, sum + i, lead && i == 0, limit && i == top);
    }
    if(!limit && !lead)dp[pos][sum] = ans;
    return ans;
}

int calc(int x){
    memset(digit, 0, sizeof(digit));
    dn = 0;
    while(x > 0){
        digit[++dn] = x % 10;
        x /= 10;
    }
    return dfs(dn, 0, true, true);
}

int main(){
    memset(dp, -1, sizeof(dp));
    int k;
    scanf("%d", &k);
    int low = 18, high = 1 << 30, mid;
    while(low < high - 1){
        mid = (low + high) >> 1;
        if(calc(mid - 1) <= k - 1)low = mid;
        else high = mid;
    }
    cout << low << endl;
    return 0;
}
