#include <iostream>

using namespace std;

string s, s1;
bool x1, x2;
int n;

int main() {
	cin >> s >> n;
	for (int i = 0; i < n; ++i) {
		cin >> s1;
		if (s1[1] == s[0])
			x1 = true;
		if (s1[0] == s[1])
			x2 = true;
		if ((s1[0] == s[0] && s1[1] == s[1]) || (x1 && x2))
			return cout << "YES" << "\n", 0;
	}
	cout << "NO" << "\n";
	return 0;
}