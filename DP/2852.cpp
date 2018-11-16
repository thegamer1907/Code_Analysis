#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cstring>
#include <vector>
#include <queue>
#include <list>
#include <set>
#include <map>
#include <bitset>
#include <algorithm>
#include <cmath>
#include <locale>
using namespace std;
#define MS0(I) memset(I, 0, sizeof(I));
#define MS1(I) memset(I, -1, sizeof(I));
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, s, n) for(int i = (s); i < (n); ++i)
#define per1(i, a, b) for(int i = a; i >= b; --i)
#define mkp make_pair
#define pb push_back 
#define F first
#define S second
#define ALL(I) (I).begin(), (I).end()
typedef const void CV;
typedef long long LL;
typedef unsigned long long ULL;
typedef pair<int, int> PII;
const int INF = (int)1e9;
const int mod = (int)1e9+7;
const int MAX = (int)2e3+5;
LL dp[MAX][MAX];
int main(void){
    int n, m; scanf("%d %d", &n, &m);
    rep1(i, 1, n+1) dp[1][i] = 1;
    rep1(i, 2, m+1){
        rep1(j, 1, n+1){
            for(int k = j; k <= n; k += j){
                dp[i][k] = (dp[i][k] + dp[i-1][j]) % mod;
            }
        }
    }
    LL cnt = 0;
    rep1(i, 1, n+1) cnt = (cnt + dp[m][i]) % mod;
    printf("%lld", cnt);
    return 0;
}
