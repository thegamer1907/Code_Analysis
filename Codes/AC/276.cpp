/* |-_-| */
#include <bits/stdc++.h>
using namespace std;

const int size = 1e6 + 1;

int a[size];

int main() {
	if(fopen("input.txt", "r")) {
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	}

	int n;
	cin >> n;
	memset(a, 0, sizeof(a));

	int st = 1, label = 1, count;
	for(int i = 0;i < n;i++) {
		cin >> count;
		for(int c = 0;c < count && st < size;c++) {
			a[st++] = label;
		}
		label++;
	}

	int q, worm;
	cin >> q;
	for(int i = 0;i < q;i++) {
		cin >> worm;
		cout << a[worm] << "\n";
	}

	return 0;
}