#include <iostream>
using namespace std;

int main() {
	int last = 1;
	int a[1000001];
	int n;
	cin >> n;
	for(int i = 0; i < n; i++) {
		int sz;
		cin >> sz;
		for(int j = last; last < j + sz; last++) {
			a[last] = i + 1;
		}
	}
	int q;
	cin >> q;
	while(q--) {
		int b;
		cin >> b;
		cout << a[b] << '\n';
	}
	return 0;
}