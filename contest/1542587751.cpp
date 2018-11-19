#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <vector>
#include <iomanip>
#define mp make_pair
#define pb push_back

using namespace std;
string b[119];
int main() {
	int h, m, s;
	cin >> h >> m >> s;
	int H = 0, M = 0, S = 0;
	int Hangle = 0, Mangle = 0, Sangle = 0;
	while (h != H || m != M || s != S) {
		S++;
		Sangle += 360 / 60;

		if (S == 60) {
			S = 0;
			M++;
			Mangle += 360 / (60);
		}
		if (M == 60) {
			M = 0;
			H++;
			Hangle += 360 / 12; 
		}


		Mangle %= 360;
		Hangle %= 360;
		Sangle %= 360;

	}
	int t1, t2;
	cin >> t1 >> t2;
	t1 %= 12;
	t2 %= 12;
	t1 *= 30;
	t2 *= 30;
	for (int i = t1; i < 720; i++) {
		
		if (i % 360 == t2) {
			cout << "YES";
			return 0;
		}
		if(i % 360 == Mangle || i % 360 == Hangle || i % 360 == Sangle) {
			break;
		}
	}
	for (int i = t2; i < 720; i++) {
		
		if (i % 360 == t1) {
			cout << "YES";
			return 0;
		}
		if(i % 360 == Mangle || i % 360 == Hangle || i % 360 == Sangle) {
			break;
		}
	}
	cout << "NO";
	//cout << Hangle << ' ' << Mangle << ' ' << Sangle << endl;
	return 0;
}