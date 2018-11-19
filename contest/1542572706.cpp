#include<iostream>
using namespace std;
int main() {
	int h, m, s, t1, t2;
	cin >> h >> m >> s >> t1 >> t2;
	bool inner = false;
	bool outter = false;

	if (t1 > t2) swap(t1, t2);
	if (m == 0 && s == 0) {
		if (h > t1 &&  h < t2)
			inner = true;
		else if (h < t1 || h > t2)
			outter = true;
	}
	else {
		if (h > t1 &&  h < t2)
			inner = true;
		else if (h < t1 || h > t2)
			outter = true;
		else if (h == t1)
			inner = true;
		else if (h == t2)
			outter = true;
	}

	if (m == 0) m = 60;
	bool ac = m % 5; m /= 5;

	if (ac == 0 && s == 0) {
		if (m > t1 &&  m < t2)
			inner = true;
		else if (m < t1 || m > t2)
			outter = true;
	}
	else {
		if (m > t1 &&  m < t2)
			inner = true;
		else if (m < t1 || m > t2)
			outter = true;
		else if (m == t1)
			inner = true;
		else if (m == t2)
			outter = true;
	}


	if (s == 0) s = 60;
	ac = s % 5; s /= 5;

	if (ac == 0) {
		if (s > t1 &&  s < t2)
			inner = true;
		else if (s < t1 || s > t2)
			outter = true;
	}
	else {
		if (s > t1 &&  s < t2)
			inner = true;
		else if (s < t1 || s > t2)
			outter = true;
		else if (s == t1)
			inner = true;
		else if (s == t2)
			outter = true;
	}

	if (inner == true && outter == true)
		cout << "NO" << endl;
	else
		cout << "YES" << endl;
	return 0;

}