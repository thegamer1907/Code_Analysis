#include<iostream>
#include<set>
#include<map>
#include<functional>
#include<queue>
#include<string.h>
#include <sstream>
#include<stdio.h>
#include<iomanip>
#include<stdlib.h>
#include<math.h>
#include<cstdlib>
#include<vector>
#include<random>
#include<algorithm>
#include<string>
#include<stack>
#include<queue>
#include<bitset>
#include<assert.h>
#include<fstream>
typedef long long ll;
typedef unsigned long long ull;
typedef long double LD;
#define rep(i,a,b) for (int i = a; i < b; i++)
#define all(x) x.begin(), x.end()
#define sz(a) (int)a.size()
#define sqr(x) ((x) * (x))
#define pi pair<ll, ll>
#define mk(a, b) make_pair(a, b)
#define nextI nextInt()
#define nextD nextDouble()
#define nextL nextLong()
#define nextC nextChar()
#define line newLine()
#define Left(x) (2 * x + 1)
#define Right(x) (2 * x + 2)
int nextInt(){ int x; scanf("%d", &x); return x; }
double nextDouble(){ double x; scanf("%lf", &x); return x; }
ll nextLong(){ ll x; scanf("%I64d", &x); return x; }
char nextChar(){ char x; scanf("%c", &x); return x; }
void newLine(){ printf("\n"); }
ll powM(ll a, ll b, ll MOD){ ll x = 1, y = a; while (b > 0){ if (b % 2 == 1){ x = (x*y); if (x>MOD) x %= MOD; }y = (y*y); if (y>MOD) y %= MOD; b /= 2; }return x; }
int gcd(int a, int b){ return b == 0 ? a : gcd(b, a%b); }
ll lcm(ll a, ll b){ return (a*b) / gcd(a, b); }
int countBitSet(ll n){ int ans = 0;  while (n != 0){ n -= (n & -n); ++ans; } return ans; }
ll mod = ll(1e9 + 7);
ll mod2 = ll(1e9 + 9);
const int N = 500100;
const int M = 61;
const int LOG = 21;
const ll INF = 1e18;
const LD EPS = 1e-9;
const LD PI = 2 * acos(0);
using namespace std;
map<ll, ll [3]> dp;
ll b[N][3];
ll a[N];
int main(){
#ifdef HOME
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#endif
	int n = nextI;
	ll k = nextL;
	for (int i = 0; i < n; i++){
		a[i] = nextL;
	}
	for (int i = 0; i < n; i++){
		b[i][2] = dp[a[i]][2];
		b[i][1] = dp[a[i]][1];
		b[i][0] = 1;
		dp[a[i] * k][1] += b[i][0];
		dp[a[i] * k][2] += b[i][1];

	}
	ll ans = 0;
	for (int i = 0; i < n; i++){
		ans += b[i][2];
	}
	cout << ans << endl;
	return 0;
}