
#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
#include<map>
#include<queue>
#include<stack>
#include<cmath>
#include<vector>
#include<queue>
#include<deque>
#include <iomanip>
#include<bitset>
#include<functional>
#include<set>
using namespace std;
typedef long long ll;
const int MAXN = 1e3 + 10;
int h, m, s, t1, t2;
double cntl(double a, double b) {
	if (b < a)return a - b;
	else return 60 - (b - a);
}
double cntr(double a, double b) {
	if (a < b)return b - a;
	else return 60 - (a - b);
}
int main() {
	while (cin >> h >> m >> s >> t1 >> t2) {
		double ts = s / 60.0 * 12;
		double tm = (m + s / 60.0) / 60 * 12;
		double th = h%12 + m / 60.0 + s / 3600.0;
		double t11 = t1%12;
		double t22 = t2%12;
		double ml, mr;
		ml = cntl(t11, ts);
		ml = min(cntl(t11, tm), ml);
		ml = min(cntl(t11, th), ml);
		mr = cntr(t11, ts);
		mr = min(cntr(t11, tm), mr);
		mr = min(cntr(t11, th), mr);
		double tl, tr;
		tl = cntl(t11, t22);
		tr = cntr(t11, t22);
		if (ml < tl&&mr < tr) {
			cout << "NO" << endl;
		}
		else {
			cout << "YES" << endl;
		}
	}
	return 0;
}