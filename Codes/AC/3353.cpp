#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> a(n+1, 0);
	for (int i = 1; i <= n; i += 1) cin >> a[i];

    int ans = 0;
	int t   = 0;
	for (int i = 1; i <= n; i += 1) {
		int tt = 0;
		int tmp = a[i] - (i - 1);
		if (tmp <= 0) tt = i;
		else tt = i + ((tmp + n-1)/n) * n;
		if (t == 0 || tt < t) {
			ans = i;
			t = tt;
		}
	}
	cout << ans << endl;
}
