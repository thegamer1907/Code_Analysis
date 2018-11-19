#include <iostream>
#include <string>
#include <set>
using namespace std;
int main() {
	char f, s, a, b;
	cin >> f >> s;
	int n;
	cin >> n;
	set<pair<char, char>>cc;
	while (n--) {
		cin >> a >> b;
		if (a == f && b == s || a == s && b == f)return cout << "YES", 0;
		cc.insert(pair<char, char>(a, b));
	}
	for (auto i : cc) {
		if (i.second == f) {
			for (auto j : cc)
				if (j.first == s) return cout << "YES", 0;
		}
	}
	cout << "NO";
}