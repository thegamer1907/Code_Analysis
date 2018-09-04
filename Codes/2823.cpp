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
ll gcd(ll a, ll b){ return b == 0 ? a : gcd(b, a%b); }
ll lcm(ll a, ll b){ return (a*b) / gcd(a, b); }
int countBitSet(ll n){ int ans = 0;  while (n != 0){ n -= (n & -n); ++ans; } return ans; }
ll mod = ll(1e9 + 7);
ll mod2 = ll(1e9 + 9);
const int N = 1000100;
const int M = 1100;
const int LOG = 14;
const int INF = -1e9;
const LD EPS = 1e-9;
const LD PI = 2 * acos(0);
using namespace std;
int b[N];
int occ[N];
int main(){
#ifdef HOME
	freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#endif
	string s;
	cin >> s;
	int n = s.length();
	int match = -1; b[0] = -1;
	for (int i = 0; i < n; i++){
		while (match >= 0 && s[match] != s[i]) match = b[match];
		b[i + 1] = ++match;
	}
	for (int i = 1; i < n; i++){
		match = b[i];
		while (match > -1){

			while (match >= 0 && s[i] != s[match]) match = b[match];

			if (match != -1){
				if (occ[match] >= 2) break;
				++occ[match];
				match = b[match];
			}
		}
	}
	int ans = -1;
	match = b[n - 1];
	while (match > -1){
		while (match >= 0 && s[n - 1] != s[match]) match = b[match];
		if (match != -1){
			if (occ[match] >= 2) ans = max(ans, match);
			match = b[match];
		}
	}
	if (ans == -1){
		cout << "Just a legend";
	}
	else{
		for (int i = 0; i <= ans; i++){
			cout << s[i];
		}
	}
	return 0;
}