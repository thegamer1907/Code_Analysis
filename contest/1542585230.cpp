#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	string password;
	cin >> password;

	int n;
	cin >> n;

	vector<string> arr(n);
	for (int i = 0; i < n; ++i) cin >> arr[i];

	bool answer = false;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if (arr[i][1] == password[0] && arr[j][0] == password[1]) {
				answer = true;
				break;
			}
		}
		if (answer) break;
	}
	for (int i = 0; i < n; ++i) {
		if (arr[i] == password)
			answer = true;
	}

	if (answer) cout << "YES";
	else
		cout << "NO";
}