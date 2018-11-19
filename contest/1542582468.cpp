#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

double h,m,s,t1,t2,a[200];

int main () {
	cin >> h >> m >> s >> t1 >> t2;

	double seconds = h * 3600 + m * 60 + s; 
	double minutes = m * 60 + s;

	double hh = seconds / 3600;
	double mm = minutes/ 60 / 5;

	a[0] = hh;
	a[1] = mm;
	a[2] = s / 5;
	a[3] = t1;
	a[4] = t2;

	sort(a,a+5);

	for (int i = 5; i < 10; i++) {
		a[i] = a[i-5];
	}

	for (int i = 0; i < 9; i++) {
		//cout << a[i] << ' ' << t1 << endl;
		if ((a[i] == t1 && a[i+1] == t2) || (a[i] == t2 && a[i+1] == t1)) {
			cout << "YES"; 
			return 0;
		}
	}

	cout << "NO";
}