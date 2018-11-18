#include <cstdio>  
#include <iostream>  
#include <string.h>  
#include <string>   
#include <map>  
#include <queue>  
#include <deque>  
#include <vector>  
#include <set>  
#include <algorithm>  
#include <math.h>  
#include <cmath>  
#include <stack>  
#include <iomanip>  
#define mem0(a) memset(a,0,sizeof(a))  
#define meminf(a) memset(a,0x3f,sizeof(a))  
using namespace std;  
typedef long long ll;  
typedef long double ld;  
typedef double db;  
const int maxn = 100005, inf = 0x3f3f3f3f;  
const ll llinf = 0x3f3f3f3f3f3f3f3f;  
const ld pi = acos(-1.0L);  
ll a[maxn], dp[maxn][2], t[maxn];  
  
void solve(int l, int r, int L, int R, int u, ll sum) {  
    if (l > r) return;  
    int m = (l + r) / 2, M = -1, i;  
    ll mc = llinf;  
    int p = min(m, R);  
    for (i = l; i <= m; i++) sum += t[a[i]]++;  
    for (i = L; i <= p; i++) {  
        sum -= --t[a[i]];  
        if (sum + dp[i][u ^ 1] < dp[m][u]) {  
            M = i; dp[m][u] = sum + dp[i][u ^ 1];  
        }  
    }  
    for (i = l; i <= m; i++) sum -= --t[a[i]];  
    for (i = L; i <= p; i++) sum += t[a[i]]++;  
    solve(l, m - 1, L, M, u, sum);  
    for (i = L; i < M; i++) sum -= --t[a[i]];  
    for (i = l; i <= m; i++) sum += t[a[i]]++;  
    solve(m + 1, r, M, R, u, sum);  
    for (i = L; i < M; i++) t[a[i]]++;  
    for (i = l; i <= m; i++) t[a[i]]--;  
}  
  
int main() {  
    int n, k, i, j;  
    scanf("%d%d", &n, &k);  
    mem0(t);  
    dp[0][0] = 0;  
    for (i = 1; i <= n; i++) {  
        scanf("%I64d", &a[i]);  
        dp[i][0] = dp[i-1][0] + t[a[i]]++;  
    }  
    for (i = 1; i < k; i++) {  
        mem0(t);  
        for (j = 0; j <= n; j++) dp[j][i % 2] = llinf;  
        solve(1, n, 1, n, i%2, 0);  
    }  
    printf("%I64d\n", dp[n][(k + 1) % 2]);  
//  system("pause");  
    return 0;  
} 