#include <iostream>
#include <stack>
#include <algorithm>
#include <string.h>
#include <queue>
#include <iomanip>
#include <cmath>
#include <set>

using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ii, int> iii;
#define fi first
#define se second

const int maxN = 2e3 + 9, MOD = 8;

ii dp[maxN][MOD];
int pots[maxN];
string st;
int n;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    
    cin >> st;
    n = int(st.size());
    
    memset(dp, -1, sizeof dp);
    
    dp[n][0].se = 0;
    
    pots[n - 1] = 1;
    for(int i = n - 2; i >= 0; i--){
        pots[i] = pots[i + 1] * 10 % MOD;
    }
    
    for(int i = n - 1; i >= 0; i--){
        int dig = st[i] - '0';
        for(int j = i; j < n; j++){
            for(int k = 0; k < 8; k++){
                if(dp[j + 1][k].se != -1 && dp[j][(k + dig * pots[j]) % MOD].se == -1){
                    dp[j][(k + dig * pots[j]) % MOD] = ii(dig, k);
                }
            }
        }
    }
    
    int pos = -1;
    
    for(int i = 0; i < n; i++){
        if(dp[i][0].fi != -1){
            pos = i;
        }
    }
    if(pos == -1){
        cout << "NO\n"; return 0;
    }
    cout << "YES\n";
    
    for(ii cr = dp[pos][0]; pos < n; cr = dp[++pos][cr.se]){
        cout << cr.fi;
    }
    cout << '\n';
    
}

