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
#define lp(i,n) for (int i = 0; i < n; i++)
#define all(x) x.begin(), x.end()
#define sz(a) (int)a.size()
#define sqr(x) ((x) * (x))
#define pi pair<ll, ll>
#define mk(a, b) make_pair(a, b)
#define nextI nextInt()
#define nextD nextDouble()
#define pb(a) push_back(a)
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
ll gcd(ll a, ll b){ return b == 0 ? a : gcd(b, a%b); }
ll lcm(ll a, ll b){ return (a*b) / gcd(a, b); }
int countSetBits(ll n){ int ans = 0;  while (n != 0){ n -= (n & -n); ++ans; } return ans; }
ll mod = 1000000007;
ll mod2 = 1000000009;
const int N = 100100;
const int M = 100100;
const int LOG = 21;
const int INF = 1e9;
const LD EPS = 1e-6;
const LD PI = 2 * acos(0);
using namespace std;

int a[N], b[N];
int main(){
#ifdef HOME
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#endif
	ios::sync_with_stdio(0); cin.tie(0);
	int n; cin >> n;
	for (int i = 0; i < n; i++){
		cin >> a[i];
		a[i] -= i;
		b[i] = a[i] / n;
		b[i] += (a[i] % n) > 0;
	}
	int mn = INF;
	int id = 0;
	for (int i = 0; i < n; i++){
		if (b[i] < mn){
			mn = b[i];
			id = i;
		}
	}
	cout << id + 1 << endl;
	return 0;
}