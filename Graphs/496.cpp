#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <numeric>
#include <cctype>
using namespace std;

int main() {
	int n, t;
	cin >> n >> t;
	string s;
	cin >> s;
	for (int i = 0; i < t; ++i) {
		for (int j = 0; j < n; ++j) {
			if (s[j] == 'B' && s[j + 1] == 'G') {
				s[j] = 'G';
				s[j + 1] = 'V';
			}
		}
		for (auto& el : s) {
			if (el == 'V') el = 'B';
		}
	}
	cout << s << endl;
}