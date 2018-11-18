#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <string>
using namespace std;

const int maxN = 110;

int main() {
	std::ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	string pwd;
	int n;
	string word[maxN];
	cin >> pwd >> n;
	for (int i = 0; i < n; i++) {
		cin >> word[i];
	}
	bool flag = 0, flagLeft = 0, flagRight = 0;
	for (int i = 0; i < n; i++) {
		if (word[i] == pwd) {
			flag = 1;
		}
		if (word[i][1] == pwd[0]) {
			flagLeft = 1;
		}
		if (word[i][0] == pwd[1]) {
			flagRight = 1;
		}
	}
	if (flag == 1 || (flagLeft == 1 && flagRight == 1)) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
	return 0;
}