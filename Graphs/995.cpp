#include <iostream>
using namespace std;

int a[1000000];

int main() {
	int n , m;
	cin >> n >> m;
	for(int i = 1; i < n; i++) {
		cin >> a[i];
	}
	int t = 1;
	if(m == 1) {
		cout << "YES";
		return 0;
	}
	while(t < n) {
		t += a[t];
		if(t == m) {
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
	return 0;
}
