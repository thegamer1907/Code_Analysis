//Dominik Kowalczyk

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <bitset>
#include <cmath>
#include <bitset>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <stack>
#include <queue>
#include <functional>
#include <time.h>
#include <cstring>
#include <complex>
#include <stdio.h>
#include <iomanip>

using namespace std;


#define boost ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef unsigned int uint;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld; // 'long double' is 2.2 times slower
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
#define sz(a) int((a).size()) 
#define pb push_back 
#define all(c) (c).begin(), (c).end()

template<typename T> inline void setmin(T &x, T y) { if (y < x) x = y; }
template<typename T> inline void setmax(T &x, T y) { if (y > x) x = y; }
template<typename T> inline T gcd(T a, T b) { while (b)swap(a %= b, b); return a; }
template<typename T> inline T lcm(T a, T b) { return a / gcd(a, b) * b; }

template<class T1, class T2, class T3>
struct triple { T1 a; T2 b; T3 c; triple() : a(T1()), b(T2()), c(T3()) {}; triple(T1 _a, T2 _b, T3 _c) :a(_a), b(_b), c(_c) {} };
template<class T1, class T2, class T3>
bool operator<(const triple<T1, T2, T3>&t1, const triple<T1, T2, T3>&t2) { if (t1.a != t2.a)return t1.a < t2.a; else if (t1.b != t2.b)return t1.b < t2.b; else return t1.c < t2.c; }
template<class T1, class T2, class T3>
bool operator>(const triple<T1, T2, T3>&t1, const triple<T1, T2, T3>&t2) { if (t1.a != t2.a)return t1.a > t2.a; else if (t1.b != t2.b)return t1.b > t2.b; else return t1.c > t2.c; }
template<class T1, class T2, class T3>
bool operator==(const triple<T1, T2, T3>&t1, const triple<T1, T2, T3>&t2) { return (t1.a == t2.a && t1.b == t2.b && t1.c == t2.c); }

#define tri triple<int,int,int>
#define trll triple<ll,ll,ll>
template<class T> inline int sign(T x) { return x > 0 ? 1 : x < 0 ? -1 : 0; }
inline bool isPowerOfTwo(int x) { return (x != 0 && (x&(x - 1)) == 0); }
inline int countBits(uint v) { v = v - ((v >> 1) & 0x55555555); v = (v & 0x33333333) + ((v >> 2) & 0x33333333); return((v + (v >> 4) & 0xF0F0F0F) * 0x1010101) >> 24; }
inline int countBits(ull v) { uint t = v >> 32; uint p = (v & ((1ULL << 32) - 1)); return countBits(t) + countBits(p); }
inline int countBits(ll v) { return countBits((ull)v); }
inline int countBits(int v) { return countBits((uint)v); }
unsigned int reverseBits(uint x) { x = (((x & 0xaaaaaaaa) >> 1) | ((x & 0x55555555) << 1)); x = (((x & 0xcccccccc) >> 2) | ((x & 0x33333333) << 2)); x = (((x & 0xf0f0f0f0) >> 4) | ((x & 0x0f0f0f0f) << 4)); x = (((x & 0xff00ff00) >> 8) | ((x & 0x00ff00ff) << 8)); return((x >> 16) | (x << 16)); }

template<class T>
T fast_gcd(T u, T v) {
	int shl = 0; while (u && v && u != v) {
		T eu = u & 1; u >>= eu ^ 1; T ev = v & 1; v >>= ev ^ 1;
		shl += (~(eu | ev) & 1); T d = u & v & 1 ? (u + v) >> 1 : 0; T dif = (u - v) >> (sizeof(T) * 8 - 1); u -= d & ~dif; v -= d & dif;
	} return std::max(u, v) << shl;
}

template<class T> bool isPrime(T x) {
	if (x <= 4 || x % 2 == 0 || x % 3 == 0) return x == 2 || x == 3;
	for (T i = 5; i * i <= x; i += 6) if (x % i == 0 || x % (i + 2) == 0) return 0; return 1;
}

const int USUAL_MOD = 1e9 + 7;
template<class T> inline void normmod(T &x, T m = USUAL_MOD) { x %= m; if (x < 0) x += m; }
inline ll mulmod(ll x, ll n, ll m) { x %= m; n %= m; ll r = x * n - ll(ld(x)*ld(n) / ld(m)) * m; while (r < 0) r += m; while (r >= m) r -= m; return r; }
inline ll powmod(ll x, ll n, ll m) { ll r = 1; normmod(x, m); while (n) { if (n & 1) r *= x; x *= x; r %= m; x %= m; n /= 2; }return r; }
inline ll powmulmod(ll x, ll n, ll m) { ll res = 1; normmod(x, m); while (n) { if (n & 1)res = mulmod(res, x, m); x = mulmod(x, x, m); n /= 2; } return res; }

bool millerRabin(long long n) {
	if (n <= 1000) return isPrime(n);
	long long s = n - 1; int t = 0; while (s % 2 == 0) s /= 2, ++t;
	for (int a : {2, 325, 9375, 28178, 450775, 9780504, 1795265022}) {
		if (!(a %= n)) return true;
		long long f = powmulmod(a, s, n); if (f == 1 || f == n - 1) continue;
		for (int i = 1; i < t; ++i) if ((f = mulmod(f, f, n)) == n - 1) goto nextp;
		return false; nextp:;
	} return true;
}

template<typename T>
vector<vector<T> > newton(int N, int MOD) {
	vector<vector<T> > npok(N + 1, vector<T>(N + 1));
	for (int i = 0; i <= N; ++i)npok[i][0] = 1;
	for (int i = 1; i <= N; ++i)for (int j = 1; j <= N; ++j)npok[i][j] = (npok[i - 1][j] + npok[i - 1][j - 1]) % MOD; return npok;
}

const ll MOD = 1e9 + 7;
const int INF = 0x3f3f3f3f;
const ll LL_INF = 0x3f3f3f3f3f3f3f3f;
const ld PI = acos(-1);

int main()
{
	boost;
	int n, t;
	cin >> n >> t;

	vi graf(n + 1);

	for (int i = 1; i < n; i++)
	{
		cin >> graf[i];
		graf[i] += i;
	}

	vector<bool>vis(n + 1);
	vis[1] = true;

	for (int i = 1; i < n; i++)
	{
		if (vis[i])
		{
			vis[graf[i]] = true;
		}
	}


	cout << (vis[t] ? "YES" : "NO");

	return 0;
}