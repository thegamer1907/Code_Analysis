#include <bits/stdc++.h>

using namespace std;

map <string, int> u;
string a[100001];

bool check (string x, string y) {
	for (int i = 0;i < x.size ();i ++) {
		if (x[i] == '1' && y[i] == '1') return 0;
	}
	return 1;
}

int main () {
	int n, k;
	cin >> n >> k;
	int m = 0;
	for (int i = 1;i <= n;i ++) {
		string s = "";
		for (int j = 0;j < k;j ++) {
			char x;
			cin >> x;
			s += x;
		}
		if (!u[s]) {
			m ++;
			a[m] = s;
			u[s] = 1;
		} 
	}
	for (int i = 1;i <= m;i ++) {
		for (int j = 1;j <= m;j ++) {
			if (check (a[i], a[j])) {
				cout << "YES";
				return 0;
			}
		}
	}         
	cout << "NO";
	return 0;
}