#include <bits/stdc++.h>

#define mp make_pair
#define pb push_back
#define f first
#define s second
#define ll long long
//#define int ll
#define forn(i, a, b) for(int i = (a); i <= (b); ++i)
#define forev(i, b, a) for(int i = (b); i >= (a); --i)
#define VAR(v, i) __typeof( i) v=(i)
#define forit(i, c) for(VAR(i, (c).begin()); i != (c).end(); ++i)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define file(s) freopen(s".in","r",stdin); freopen(s".out","w",stdout);

using namespace std;

const int maxn = (int) 1e5 + 100;
const int mod = (int)1e9 + 7;
const int P = (int) 1e6 + 7; 

#define inf mod

typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;   
typedef vector<ll> Vll;               
typedef vector<pair<int, int> > vpii;
typedef vector<pair<ll, ll> > vpll;                        


vector<vi> mul(vector<vi> a, vector<vi> b){
  int n = sz(a), m = sz(a[0]), k = sz(b[0]);
  vector<vi> res (n, vi(k, 0));             
  forn(i, 0, n - 1)
    forn(j, 0, k - 1)
      forn(t, 0, m - 1)
        res[i][j] = (res[i][j] + (a[i][t] * 1ll * b[t][j]) % mod) % mod;
  return res;
} 

vector<vi> binpow(vector<vi> a, int n){
  vector<vi> res (4, vi(4, 0));
  res[0][0] = res[1][1] = res[2][2] = res[3][3] = 1;                                                             
  while(n){
    if(n & 1) res = mul(res, a);
    n >>= 1;
    a = mul(a, a);
  }
  return res;
}
int get(int x){
  vector<vi> dp(4, vi(4, 1));  
  dp[0][0] = dp[1][1] = dp[2][2] = dp[3][3] = 0;                                                             
  dp = binpow(dp, x);
  return dp[0][0];
}
int main () {
  int t;
  scanf("%d", &t);
  printf("%d", get(t));
}
