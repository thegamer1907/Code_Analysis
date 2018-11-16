#include <bits/stdc++.h>

using namespace std;

#if 1
    #define pv(x) cout<<#x<<" = "<<x<<"; ";cout.flush()
    #define pn cout<<endl
#else
    #define pv(x)
    #define pn
#endif

#ifdef ONLINE_JUDGE
    #define in cin
    #define out cout
#else
    ifstream in("date.in");
    ofstream out("date.out");
#endif

using ll = long long;
using ull = unsigned long long;
using uint = unsigned int;
#define pb push_back
const int NMax = 2e3 + 5;
const ll inf_ll = 1e18 + 5;
const int inf_int = 1e9 + 5;
const int mod = 1e9 + 7;
using zint = ll;

int dp[NMax][NMax];

int main() {
    cin.sync_with_stdio(false);
    cin.tie(0);
    
    int N,K;
    in >> N >> K;
    
    for (int i = 1;i <= N;++i) {
        dp[i][1] = 1;
    }
    
    for (int j = 1;j < K;++j) {
        for (int i = 1;i <= N;++i) {
            
            for (int m = i;m <= N;m += i) {
                dp[m][j+1] = (dp[m][j+1] + dp[i][j]) % mod;
            }
        }
    }
    
    int ans = 0;
    for (int i = 1;i <= N;++i) {
        ans = (ans + dp[i][K]) % mod;
    }
    
    out << ans;
    
    return 0;
}

