#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e6 + 5;
string s;
int n;
int main() {
	//freopen("input.txt", "r", stdin);
	cin >> s;
	char a = s[0], b = s[1];
	cin >> n;
	bool ch1 = 0, ch2 = 0;
	for (int i = 0; i < n; i++) {
		cin >> s;
		char x = s[0], y = s[1];
		if (x == a && y == b) {
			cout << "YES";
			return 0;
		}
		if (x == b)
			ch1 = 1;
		if (y == a)
			ch2 = 1;
	}
	if (ch1 && ch2)
		cout << "YES";
	else
		cout << "NO";
}
