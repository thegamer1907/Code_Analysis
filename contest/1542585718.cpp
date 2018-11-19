#include <bits/stdc++.h>

using namespace std;

char a[100001];
char b[100001];

int main () {
	char x, y;
	cin >> x >> y;
	int n;
	cin >> n;
	for (int i = 1;i <= n;i ++) {
		cin >> a[i] >> b[i];
		if (a[i] == x && b[i] == y) {
			cout << "YES";
			return 0;
		}
	}
	for (int i = 1;i <= n;i ++) {
		for (int j = 1;j <= n;j ++) {
			if (b[i] == x && a[j] == y) {
				cout << "YES";
				return 0;
			}	
		}
	}
	cout << "NO";
	return 0;
}