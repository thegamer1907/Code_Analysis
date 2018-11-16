#include <bits/stdc++.h>

using namespace std;

int main() {
	string str;
	cin >> str;
	if (str.find("AB") != -1 && str.find("BA", str.find("AB") + 2) != -1 || str.find("BA") != -1 && str.find("AB", str.find("BA") + 2) != -1) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
}