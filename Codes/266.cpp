#include <iostream>
using namespace std;

int a[1000001];
int main() {
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int i, j, k=1, n, q, tmp;
	cin >> n;
	for(i = 1; i <= n; i++) {
		cin >> tmp;
		for(j = k; j < k+tmp; j++)
			a[j] = i;
		k += tmp;
	}
	cin >> q;
	while(q--) {
		cin >> tmp;
		cout << a[tmp] << endl;
	}
}