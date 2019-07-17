#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
	int n, m, k , tmp_del = 0, cnt = 0 , ind = 0;
	cin >> n >> m >> k;
	vector <int> v(m);
	for(auto &i : v)
		cin >> i;
	while(ind < m) {
		int tmp_ind = ind + 1;
		while(tmp_ind < m && (v[tmp_ind] - tmp_del - 1) / k == (v[ind] - tmp_del - 1) / k)
			tmp_ind++;
		tmp_del += tmp_ind - ind;
		ind = tmp_ind;
		cnt++;
	}
	cout << cnt;
	return 0;
}