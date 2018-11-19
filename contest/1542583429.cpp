#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;

const double esp = 0.0000001;
double a[3];
double t1, t2;

bool check(double x, double y, double a, double b) {
	if (x < a + esp && a - esp < y && x < b + esp && b - esp < y) {
		return true;
	} else
		return false;
	return false;
}
int main() {
	cin >> a[0] >> a[1] >> a[2] >> t1 >> t2;
	a[0] = (a[0] * 3600 + a[1] * 60 + a[2]) / (12.0 * 3600);;
	if (a[0] > 1)
		a[0] -= 1;
	a[1] = (a[1] * 60 + a[2]) / (3600.0);
	if (a[1] > 1)
		a[1] -= 1;
	a[2] /= 60.0;
	if (a[2] > 1)
		a[2] -= 1;
	t1 /= 12.0;
	t2 /= 12.0;
	if (t1 + esp > 1)
		t1 -= 1;
	if (t2 + esp > 1)
		t2 -= 1;
	sort(a, a + 3);
/*	cout << a[0] << endl;
	cout << a[1] << endl;
	cout << a[2] << endl;
	cout << t1 << endl;
	cout << t2 << endl;*/
	if (check(a[0], a[1], t1, t2)) {
		cout << "YES" << endl;
	} else if (check(a[1], a[2], t1, t2)) {
		cout << "YES" << endl;
	} else {
		if (t1 - esp < a[0])
			t1 += 1;
		if (t2 - esp < a[0])
			t2 += 1;
		a[0] += 1;	
		if (check(a[2], a[0], t1, t2)) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
	return 0;
}
