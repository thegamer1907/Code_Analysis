#include <bits/stdc++.h>
using namespace std;

int h, m, s, x, y;
double r[3];

int main() {
	scanf("%d%d%d%d%d", &h, &m, &s, &x, &y);
	r[2] = s / 5.;
	r[1] = m + r[2] / 60.;
	r[0] = h + r[1] / 60.;
	x %= 12; y %= 12;
	r[1] /= 5;
	if (r[0] >= 12) r[0] -= 12;
	if (r[1] >= 12) r[1] -= 12;
	if (r[2] >= 12) r[2] -= 12;
//	cout << r[0] << " " << r[1] << " " << r[2] << endl;
	if (x > y) swap(x, y);
	for (int i = 0; i < 3; i++) {
		if (x < r[i] && r[i] < y) {
			int z = 0;
			for (int j = 0; j < 3; j++) {
				if (i != j && (x > r[j] || r[j] > y)) {
					z++;
				}
			}
			if (z) {
				cout << "NO";
				return 0;
			}
		}
	}
	cout << "YES";
}