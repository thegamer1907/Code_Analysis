#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#define N 312345
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef double dd;


int main() {
	int k; cin >> k;
	int z = 1;
	for (int i = 1; i <= k; i++, z++) {
		int t = 11;
		while (t > 10) {
			t = 0;
			int tmp = z;
			while (tmp != 0) {
				t += tmp % 10;
				tmp /= 10;
			}
			if (t > 10) z++;
		}
	}
	z--;
	int tmp = z, t = 0;
	while (tmp != 0) {
		t += tmp % 10;
		tmp /= 10;
	}
	z *= 10;
	z += (10 - t);
	cout << z << endl;
	return 0;
}