#include <bits/stdc++.h>

//#define mp make_pair

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef unsigned long long ull;

const int N = 1234;
const ll INF = 1e18;
const ll mod = 1e9 + 7;
const double EPS = 1e-9;

int n, len;
double p[N];	

bool can(double m) {
	double ant = 0;

	for (int i = 0; i < n; ++i) {
		double fn;
		if (i == 0) fn = abs(p[i]);
		else fn = abs(p[i] - ant) / 2.0;
		if (m - fn < EPS) return 0;
		ant = p[i];
	}

	double fd = abs(p[n - 1] - len);

	return m - fd > EPS;
}

int main() {
	
	scanf("%d %d", &n, &len);

	for (int i = 0; i < n; ++i) {
		scanf("%lf", &p[i]);
	}

	sort(p, p + n);

	double l = 0, h = 1e18;

	for (int i = 0; i < 500; ++i) {
		double m = (l + h) / 2.0;

		if (can(m)) {
			h = m;
		} else {
			l = m;
		}
	}

	if (can(l)) printf("%.15lf\n", l);
	else printf("%.15lf\n", h);

	return 0;
}