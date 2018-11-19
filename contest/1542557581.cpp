#include <bits/stdc++.h>
using namespace std;

#define success puts("YES");exit(0);

int n, k, m;
struct pii {
	char a[4];
	char s;
	pii() {
		a[0] = 0;
		a[1] = 0;
		a[2] = 0;
		a[3] = 0;
		s = 0;
	}

	pii(char a0, char a1, char a2, char a3) {
		a[0] = a0;
		a[1] = a1;
		a[2] = a2;
		a[3] = a3;
		s = a[0] + a[1] + a[2] + a[3];
	}

	friend bool operator <(const pii &a, const pii &b) {
		if (a.s != b.s)
			return a.s < b.s;
		if (a.a[0] != b.a[0])
			return a.a[0] > b.a[0];
		if (a.a[1] != b.a[1])
			return a.a[1] > b.a[1];
		if (a.a[2] != b.a[2])
			return a.a[2] > b.a[2];
		if (a.a[3] != b.a[3])
			return a.a[3] > b.a[3];
		return false;
	}
} ps[200000];

map<pii, int> mapa;
map<pii, int> mapb;

int sumb(char a) {
	if (a == 0) {
		return mapb[pii(1, 0, 0, 0)] + mapb[pii(1, 0, 0, 1)]
				+ mapb[pii(1, 0, 1, 0)] + mapb[pii(1, 0, 1, 1)]
				+ mapb[pii(1, 1, 0, 0)] + mapb[pii(1, 1, 0, 1)]
				+ mapb[pii(1, 1, 1, 0)] + mapb[pii(1, 1, 1, 1)];
	}
	if (a == 1) {
		return mapb[pii(0, 1, 0, 0)] + mapb[pii(0, 1, 0, 1)]
				+ mapb[pii(0, 1, 1, 0)] + mapb[pii(0, 1, 1, 1)]
				+ mapb[pii(1, 1, 0, 0)] + mapb[pii(1, 1, 0, 1)]
				+ mapb[pii(1, 1, 1, 0)] + mapb[pii(1, 1, 1, 1)];
	}
	if (a == 2) {
		return mapb[pii(0, 0, 1, 0)] + mapb[pii(0, 0, 1, 1)]
				+ mapb[pii(0, 1, 1, 0)] + mapb[pii(0, 1, 1, 1)]
				+ mapb[pii(1, 0, 1, 0)] + mapb[pii(1, 0, 1, 1)]
				+ mapb[pii(1, 1, 1, 0)] + mapb[pii(1, 1, 1, 1)];
	}
	if (a == 3) {
		return mapb[pii(0, 0, 0, 1)] + mapb[pii(0, 0, 1, 1)]
				+ mapb[pii(0, 1, 0, 1)] + mapb[pii(0, 1, 1, 1)]
				+ mapb[pii(1, 0, 0, 1)] + mapb[pii(1, 0, 1, 1)]
				+ mapb[pii(1, 1, 0, 1)] + mapb[pii(1, 1, 1, 1)];
	}
}

int main() {
	scanf("%d%d", &n, &k);

	int tmp;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			scanf("%d", &tmp);
			ps[i].a[j] = tmp;
			ps[i].s += ps[i].a[j];
		}
	}

	for (int i = 0; i < n; i++) {
		mapa[ps[i]]++;
	}

	if (mapa[pii(0, 0, 0, 0)]) {
		success
		;
	}

	int num1 = 0;

	if (mapa[pii(1, 0, 0, 0)]) {
		num1++;
	}
	if (mapa[pii(0, 1, 0, 0)]) {
		num1++;
	}
	if (mapa[pii(0, 0, 1, 0)]) {
		num1++;
	}
	if (mapa[pii(0, 0, 0, 1)]) {
		num1++;
	}

	if (num1 >= 2) {
		success
		;
	}

	if ((mapa[pii(1, 1, 0, 0)] || mapa[pii(1, 0, 0, 0)] || mapa[pii(0, 1, 0, 0)])
			&& (mapa[pii(0, 0, 1, 1)] || mapa[pii(0, 0, 0, 1)]
					|| mapa[pii(0, 0, 1, 0)])) {
		success
		;
	}
	if ((mapa[pii(1, 0, 1, 0)] || mapa[pii(1, 0, 0, 0)] || mapa[pii(0, 0, 1, 0)])
			&& (mapa[pii(0, 1, 0, 1)] || mapa[pii(0, 0, 0, 1)]
					|| mapa[pii(0, 1, 0, 0)])) {
		success
		;
	}
	if ((mapa[pii(1, 0, 0, 1)] || mapa[pii(1, 0, 0, 0)] || mapa[pii(0, 0, 0, 1)])
			&& (mapa[pii(0, 1, 1, 0)] || mapa[pii(0, 1, 0, 0)]
					|| mapa[pii(0, 0, 1, 0)])) {
		success
		;
	}

	if (mapa[pii(1, 1, 1, 0)] && mapa[pii(0, 0, 0, 1)]) {
		success
		;
	}
	if (mapa[pii(1, 1, 0, 1)] && mapa[pii(0, 0, 1, 0)]) {
		success
		;
	}
	if (mapa[pii(1, 0, 1, 1)] && mapa[pii(0, 1, 0, 0)]) {
		success
		;
	}
	if (mapa[pii(0, 1, 1, 1)] && mapa[pii(1, 0, 0, 0)]) {
		success
		;
	}
	puts("NO");
	return 0;
}
//