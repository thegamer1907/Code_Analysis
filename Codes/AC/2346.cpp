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
#define mp make_pair
const int NMax = 3e6 + 5;
const ll inf_ll = 1e18 + 5;
const int inf_int = 1e9 + 5;
const int mod = 1e9 + 7;
using zint = int;

int N;

int main() {
    cin.sync_with_stdio(false);
    cin.tie(0);
    
    vector<int> count(1e7 + 5, 0), nrDiv(1e7 + 5, 0), dp(1e7 + 5, 0);
    vector<bool> notPrime(1e7 + 5, 0);
    
    cin >> N;
    for (int i = 1;i <= N;++i) {
        int val;
        in >> val;
        ++count[val];
    }
    
    for (int i = 2;i <= 1e7;++i) {
        if (notPrime[i]) {
            continue;
        }
        
        for (int j = i;j <= 1e7;j += i) {
            notPrime[j] = true;
            
            nrDiv[i] += count[j];
        }
    }
    
    for (int i = 1;i <= 1e7;++i) {
        dp[i] = dp[i-1] + nrDiv[i];
    }
    
    int M;
    in >> M;
    while (M--) {
        int l,r;
        in >> l >> r;
        r = min((int)1e7,r);
        l = min(l,r);
        
        out << dp[r] - dp[l-1] << '\n';
    }

    return 0;
}

