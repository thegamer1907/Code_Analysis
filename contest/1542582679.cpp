#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned int ui;
typedef pair < ll, ll > pll;
typedef pair < int, ll > pil;
typedef pair < ll, int > pli;
typedef pair < int, int > pii;
typedef unsigned long long ull;

#define F first
#define S second
#define en end()
#define bg begin()
#define rev reverse
#define mp make_pair
#define pb push_back
#define y1 y1234567890
#define um unordered_map
#define all(x) x.bg, x.en
#define sqr(x) ((x) * (x))
#define sz(x) (int)x.size()

const ll inf = (ll)1e18;
const ll mod = (ll)1e9 + 7;
const double pi = acos(-1.0);
const double eps = (double)1e-9;

const int dx[] = {0, 0, 1, 0, -1};
const int dy[] = {0, 1, 0, -1, 0};

const int N = 100;

double a[N];
int h, m, s, t1, t2;

inline bool check(double l, double r, double x) {
	if (l <= x && x <= r)
		return 1;
	if (l <= x + 60.0 && x + 60.0 <= r)
		return 1;
	if (l <= x - 60.0 && x - 60.0 <= r)
		return 1;
	return 0;
}

inline bool ok(int i, int j) {
	double l = a[i];
	double r = a[j];
	if (l > r)
		r += 60.0;
	double x = t1;
	double y = t2;  
	//cout << l << " " << r << " " << x << " " << y << endl;
	if (check(l, r, x) && check(l, r, y)) {
	    //cout << i << " " << j << endl;
	    return 1;
	}
	return 0;
	//return (((l <= x && x <= r) || (l <= x + 60.0 && x + 60.0 <= r)) && ((l <= y && y <= r) || (l <= y + 60.0 && y + 60.0 <= r)));
}

int main() {
	//freopen(".in", "r", stdin);
	//freopen(".out", "w", stdout);

	//cin.tie(NULL);
	//cout.tie(NULL);
	//ios_base::sync_with_stdio(false);

	cout << setprecision(3) << fixed;

	cin >> h >> m >> s >> t1 >> t2;

	t1 *= 5;
	t2 *= 5;

	a[1] = s + 0.0/*, cout << a[1] << endl*/;
	a[2] = m + 1.0 * (a[1] / 60.0)/*, cout << a[2] << endl*/;
	a[3] = h * 5.0 + 4.0 * (a[2] / 60.0)/*, cout << a[3] << endl*/;

	if (a[3] > 60.0)
		a[3] -= 60.0;

	sort(a + 1, a + 4);
	
	/*for (int i = 1; i <= 3; i++)
	    cout << a[i] << " ";
    cout << t1 << " " << t2 << endl;*/

	if (ok(1, 2) || ok(2, 3) || ok(3, 1))
		cout << "YES";
	else
		cout << "NO";

	return 0;
}
