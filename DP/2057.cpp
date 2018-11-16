#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <set>
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;
	vector<int> a(n);
	for (int i = 0; i < n; ++i)
		cin >> a[i];
	vector<int> ans(n);
	set<int> s;
	for (int i = n - 1; i >= 0; --i) {
		s.insert(a[i]);
		ans[i] = s.size();
	}
	for (int i = 0; i < m; ++i) {
		int l;
		cin >> l;
		cout << ans[l - 1] << '\n';
	}
	//system("pause");
	return 0;
}