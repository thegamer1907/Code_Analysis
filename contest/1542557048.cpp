#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int N = 1e5 + 5;
const ll INF = 1e16;
const int G = 21;
ll dp[G][N];
int bst[G][N];
int ap[N];
int v[N];

void divideAndConquer(int g, int lf, int rg, int p1, int p2, int ans){
    if(lf > rg){
        return;
    }
    int m = (lf + rg) / 2;
    for(int i = rg;i > m;i--){
        ap[v[i]]--;
        ans -= ap[v[i]];
    }
    for(int i = p1;i <= p2 && i < m;i++){
        ap[v[i]]--;
        ans -= ap[v[i]];
        ll val = dp[g - 1][i] + ans;
        if(val < dp[g][m]){
            dp[g][m] = val;
            bst[g][m] = i;
        }
    }
    for(int i = p1;i <= p2 && i < m;i++){
        ans += ap[v[i]];
        ap[v[i]]++;
    }
    ap[v[m]]--;
    ans -= ap[v[m]];
    divideAndConquer(g, lf, m - 1, p1, bst[g][m], ans);
    for(int i = rg;i >= m;i--){
        ans += ap[v[i]];
        ap[v[i]]++;
    }
    for(int i = p1;i < bst[g][m];i++){
        ap[v[i]]--;
        ans -= ap[v[i]];
    }
    divideAndConquer(g, m + 1, rg, bst[g][m], p2, ans);
    for(int i = p1;i < bst[g][m];i++){
        ans += ap[v[i]];
        ap[v[i]]++;
    }
}

int main()
{
    int n, g;
    scanf("%d %d", &n, &g);
    for(int i = 1;i <= n;i++){
        scanf("%d", &v[i]);
    }
    ll ans = 0;
    for(int i = 0;i <= n;i++){
        for(int j = 1;j <= g;j++){
            dp[j][i] = INF;
        }
    }
    for(int i = 1;i <= n + 1;i++){
        ans += ap[v[i]];
        ap[v[i]]++;
        dp[1][i] = ans;
    }
    for(int i = 2;i <= g;i++){
        divideAndConquer(i, 1, n, 0, n, ans);
    }
    printf("%I64d", dp[g][n]);
    return 0;
}
