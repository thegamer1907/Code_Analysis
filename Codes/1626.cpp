#define _CRT_SECURE_NO_DEPRECATE
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <memory.h>
#include <set>
#include <ctime>
#include <map>
#include <cstring>
#include <iterator>
#include <queue>
#include <assert.h>
#include <unordered_set>
#include <bitset>


using namespace std;



#define pb push_back
#define pii pair<int, int>
#define mp make_pair
#define ull unsigned long long
#pragma comment(linker, "/STACK:64000000")
#define null NULL
#define forn(i, n) for (int i = 0; i < (n); ++i)
#define fornr(i, n) for (int i = (n); i >= 0; --i)
#define forab(i, a, b) for (int i = (a); i < (b); ++i)
#define all(a) a.begin(), a.end()
#define vi vector<int>
#define v(a) vector<a>

//typedef long double ld;
typedef long double ld;
typedef pair<ld, ld> pldld;
typedef long long ll;
typedef pair<ll, ll> pll;
typedef pair<double, double> pdd;


typedef unsigned int ui;
typedef unsigned char uc;
const int infi = 1e9 + 7;
const ll infl = 2e18 + 7;

/*
template <class T1, class T2>
istream & operator >> (istream &in, pair<T1, T2> a) {
return in >> a.first >> a.second;
}*/

/*
const int MAX_MEM = 9e8;
int mpos = 0;
char mem[MAX_MEM];
inline void * operator new ( size_t n ) {
char *res = mem + mpos;
mpos += n;
assert(mpos <= MAX_MEM);
return (void *)res;
}
inline void operator delete ( void * ) { }

inline void * operator new [] ( size_t ) { assert(0); }
inline void operator delete [] ( void * ) { assert(0); }
*/

ll ar[100500];
ll tmp[100500];
ll get(int n, int k) {
	forn(i, n) {
		tmp[i] = ar[i] + 1LL * (i + 1) * k;
	}
	sort(tmp, tmp + n);
	ll ans = 0;
	forn(i, k)
		ans += tmp[i];
	return ans;
}

int main() {
	cin.sync_with_stdio(false);
	cin.tie(0);

//	freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
	//freopen("delicious.in", "r", stdin);freopen("delicious.out", "w", stdout);
	int n;
	ll s;
	cin >> n >> s;
	forn(i, n)
		cin >> ar[i];
	int ans = 0;
	ll sum = 0;
	int l = 1, r = n;
	while (l <= r) {
		int mid = (l + r) >> 1;
		ll a = get(n, mid);
		if (a <= s) {
			ans = mid;
			sum = a;
			l = mid + 1;
		}
		else
			r = mid - 1;
	}
	cout << ans << ' ' << sum;

	return 0;
}