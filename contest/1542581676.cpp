#include <cmath>
#include <ctime>
#include <iostream>
#include <string>
#include <vector>
#include<cstdio>
#include<sstream>
#include<algorithm>
#include<cstdlib>
#include<cstring>
#include<map>
#include<set>
#include<queue>
#include<cctype>
#include <iomanip>
#include <string>
#include <sstream>
#include <functional>
#include <numeric>
#include <stack>
#include <climits>
#include <float.h>
#include<unordered_map>
#include <bitset>
#include <tuple>

using namespace std;
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define f(i,a,b) for(int i=a;i<b;i++)
#define F(i,a,b) for(int i=a;i>=    b;i--)
#define sz(a) ((int)a.size())
#define all(c) c.begin(), c.end()
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
#define dbgs(x) cerr << (#x) << " --> " << (x) << ' '
#define dbg(x) cerr << (#x) << " --> " << (x) << endl
#define sz(a) ((int)a.size())
#define endl '\n' 

//#define fast ios_base::sync_with_stdio(0);cin.tie(0) ; 
typedef long long ll;
typedef unsigned long long ull;
typedef pair <ll, ll> pll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef vector<pair<int, int> > vpii;
typedef map<int, int> mii;
typedef map<ll, ll> mll;
typedef pair<int, int> pii;
typedef pair<string, int> psi;
typedef long double ld;
template <class T> const T& max(const T& a, const T&b, const T&c) { return max(a, max(b, c)); }
template <class T> const T& min(const T& a, const T&b, const T&c) { return min(a, min(b, c)); }
void sc(int &a) { scanf("%d", &a); }void sc(ll &a) { scanf("%lld", &a); }void sc(int& a, int& b) { sc(a); sc(b); }
void sc(ll &a, ll &b) { sc(a); sc(b); }void sc(int& a, int& b, int& c) { sc(a, b); sc(c); }void sc(ll& a, ll& b, ll& c) { sc(a, b); sc(c); }
void prl(int a) { printf("%d\n", a); }void prl(ll a) { printf("%lld\n", a); }void prl() { printf("\n"); }
void prs(int a) { printf("%d ", a); }void prs(ll a) { printf("%lld ", a); }
int gcd(int a, int b) { if (b == 0) return a; return gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a * b) / gcd(a, b); }
ll poww(ll a, ll b) {
	if (b == 0) return 1;
	ll tmp = poww(a, b / 2);
	return (b & 1 ? a * tmp * tmp : tmp * tmp);
}
ll sumOfDigs(string s) { ll sum = 0; for (int i = 0; i < s.length(); i++) sum += s[i] - '0'; return sum; }
ll sumOfDigs(ll n) { return (n < 10 ? n : n % 10 + sumOfDigs(n / 10)); }
string itos(ll i) { string s = ""; 	while (i) { s += char(i % 10 + '0'); i /= 10; } reverse(all(s));  return s; }
ll stoi(string &s) { ll tot = 0; for (int i = (int)s.length() - 1, j = 1; i >= 0; i--, j *= 10) { tot += j * (s[i] + '0'); }  return tot; }
int months[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
using namespace std;
#define PI acos((ld)-1.0) 
// printf("%.8lf\n", sum * 1.0 / n);  // precision setting
ll mod = 1e9 + 7;
void tt() {
#ifndef online	_judge
	freopen("test.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
#endif
}
ll modpower(ll x, ll y, ll p)
{
	x %= mod;
	if (!y) return 1;
	ll res = 1;
	if (y & 1) { res *= x;  res %= p; }
	ll z = modpower(x, y / 2, p);
	z %= p;
	z *= z;
	z %= mod;
	res *= z;
	res %= p;
	return res;
}

const int MAX = 1e5 + 10;


int main() {
	
	//tt();  
	int h, m, s, t1, t2;
	cin >> h >> m >> s >> t1 >> t2; 

	t1 %= 12, t2 %= 12; 

	int x = t1, y = t2; 

	h = h % 12; 

	set<int>ss; 

	ss.insert(y); 

	while (x != y) {

		ss.insert(x); 
		x++; 

		x %= 12; 

	//	if (!x) { x = 12;  }

	}

	//cout << "t1: " << t1 << " t2: " << t2 << endl; 

	int poss = 1; 

	for (auto t : ss) {

		if (t == t1 || t == t2) { continue;  }

		if (t == h || t == m / 5 || t == s / 5) { poss = 0; break;  }

	}

	if (h == t1) { poss = 0;  }

	if (m / 5 == t1) { poss = 0;  }

	if (s / 5 == t1) { poss = 0;  }

	if (h == t2 && s == 0 && m == 0) { poss = 0; }

	if (m / 5 == t2 && m % 5 == 0 && s == 0 ) { poss = 0;  }

	if (s / 5 == t2 && s % 5 == 0) { poss = 0;  }

	if (poss) { return cout << "YES" << endl, 0;  }

	
	////////////
	
	swap(t1, t2); 

	x = t1, y = t2;

	h = h % 12;

	ss.clear(); 

	ss.insert(y);

	while (x != y) {
	
		ss.insert(x);
		x++;

		x %= 12;

		//if (!x) { x = 12; }

	}

	
	//cout << "t1: " << t1 << " t2: " << t2 << endl;

	poss = 1;

	for (auto t : ss) {

		if (t == t1 || t == t2) { continue; }

		if (t == h || t == m / 5 || t == s / 5) { poss = 0; break; }

	}

	//cout << "poss: " << poss << endl; 

	if (h == t1) {poss = 0; }

	if (m / 5 == t1) { poss = 0; }
	
	if (s / 5 == t1) {poss = 0; }

	if (h == t2 && s == 0 && m == 0) {   poss = 0; }

	if (m / 5 == t2 && m % 5 == 0 && s == 0) {  poss = 0; }

	if (s / 5 == t2 && s % 5 == 0) {   poss = 0; }

	if (poss) { return cout << "YES" << endl, 0; }

	cout << "NO" << endl;


	return 0;
}