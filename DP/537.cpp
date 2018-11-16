#include <iostream>
//#include <set>
//#include <map>
#include <string>
#include <vector>
//#include <algorithm>
using namespace std;


int main() {
	int m;
	string str;
	cin >> str >> m;
	int size = str.size();
	vector<int> e(size + 2, 0);
	for (int i = size - 1; i > 0; --i) {
		e[i + 1] = e[i + 2];
		if (str[i] == str[i - 1]) e[i + 1]++;
	}


	int l, r;
	vector<int> ans(m);

	for (int i = 0; i < m; ++i) {
		cin >> l >> r;
		ans[i] = e[l+1] - e[r+1];
	}

	for (int x : ans) cout << x << '\n';

	return 0;
}