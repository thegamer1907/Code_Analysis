#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int rx = 0, ry = 0, rz = 0;
	for(int i = 0; i < n; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		rx += a;
		ry += b;
		rz += c;
	}
	if(rx || ry || rz)
		cout << "NO\n";
	else
		cout << "YES\n";
	return 0;
}