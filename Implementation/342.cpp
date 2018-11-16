#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n, k, ans = 0;
	cin >> n >> k;
	vector <int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	n = v[k - 1];
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i] >= n && v[i] != 0) {
			ans += 1;
		}
	}
	cout << ans;
}