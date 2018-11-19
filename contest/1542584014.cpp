#include <cstdio>
#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <cassert>
#include <sstream>
#include <deque>
#include <queue>
#include <stack>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <complex>
#include <list>
#include <climits>
#include <cctype>
using namespace std;
#define LTOR(i,a,n) for (int i=a;i<n;i++)
#define RTOL(i,a,n) for (int i=n-1;i>=a;i--)
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
#define SZ(x) ((int)(x).size())
#define Spause system("pause");
typedef vector<int> VI;
typedef long long ll;
typedef pair<int, int> PII;
const ll mod = 1000000007;
string itoa(int a) { ostringstream s; s << a; return s.str(); };
int atoi(string x) { int k(0); for (int i(0); i < x.size(); i++) k = k * 10 + (x[i] - '0'); return k; }
ll powmod(ll a, ll b) { ll res = 1; a %= mod; assert(b >= 0); for (; b; b >>= 1) { if (b & 1)res = res*a%mod; a = a*a%mod; }return res; }
// head





bool solve()
{
	string s;
	cin >> s;
	int n; cin >> n;
	bool l(0), r(0);
	while (n--) {
		string x; cin >> x;
		if (s == x) { cout << "YES"; return 1; }
		if (s[0] == x[1])
			l = 1;
		if (s[1] == x[0])
			r = 1;

		reverse(all(x));
		if (s == x) { cout << "YES"; return 1; }
	}
	if (l&r) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 1;
}
int main()
{
	
	solve();
	//Spause;
	//while (solve());
	
	return 0;
}