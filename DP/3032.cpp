#include<bits/stdc++.h>
using namespace std;
const int N = 1e7+5, mod = 1e9+7;
int dp[2][4], n;
void ok(int &a) { if(a>=mod) a-=mod; }
int main(){
    scanf("%d", &n);
    dp[0][0] = 1;
    for(int i=1;i<=n;i++){
        int nw = i&1;
        int pr = 1-nw;
        int a, b, c, d;
        a = b = c = d = 0;
        a = dp[pr][1]+dp[pr][2]; ok(a);
        a = a+dp[pr][3]; ok(a);
        b = dp[pr][0]+dp[pr][2]; ok(b);
        b = b+dp[pr][3]; ok(b);
        c = dp[pr][0]+dp[pr][1]; ok(c);
        c = c+dp[pr][3]; ok(c);
        d = dp[pr][0]+dp[pr][1]; ok(d);
        d = d+dp[pr][2]; ok(d);
        dp[nw][0] = a; dp[nw][1] = b;
        dp[nw][2] = c; dp[nw][3] = d;
    }
    printf("%d", dp[n&1][0]);
}
