#define _USE_MATH_DEFINES

#include <iostream>
#include <iterator>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <cmath>
#include <queue>
#include <unordered_set>
#include <climits>
#include <ctime>

using namespace std;
using ll = long long;
const ll INF = 0x3f3f3f3f3f3f3f3fLL;

const int M = 3600 * 12;

void upto(int & x, int b) {
	while (x > b)
		x -= M;
	while (x < b)
		x += M;
}

void solve() {
	int h, m, s, t1, t2;
	cin >> h >> m >> s >> t1 >> t2;
	int s1 = s * M / 60;
	int s2 = m * M / 60 + s * M / 60 / 60;
	int s3 = h * M / 12 + m * M / 12 / 60 + s * M / 12 / 60 / 60;
	t1 = t1 * M / 12;
	t2 = t2 * M / 12;
	if (t1 > t2)
		swap(t1, t2);
	upto(s1, t1);
	upto(s2, t1);
	upto(s3, t1);
	if (s1 > t2 && s2 > t2 && s3 > t2) {
		cout << "YES";
		return;
	}
	t1 += M;
	swap(t1, t2);
	upto(s1, t1);
	upto(s2, t1);
	upto(s3, t1);
	if (s1 > t2 && s2 > t2 && s3 > t2) {
		cout << "YES";
		return;
	}
	cout << "NO";
}

int main() {
#ifdef LOCAL
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	solve();

#ifdef LOCAL
	cerr << double(clock()) / CLOCKS_PER_SEC << " sec" << endl;
#endif
	return 0;
}