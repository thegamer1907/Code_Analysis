#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <bitset>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <stack>
#include <string> 
#include <iomanip>
#include <list>
#include <random>
#include <numeric> //iota - iota(v.begin(), v.end(), x) x, x + 1, x + 2...

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
typedef int INT;
#define int ll
#define mmin(a, b) a = min(a, b)
#define mmax(a, b) a = max(a, b)
#define mp(a,b) make_pair(a,b)
#define pb(a) push_back(a)
#define all(a) a.begin(),a.end()
#define sz(a) ((int)(a.size()))
#define x first
#define y second
#define watch(x) cout << (#x) << " = " << x << endl;
#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c))
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vl;
typedef vector<vl> vvl;
#define f(i,n) for(int i=0; i<n;i++) 
#define forn(i, j, n) for(int i=j; i<n; i++)

/*
	tuple<int, string> f() {
		return {485, "Hello"};
	}
	int a;
	string b;
	tie(a, b) = f();
*/

const double PI = 2 * acos(0.0), eps = 1e-8;
const int oo = 1000000000000000000;

template<class T>
void show(const vector<T> &a) {
	cout << sz(a) << endl;
	for (T x : a)
		cout << x << " ";
	cout << endl;
}

const ll M = 998244353;

ll MOD(ll a) {
	if (a >= 0) return a >= M ? a % M : a;
	if (a <= -M) a %= M;
	return a ? a + M : a;
}

/*______________________________________________________________________________________________________________________________
________________________________________________________________________________________________________________________________
________________________________________________________________________________________________________________________________
________________________________________________________________________________________________________________________________
________________________________________________________________________________________________________________________________
________________________________________________________________________________________________________________________________
________________________________________________________________________________________________________________________________
________________________________________________________________________________________________________________________________
________________________________________________________________________________________________________________________________
______________________________________________________________________________________________________________________________*/

signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int n;
	cin >> n;
	vi v(7), z;
	int u = 6;
	while (n != 0)
	{
		v[u] = n % 10;
		n /= 10;
		u--;
	}
	while (true)
	{
		int p = 0;
		for (int i = 0; i < 7; i++)
		{
			p = p * 10;
			if (v[i])
			{
				p++;
				v[i]--;
			}
		}
		if (p == 0)
			break;
		z.push_back(p);
	}
	cout << z.size() << endl;
	for (int i = 0; i < z.size(); i++)
		cout << z[i] << " ";
}