#include <bits/stdc++.h>
using namespace std;

int n, a, b, f[10000];

int main()
{
	cin >> n >> a >> b;
	for (int i = 1; i <= n; i++) f[i] = i;
	int o = 1;
	while (true) {
		if (n == 2) break;
		for (int i = 1; i <= n; i += 2) {
			if (f[i] == a && f[i+1] == b) {
				cout << o;
				return 0;
			}
			if (f[i] == b && f[i+1] == a) {
				cout << o;
				return 0;
			}
		}
		int k = 1;
		for (int i = 1; i <= n; i += 2) {
			if (f[i] == a || f[i] == b) {
				f[k++] = f[i];
			} else {
				f[k++] = f[i+1];
			}
		}
		n /= 2;
		o++;
	}
	cout << "Final!";
    return 0;
}
