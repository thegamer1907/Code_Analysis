#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <string>

using namespace std;
string b[105];

int main()
{
	int n = 0, f=0, s=0;
	string a;
	cin >> a >> n;

	for (int i = 0; i < n; ++i) {
		cin >> b[i];
		if (b[i] == a) {
			cout << "YES";
		//	system("pause");
			return 0;
		}
	}
	for (int i = 0; i < n; ++i) {
		if (a.substr(0,1) == b[i].substr(1,1)) {
			f = 1;
			break;
		}
	}
	for (int i = 0; i < n; ++i) {
		if (a.substr(1,1) == b[i].substr(0,1)) {
			s = 1;
			break;
		}
	}
	if (f==1 && s==1) {
			cout << "YES";
		}
	else cout << "NO";

	//system("pause");
}


