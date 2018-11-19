#include<iostream>
using namespace std;
const int N = 100005;
int ac[17];
int main() {
	int n, k; cin >> n >> k;
	for (int i = 0; i < n; i++) {
		int wa = 0;
		for (int j = 0; j < k; j++) {
			wa *= 2;
			int tmp;
			cin >> tmp; wa += tmp;
		}
		ac[wa]++;
	}
	if (ac[0] > 0) {
		cout << "YES" << endl;
		return 0;
	}

	for (int i = 1; i < 16; i++) {
		for (int j = i+1; j < 16; j++) {
			if (ac[i] > 0 && ac[j] > 0) {
				if ((i & j) == 0) {
					cout << "YES" << endl;
					return 0;
				}
			}
		}
	}
	cout << "NO" << endl;
	return 0;
}