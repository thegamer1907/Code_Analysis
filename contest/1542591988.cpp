#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <set>
#include <map>
#include <stdio.h>
#include <string>

using namespace std;

int n;
bool ff, fs, sf, ss;
string pass, temp;

int main() {
	cin >> pass;
	cin >> n;
	while (n--) {
		cin >> temp;
		if (temp == pass) {
			cout << "YES";
			return 0;
		}
		if (temp[0] == pass[0]) {
			ff = true;
		}
		if (temp[0] == pass[1]) {
			sf = true;
		}
		if (temp[1] == pass[0]) {
			fs = true;
		}
		if (temp[1] == pass[1])
			ss = true;
	}
	if (fs && sf) {
		cout << "YES";
		return 0;
	}
	cout << "NO";
	return 0;
}