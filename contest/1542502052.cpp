#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <array>
#include <ctime>
#include <set>
#include <queue>

using namespace std;

int main() {
	string s;
	cin >> s;
	int t;
	cin >> t;
	vector<string> a(t);
	for (int i = 0; i < t; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < t; i++) {
		for (int j = 0; j < t; j++) {
			string check = a[i] + a[j];
			if (check.find(s) != string::npos) {
				cout << "YES";
				return 0;
			}
			
		}
	}
	cout << "NO";

	return 0;
}