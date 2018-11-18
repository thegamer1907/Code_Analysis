#include <bits/stdc++.h>
using namespace std;
int main() {
	double hh, mm, ss, t1, t2;
	cin >> hh >> mm >> ss >> t1 >> t2;
	double a[3];
	a[0] = hh*30 + mm/2 + ss/120; a[1] = mm*6 + ss/10; a[2] = ss*6;
	if(a[0] > 360) {
		a[0] -= 360;
	}
	t1 *= 30; t2 *= 30;
	sort(a, a+3);
//	cout << a[0] << endl << a[1] << endl << a[2] << endl << t1 << " " << t2 << endl;
	if(t1 >= a[0] && t2 >= a[0]) {
		if(t1 <= a[1] && t2 <= a[1]) {
			cout << "YES";
			return 0;
		}
	}
	if(t1 >= a[1] && t2 >= a[1]) {
		if(t1 <= a[2] && t2 <= a[2]) {
			cout << "YES";
			return 0;
		}
	}
	if(t1 >= a[2] && t2 >= a[2]) {
		a[0] += 360;
		if(t1 <= a[0] && t2 <= a[0]) {
			cout << "YES";
			return 0;
		}
	}
	if(t1 >= a[2] && t2 <= a[0]) {
		cout << "YES";
		return 0;
	}
	if(t2 >= a[2] && t1 <= a[0]) {
		cout << "YES";
		return 0;
	}
	if(t1 <= a[0] && t2 <= a[0]) {
		cout << "YES";
		return 0;
	}
	cout << "NO";
}