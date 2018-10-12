#include <iostream>
#include <string>
#include <vector>
using namespace std;
 
int main() {
	int n;
	cin >> n;
 
	vector<string> v(n);
	for (int i = 0; i < n; ++i) {
		cin >> v[i];
	}
 
	for (int i = n - 2; i >= 0; --i) {
		int ed = 0;
		int len = min(v[i].size(), v[i + 1].size());
 
		for (ed; v[i][ed] == v[i + 1][ed] && ed < len; ++ed) {}
 
		if  (ed < len) {
			if (v[i][ed] > v[i + 1][ed]) {
				v[i] = string(v[i].begin(), v[i].begin() + ed);
			}
		} else {
			if (v[i].size() > v[i + 1].size()) {
				v[i] = string(v[i].begin(), v[i].begin() + len);
 
			}
		}
	}
 
	for (string s : v) {
		cout << s << endl;
	}
}