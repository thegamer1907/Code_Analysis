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

int f (const vi &a, int x)
{
	rep (i, 2)
	{
		if (x > a[i] && x <= a[i + 1]) re i;
		//cout << a[i] << ' ' << i << endl;
	}
	re 2;
}

int main()
{
	int h, m, s, t1, t2;
	cin >> h >> m >> s >> t1 >> t2;
	h *= 5;
	h %= 60;
	t1 %= 60;
	t2 %= 60;
	t1 *= 5;
	t2 *= 5;
	vi a;
	a.pb(h);
	a.pb(m);
	a.pb(s);
	sort(all(a));
	if (f (a, t1) == f (a, t2)) cout << "YES"; else cout << "NO";
	re 0;
}