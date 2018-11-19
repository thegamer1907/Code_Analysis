#include <bits/stdc++.h>

using namespace std;
using ull = unsigned long long;
using ll = long long;
using ld = long double;
using D = double;
using ii = pair<int, int>;
using vi = vector<int>;
using vii = vector<ii>;

#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()
#define makeunique(x) sort(all(x)), (x).resize(unique(all(x)) - (x).begin())
#define rep(i, x)  for(int i = 0; i < (x); i++)
#define rrep(i, x) for(int i = (x - 1); i >= 0; i--)
#define sqrt(x) sqrt(abs(x))
#define y1 y1_1234413
#define j1 j1_235
#define y0 y0_235
#define j0 j0_256
#define fi first
#define se second
#define re return
#define prev PREV
#define next NEXT
#define sz(x) ((int)x.size())

template<typename T> T sqr(T a) { re a * a; }
template<typename T> T gcd(T a, T b) { re b ? gcd(b, a % b) : a; }
template<typename T> T sgn(T a) { re a > 0 ? 1 : (a < 0 ? -1 : 0); }
template<typename T> T abs(T a) { re a > 0 ? a : -a; }

const int inf = 2e9;
const ld pi = acos((ld)-1);

int main()
{
	string s;
	int n;
	cin >> s;
	cin >> n;
	string ans = "NO";
	vector <string> a(n);
	rep (i, n) 
	{
		cin >> a[i];
		if (a[i] == s) ans = "YES";
	}
	if (ans == "NO")
	{
		bool m1 = false, m2 = false;
		rep (i, n)
		{
			if (a[i][0] == s[1]) m1 = true;
			if (a[i][1] == s[0]) m2 = true;
		}
		if (m1 == true && m2 == true) ans = "YES";
	}
	cout << ans;
	re 0;
}