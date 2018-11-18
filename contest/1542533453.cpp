#include <bits/stdc++.h>
using namespace std;

int h, m, s, t1, t2;

const double EPS = 1e-9; //poner epsilon q sea necesario

int CompareDouble(double a, double b) {
	if(a < b - EPS) //a menor q b
		return -1;

	if(a > b + EPS) //a mayor q b
		return 1;

	return 0; //a igual a b
}

int main() {
	scanf("%d%d%d%d%d", &h, &m, &s, &t1, &t2);

	t1 *= 300;
	t2 *= 300;
	h *= 300;
	m *= 60;
	s *= 60;

	t1 %= 3600;
	t2 %= 3600;
	h %= 3600;
	m %= 3600;
	s %= 3600;

	if(t1 > t2)
		swap(t1, t2);

	int ph = h + (m > 0 || s > 0);
	int pm = m + (s > 0);
	int ps = s;

	int a[3] = { ph, pm, ps };

	int x = 0, y = 0;
	for(int i = 0; i < 3; i++) {
		if(a[i] >= t1 && a[i] <= t2)
			x++;

		else y++;
	}

	if(x == 0 || y == 0)
		printf("YES\n");

	else printf("NO\n");

	return 0;
}