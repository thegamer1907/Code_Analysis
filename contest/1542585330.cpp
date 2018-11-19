#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <string>
#include <time.h>
#include <queue>
#define last(x, y) (x)[(x).size() - y]
#define endl '\n'
#define flush fflush(stdout), cout.flush()
#define fast ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define debug cout << "ok" << endl
#define in(X) ((X) - '0')
typedef long long ll;
typedef long double ldb;
const int md = 1e9 + 7;
const ll hs = 199;
const ldb eps = 1e-7, pi = acos(-1);
using namespace std;

ldb a[3];
int h, m, s, t1, t2;

int main() {
	fast;
	cin >> h >> m >> s >> t1 >> t2;
	t1 = t1 * 30 % 360, t2 = t2 * 30 % 360;
	a[0] = s * 6;
	a[1] = m * 6 + a[0] / 60.0;
	a[2] = h * 30 + a[1] / 12.0;
	for (int i = 0; i < 3; i++) while (a[i] >= 360.0) a[i] -= 360.0;
//	cout << t1 << " " << t2 << " " << a[0] << " " << a[1] << " " << a[2] << endl;
	sort(a, a + 3);
//	cout << t1 << " " << t2 << " " << a[0] << " " << a[1] << " " << a[2] << endl;
	if (t1 > t2) swap(t1, t2);
	if ((a[0] < t1 || a[0] > t2) && (a[1] < t1 || a[1] > t2) && (a[2] < t1 || a[2] > t2)) return cout << "YES" << endl, 0;
	if (a[0] > t1 && a[0] < t2 && a[1] > t1 && a[1] < t2 && a[2] > t1 && a[2] < t2) return cout << "YES" << endl, 0;
	cout << "NO" << endl;
}