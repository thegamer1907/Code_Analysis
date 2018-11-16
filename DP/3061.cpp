#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 5005;
const ll INF = 0x3f3f3f3f3f3f3f3f;

int a[maxn],b[maxn];
ll dp[maxn][4];

int main(){
//    freopen("T3-1.in","r",stdin);
//    freopen("T3-1.out","w",stdout);
    memset(dp,0x3f,sizeof(dp));
    int n;
    scanf("%d",&n);
    for(int i = 1 ; i <= n ; ++ i)scanf("%d",&a[i]);
    for(int i = 1 ; i <= n ; ++ i)scanf("%d",&b[i]);
    for(int i = 1 ; i <= n ; ++ i)dp[i][1] = b[i];
    for(int t = 2 ; t <= 3 ; ++ t){
        for(int i = n ; i >= 1 ; -- i){
            for(int j = 1 ; j < i ; ++ j){
                if(a[j] < a[i] && dp[j][t-1] + b[i] < dp[i][t])dp[i][t] = dp[j][t-1] + b[i];
            }
        }
    }
    ll res = INF;
    for(int i = 1 ; i <= n ; ++ i)if(dp[i][3] < res)res = dp[i][3];
    if(res == INF)res = -1;
    printf("%lld\n",res);
    return 0;
}
