#define _CRT_SECURE_NO_DEPRECATE

#pragma warning(disable:4996)
//#pragma comment(linker, "/STACK:512000000")

//190647WR

#include <algorithm>
#include <bitset>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <ctime>
#include <cstdlib>
#include <deque>
#include <fstream>
#include <functional>
#include <iterator>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <vector>
#include <set>
#include <string>

#define ISO11
#define myDEBUG

#ifdef ISO11
#include <unordered_map>
#include <unordered_set>
#endif

#ifdef myDEBUG

#define assert(x) \
	if(!x){\
		cerr<<"\n\nERROR!\tFailed: "<<x;\
		cerr<<"\nLine: "<<__LINE__;\
		cerr<<"\nFile: "<<__FILE__;\
		cerr<<"\nTime: "<<__TIME__;\
		cerr<<"\nDate: "<<__DATE__;\
	}\

#define err(x) assert(x)
#define warn(x) assert(x)

#endif

#define F first
#define S second
#define read(x) scanf("%d", &x);
#define readln(x) scanf("%d\n", &x);
#define write(x) printf("%d ", x);
#define writeln(x) printf("%d\n", x);
#define MEM(x, y) memset(x, y, sizeof(x));
#define forn(i, n) for(int i = 0; i < n; ++i)
#define mp make_pair
#define pb push_back
#define is insert
#define runtime clock() * 1.0 / CLOCKS_PER_SEC
#define pii pair<int, int>

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const ll INF = (1ll << 63) - 1ll;
const ld INFd = 28e14;
const ll inf = (1 << 31) - 1;
const ld EPS = 1e-8;

const ld PI = acos(-1.0);

using namespace std;

//#include <chrono>
//using namespace std::chrono;
//cerr << "Nanosec:" << duration_cast<nanoseconds>(end_time - start_time).count() << endl;
//time_point<steady_clock> start_time, end_time;
//start_time = high_resolution_clock::now();
//end_time = high_resolution_clock::now();

void OUT(bool f) { if (f) cout << "YES" << endl; else cout << "NO" << endl; }
void Out(bool f) { if (f) cout << "Yes" << endl; else cout << "No" << endl; }
void out(bool f) { if (f) cout << "yes" << endl; else cout << "no" << endl; }

inline int next_rand() { return abs(rand() * rand() + rand()); }

#ifdef GEOM
typedef double T;
const T eps = 1e-10;
bool equal(T a, T b) { return fabs(a - b) < eps; }
T sqr(T arg) { return arg * arg; }
struct PV {
	T x, y;
	PV() { x = y = 0; }
	PV(T x, T y) :x(x), y(y) { ; }
	PV(const PV& a, const PV& b) :x(a.x - b.x), y(a.y - b.y) { ; }
	PV turn_conrt_clock() { PV ans; ans.x = -y; ans.y = x; return ans; }
	PV turn_on_clock() { PV ans; ans.x = y; ans.y = -x; return ans; }
	PV setlen(T s = 1) { PV ans; ans.x = x; ans.y = y; s /= sqrt(x * x + y * y); ans.x *= s; ans.y *= s; return ans; }
	T len() { return sqrt(sqr(x) + sqr(y)); }
};

PV operator+ (PV lhs, const PV& rhs) { lhs.x += rhs.x; lhs.y += rhs.y; return lhs; }
PV operator- (PV lhs, const PV& rhs) { lhs.x -= rhs.x; lhs.y -= rhs.y; return lhs; }
T operator% (const PV& lhs, const PV& rhs) { return lhs.x * rhs.x + lhs.y * rhs.y; }
T operator* (const PV& lhs, const PV& rhs) { return lhs.x * rhs.y - lhs.y * rhs.x; }
T Po(const PV& lhs, const PV& rhs) { return sqrt(sqr(lhs.x - rhs.x) + sqr(lhs.y - rhs.y)); }
struct Line {
	T a, b, c;
	Line() { a = b = c = 0; }
	void set(PV A, PV B, bool iCV = true) {
		if (iCV)
			B = B + A;
		a = A.y - B.y;
		b = -(A.x - B.x);
		c = -B.x * a + B.y * -b;
	}
	Line(PV A, PV B, bool iCV = true) {
		set(A, B, iCV);
		//if (!equal(a, 0))
		//	multC(1.0 / a);
		//if (!equal(b, 0))
		//	multC(1.0 / b);
	}
	void multC(T s = 1) { a *= s; b *= s; c *= s; }
	PV rp() {
		PV ans;
		if (equal(a, 0)) {
			ans.y = -c / b;
			ans.x = 0;
		}
		else {
			ans.y = 0;
			ans.x = (-c) / a;
		}
		return ans;
	}
};

bool operator< (pair<T, bool> lhs, pair<T, bool> rhs) {
	if (equal(lhs.F, rhs.F)) {
		return lhs.second < rhs.second;
	}
	else
		return lhs.F < rhs.F;
}

T operator^(Line lhs, PV rhs) {
	T ans = 0;
	ans = lhs.a * rhs.x + lhs.b * rhs.y + lhs.c;
	ans /= sqrt(sqr(lhs.a) + sqr(lhs.b));
	if (lhs.c > 0)
		ans = -ans;
	return ans;
}
#endif

struct __debug__ {
	__debug__(string filename, bool f = false) {
#ifdef _DEBUG
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
#endif		
		if (filename == "") return;
		ios_base::sync_with_stdio(0);
		cin.tie(0);
		cout.tie(0);
		string filein = filename + ".in";
		string fileout = filename + ".out";
		freopen(filein.c_str(), "r", stdin);
		freopen(fileout.c_str(), "w", stdout);
#ifdef _DEBUG
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
#endif
	}
	~__debug__() {
#ifdef _DEBUG
		freopen("CON", "r", stdin);
		freopen("CON", "w", stdout);
		cerr << "\n\nTIME: \t" << runtime << endl;
		system("pause");
#endif
	}
};


__debug__ DEBUG("");

//#define STRESS
void gen();
void solve();


//#define GEOM


int main() {
	srand('M' + 'A' + 'S' + 'L' + '0' + 'F');
#ifdef STRESS
	gen();
#endif
	/// zahijoja
	/// aawnrjn6
	/// fml31-p08
	/// shop-3
	/// yedetayiro
	/// afesivuda
	/// ivisuzedu
	/// ugesetacuz

	///zhsh2018user318
	///fj=pJFqz

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	solve();
}
///http://tk2018.contest.codeforces.com

void solve() {
	int n, a, b;
	cin >> n >> a >> b;
	if (a > b)swap(a, b);
	if (a <= (n / 2) && b > (n / 2))
		cout << "Final!" << endl;
	else {
		int ans = 0;
		--a; --b;
		while (a != b) {
			a /= 2;
			b /= 2;
			++ans;
		}
		cout << ans << endl;
	}
}