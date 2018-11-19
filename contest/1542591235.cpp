#include <iostream>
#include <string>
// #include <vector>
using namespace std;

int main() {
	string password;
	cin >> password;
	// vector<string> arr;
	int n;
	cin >> n;
	bool first = false;
	bool second = false;
	// arr.reserve(n);
	for (int i=0;i < n; i++) {
		string str;
		cin >> str;
		// arr.push_back(str);
		if (str == password) {
			cout << "YES" << endl;
			return 0;
		}
		if (password[0] == str[1]) {
			first = true;
		}
		if (password[1] == str[0]) {
			second = true;
		}
	}
	if (first && second) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
}