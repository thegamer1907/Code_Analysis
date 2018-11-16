#include <bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
#define pii pair<int,int>
#define pll pair<ll,ll>
#define fo(i,a,b) for(int i=a;i<b;i++)
#define fo_(i,a,b) for(int i=a;i>b;i--)
#define M(a) memset(a,0,sizeof a)
#define M_(a) memset(a ,-1,sizeof a)
#define pb push_back
#define PI 3.14159265
#define nmax 5100
const ll inf = std::numeric_limits<ll>::max();
const ll mod = 1e9+7;
using namespace std;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

ll dp[2][nmax];
ll a[nmax],p[nmax];

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,m,k;
    cin >> n >> m >> k;
    fo(i,0,n) cin >> a[i];

    fo(i,1,n+1){
        p[i] = a[i-1];
        p[i] += p[i-1];
    }
    fo(i,m,n+1) dp[0][i] = max(p[i] - p[i-m],dp[0][i-1]);

    fo(i,1,k){
        fo(j,i*m,n+1){
            dp[i%2][j] = max(dp[1-i%2][j-m] + p[j] - p[j-m],dp[i%2][j-1]);
        }
    }
    cout << dp[1-k%2][n];

    return 0;
}
