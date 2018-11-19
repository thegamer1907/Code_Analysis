#include <iostream>
#include <cstring>
#include <cstdio>
#include <ctime>
#include <algorithm>
#include <string>
#include <vector>
#include <queue> 
#include <stack>
#include <deque> 
#include <set>
#include <map>
#include <unordered_map>
#include <list>
#include <utility>
#include <bitset>
#include <stdio.h>
#include <iomanip>
#include <climits>
#include <cmath>
#include <functional>
#include <sstream>
#include <math.h>
#include <stdio.h>
#include <tuple>
#include <regex>
#include <complex>
#include <cstdlib>

using namespace std;


typedef complex<long double> point;
#define sz(a) ((int)(a).size())
#define OO 1e9
#define EPS 1e-9
#define X real()
#define Y imag()
#define vec(a,b) ((b)-(a))
#define polar(r,t) ((r)*exp(point(0,(t))))
#define angle(v) (atan2((v).Y,(v).X))
#define length(v) ((long double)hypot((v).Y,(v).X))
#define lengthSqr(v) (dot(v,v))
#define dot(a,b) ((conj(a)*(b)).real())
#define cross(a,b) ((conj(a)*(b)).imag())
#define rotate(v,t) (polar(v,t))
#define rotateabout(v,t,a) (rotate(vec(a,v),t)+(a))
#define reflect(p,m) ((conj((p)/(m)))*(m))
#define normalize(p) ((p)/length(p))
#define same(a,b) (lengthSqr(vec(a,b))<EPS)
#define mid(a,b) (((a)+(b))/point(2,0))
#define perp(a) (point(-(a).Y,(a).X))
#define colliner pointOnLine
#define rad(t) t*pi/180
#define deg(t) t*180/pi

enum STATE {
	IN, OUT, BOUNDRY
};

#define FOR(i,n) for(int i=0; i<n ; i++)
#define pi 3.14159265358979323846
#define mp make_pair
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define F first
#define S second

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const ll MOD = 1000000007;
const int INF = 2000 * 1000 * 1000 + 5;
const int MAX = 1005; // 2*2^ceil(log_2(n)) - 1


int popcount(int n) { bitset<32> b(n); return b.count(); }
long long gcd(long long a, long long b) { return b == 0 ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { ll temp = gcd(a, b); 	return temp ? (a / temp * b) : 0; }
template <typename T>
T modpow(T base, T exp, T modulus) { base %= modulus; T result = 1; while (exp > 0) { if (exp & 1) result = (result * base) % modulus; base = (base * base) % modulus;	exp >>= 1; }return result; }
inline bool isInteger(const std::string & s) { if (s.empty() || ((!isdigit(s[0])) && (s[0] != '-') && (s[0] != '+'))) return false; char * p; strtol(s.c_str(), &p, 10); return (*p == 0); }

int main()
{
	string s; cin >> s;
	int n; cin >> n;
	bool st = 0, ed = 0;
	FOR(i, n)
	{
		string x; cin >> x;
		if (s == x) { cout << "YES" << endl; return 0; }
		if (x[1] == s[0]) st = 1;
		if (x[0] == s[1]) ed = 1;
	}
	if (st && ed) cout << "YES" << endl;
	else cout << "NO" << endl;

	return 0;
}

