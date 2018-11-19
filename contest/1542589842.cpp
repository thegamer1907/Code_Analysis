#include <bits/stdc++.h>

using namespace std;

int main(void) {
	char pwd[3];

	cin >> pwd;

	int N;
	 
	cin >> N;

	set<char> begin, end;

	char tmp[3];
	while(N--) {
		cin >> tmp;
		if (strcmp(tmp,pwd) == 0) {
			cout << "YES" << endl;
			return 0;
		}
		begin.insert(tmp[0]);
		end.insert(tmp[1]);
	}

	if (begin.find(pwd[1]) != begin.end() && end.find(pwd[0]) != end.end()) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
	return 0;

}