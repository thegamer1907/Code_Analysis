#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int k = 0;
	for(int i=0; i<n; i++) {
		int a, b;
		cin >> a >> b;
		if (b-2>=a) k++;
	}
	cout << k;
	return 0;
}