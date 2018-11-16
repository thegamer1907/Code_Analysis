#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,tune=native")
#pragma GCC optimize("unroll-loops")  
#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <deque>
#include <queue>
#include <set>
#include <cmath>
#include <string>
#include <algorithm>
#include <iomanip>
#include <stack>
#include <assert.h>
#include <random>
#include <sstream>
typedef long long ll;
typedef long double ld;
const int N = int(1e5) + 111;
const int INF = int(1e9) + 111;
const ll LINF = ll(1e18) + 111;
const ld EPS = 1e-7;
const ld PI = asin(1) * 2;
#define pb push_back
#define all(v) v.begin(), v.end()
#define sz(v) v.size()
#define x first
#define y second
using namespace std;
template<typename T> inline istream &operator >> (istream &in, vector<T> &v) { for (auto &i : v) { in >> i; } return in; }
template<typename T> inline ostream &operator<< (ostream &out, const vector<T> &v) { for (auto &it : v) { out << it << " "; } return out; }
template<typename T> inline ostream &operator<< (ostream &out, const set<T> &v) { for (auto &it : v) { out << it << " "; } return out; }
template<typename T, typename F> inline ostream &operator<< (ostream &out, const map<T, F> &v) { for (auto &it : v) { out << "(" << it.first << ":" << it.second << ") "; } return out; }
template<class T> T gcd(T a, T b) { return b ? gcd(b, a % b) : a; }
template<class T> T lcm(T a, T b) { return a / gcd(a, b) * b; }
mt19937 rnd(time(0));

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	//ifstream cin("input.txt");
	//ofstream cout("output.txt");
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 1; i <= n; i++) {
		int k;
		cin >> k;
		a[k - 1] = i;
	}
	cout << a;
}