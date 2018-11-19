#include<bits/stdc++.h>
using namespace std;

int main() {

	int n;
	string p;

	cin >> p >> n; string v[n];

	for(int i=0; i<n; i++) cin >> v[i];

	bool flag = false;

	for(int i=0; i<n && !flag; i++) {
		for (int j=0; j<n && !flag; j++) {
			string aux = v[i] + v[j];

			for (int k=0; k<3; k++) {
				if (p == aux.substr(k, 2)) flag = true;
			}
		}
	}

	cout << (flag ? "YES" : "NO") << endl;

	return 0;
}

// 1509241385045
