#include <iostream>

using namespace std;

int a[50000];


int main() {
	int n, t;
	cin >> n >> t;
	for (int i=1; i<n; i++) {
		cin >> a[i];
	}
	int pos = 1;
	while(pos < t) {
		pos += a[pos];	
	}
	
	if (pos == t)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	
	return 0;
}

