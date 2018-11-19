//code taken from http://codeforces.com/contest/833/submission/29029428

//satyaki3794
#include <bits/stdc++.h>
#define ff first
#define ss second
#define pb push_back
#define MOD (1000000007LL)
#define LEFT(n) (2*(n))
#define RIGHT(n) (2*(n)+1)
 
using namespace std;
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> iii;
 
ll pwr(ll base, ll p, ll mod=MOD){
ll ans = 1;while(p){if(p&1)ans=(ans*base)%mod;base=(base*base)%mod;p/=2;}return ans;
}


ll gcd(ll a, ll b){
    if(b == 0)  return a;
    return gcd(b, a%b);
}


const ll INF = 1e16;
const int MAXN = 100002;

int a[MAXN];
ll cnt[MAXN];
ll distinct = 0, curr_value = 0;


void add(int x) {
    if (cnt[x] == 0) {
        ++distinct;
    }
    curr_value -= cnt[x]*(cnt[x]-1)/2;
    ++cnt[x];
    curr_value += cnt[x]*(cnt[x]-1)/2;
}

void del(int x) {
    if (cnt[x] == 1) {
        --distinct;
    }
    curr_value -= cnt[x]*(cnt[x]-1)/2;
    --cnt[x];
    curr_value += cnt[x]*(cnt[x]-1)/2;
}

void addRange(int l, int r) {
    for (int i = l; i <= r; ++i) {
        add(a[i]);
    }
}

void delRange(int l, int r) {
    for (int i = l; i <= r; ++i) {
        del(a[i]);
    }
}

ll dp[2][MAXN];
// at any point of time, have distinct stored from [lo, r]
// this is sufficient to handle all possible cases (extreme points)
void solve(bool u, int l, int r, int lo, int ro) {
    if (l > r) {
        return;
    }
    int m = (l + r) / 2;
    dp[u][m] = INF;
    int jo;
    delRange(m + 1, r);
    for (int j = lo; j <= min(ro, m); ++j) {
        if (dp[1 - u][j - 1] + curr_value < dp[u][m]) {
            dp[u][m] = dp[1 - u][j - 1] + curr_value;
            jo = j;
        }
        del(a[j]);
    }
    addRange(lo, min(ro, m)); // to counter line 54
    if (l != r) {
        del(a[m]);
        solve(u, l, m - 1, lo, jo); // this should return in exact state as before
        addRange(m, r); // to counter lines 48 and 58
        
        // at this point i am [lo, r] and i need to be [jo, r]
        delRange(lo, jo - 1);  
        solve(u, m + 1, r, jo, ro);
        addRange(lo, jo - 1);  
    }
    else {
        addRange(m + 1, r); // to counter line 54
    }
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
        add(a[i]);
    }
    dp[0][0] = 0;
    for (int i = 1; i <= n; ++i) {
        dp[0][i] = INF;
    }
    for (int j = 1; j <= k; ++j) {
        solve(j & 1, 1, n, 1, n);
// cout<<"after j = "<<j<<": ";for(int i=1;i<=n;i++)   cout<<dp[j&1][i]<<" ";cout<<endl;
    }
    printf("%lld\n", dp[k & 1][n]);
    return 0;
}


