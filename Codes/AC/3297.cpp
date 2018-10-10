/* In the name of Allah */
#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 100 * 1000 + 10;
int a[MAX_N];

int main() {
	ios_base :: sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		a[i] -= i + 1;
		if (a[i] < 0)
			return cout << i + 1 << endl, 0;
	}

	int mn = 0;
	for (int i = 1; i < n; i++)
		if (a[i] / n < a[mn] / n)
			mn = i;
	cout << mn + 1 << endl;

	return 0;
}
