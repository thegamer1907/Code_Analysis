#include <iostream>
#include <string>
using namespace std;

int n, check1, check2;
string pass, str;

int main() {
	cin >> pass >> n;
	for (int i = 0; i < n; i++) {
		cin >> str;
		if (str == pass) {
			cout << "YES" << endl;
			//system("pause");
			return 0;
		}

		if (str[0] == pass[1] && str[1] == pass[0]) {
			cout << "YES" << endl;
			//system("pause");
			return 0;
		}

		if (str[0] == pass[1])
			check1++;
		if (str[1] == pass[0])
			check2++;

		if (check1 && check2) {
			cout << "YES" << endl;
			//system("pause");
			return 0;
		}
	}

	cout << "NO" << endl;

	//system("pause");
	return 0;
}
