#include <bits/stdc++.h>
using namespace std;

string rec[128];
int n; 

int main() {
	cin >> rec[0];
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> rec[i];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (rec[i][1] == rec[0][0] && rec[j][0] == rec[0][1]) {
				cout << "YES";
				return 0;
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		if (rec[i] == rec[0]) {
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
}