#include <bits/stdc++.h>
using namespace std;

#ifdef _MSC_VER
#include <intrin.h>
#define __builtin_popcount __popcnt
#define __builtin_popcountll __popcnt64
#endif

#define FOR(i, a, b) for (int i = (a), _b = (b); i <= _b; ++i)
#define FORd(i, a, b) for (int i = (a), _b = (b); i >= _b; --i)
#define FORall(it, a) for (decltype((a).begin()) it = (a).begin(); it != (a).end(); ++it)
#define ms(x, n) memset(x, n, sizeof(x))
#define sz(x) int((x).size())
#define all(x) (x).begin(), (x).end()
#define uni(x) (x).erase(unique(all(x)), (x).end())
#define prec(x) fixed << setprecision((x))
#define fi first
#define se second
#define pb push_back
#define pf push_front
#define mp make_pair
#define bit(n, i) (((n) >> (i)) & 1)
#define bitcount(n) __builtin_popcountll((n))
#define db(x) cerr << #x << " = " << (x) << ", ";
#define endln cerr << "\n";
#define chkpt cerr << "------\n";

inline long long gcd(long long a, long long b) { long long r; while (b) { r = a % b; a = b; b = r; } return a; }
inline long long lcm(long long a, long long b) { return a / gcd(a, b) * b; }
template<class T> inline int chkmax(T &a, T b) { return a < b ? a = b, 1 : 0; }
template<class T> inline int chkmin(T &a, T b) { return a > b ? a = b, 1 : 0; }

typedef pair<int, int> pi;
typedef vector<int> vi;

const int INF = (int) 1e9;
const long long LINF = (long long) 1e18;
const int MOD = (int) 1e9 + 7;

long long n;

int check(long long k) {
	long long sumCandies = n;
	long long totalEat = 0;
	while (sumCandies) {
		long long amount = min(sumCandies, k);
		totalEat += amount;
		sumCandies -= amount;
		sumCandies -= sumCandies / 10;
	}
	return 2 * totalEat >= n;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin >> n;
	long long lo = 1, hi = LINF, ans = 0;
	while (lo <= hi) {
		long long mi = (lo + hi) / 2;
		if (check(mi)) {
			ans = mi;
			hi = mi - 1;
		} else {
			lo = mi + 1;
		}
	}
	cout << ans;
	return 0;
}
