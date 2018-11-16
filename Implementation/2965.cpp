#include<iostream>
#include <fstream>
#include <iomanip>
#include<algorithm>
#include<string>
#include<random>
#include<vector>
#include<list>
#include<set>
#include<math.h>
#include<map>
#include<complex>

#define int         int64_t
#define loop(i, a, n) for (int i = a; i < int(n); ++i)
#define loop_rev(i, n, a) for (int i = int(n) - 1; i >= int(a); --i)
#define all(x) (x).begin(),(x).end()
#define pb          push_back
#define ii         pair<int,int>
#define vi          vector< int>
#define iii			tuple<int,int,int>
#define iiii		tuple<int,int,int,int>
#define ST			get<0>
#define ND			get<1>
#define RD			get<2>
#define TH			get<3>
#define pi			3.141592653589793238462
#define double      long double
#define CHECK_BIT(var,pos) ((var) & (1<<(pos)))
#define x			first
#define y			second
using namespace std;

typedef complex<double>	com;
/*
unsigned GCD(unsigned u, unsigned v) {
	unsigned r;
	while (v != 0) {
		r = u % v;
		u = v;
		v = r;
	}
	return u;
}

int xGCD(int a, int b, int &x, int &y) {
	if (b == 0) {
		x = 1;
		y = 0;
		return a;
	}

	int x1, y1, gcd = xGCD(b, a % b, x1, y1);
	x = y1;
	y = x1 - (a / b) * y1;
return gcd;
}

int inv(int x, int mod)
{
	int res,t;
	xGCD(mod, x%mod, t, res);
	return (res%mod+mod)%mod;
}
struct DSU
{
	vi deg;
	vi par;
	int sum;
	DSU() {}
	DSU(int n)
	{
		deg.resize(n, 0);
		par.resize(n, -1);
		sum = n;
	}
	int find(int x)
	{
		if (par[x] == -1) return x;
		return par[x] = find(par[x]);
	}
	void uni(int x, int y)
	{
	x = find(x); y = find(y);
	if ((x != -1 || y != -1) && x == y) return;
	sum--;
	if (deg[x] < deg[y]) par[x] = y;
	else {
		deg[x] += (deg[x] == deg[y]);
		par[y] = x;
		}
	}
};*/

int mod = 1e9 + 7, inf = 4e18;


int sum = 0;
int tmp3 = 0, tmp = 0, tmp2 = 0, comb = 1;
vector<int> check, st;
int maxi = 0, mini = inf;
string s2, s;
vector<vector<ii>> g;
bool high = 0;

int32_t main()
{
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	cin >> n;
	loop(i, 0, n)
	{
		cin >> s;
		if (s == "Tetrahedron") sum += 4;
		if (s == "Cube") sum += 6;
		if (s == "Octahedron") sum += 8;
		if (s == "Dodecahedron") sum += 12;
		if (s == "Icosahedron") sum += 20;
	}
	cout << sum;
	return 0;
}