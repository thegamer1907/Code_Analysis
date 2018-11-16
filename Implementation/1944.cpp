#include <bits/stdc++.h>

using namespace std;

int main(){

	int n;
	cin >> n;
	int a[3];
	int b[3] = {};
	for (int i = 0; i < n; i++){
		cin >> a[0] >> a[1] >> a[2];
		b[0] += a[0];
		b[1] += a[1];
		b[2] += a[2];
	}

	if (b[0] == 0 and b[1] == 0 and b[2] == 0)
		cout << "YES";

	else
		cout << "NO";
	return 0;
}
