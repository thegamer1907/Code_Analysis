#include <bits/stdc++.h>

using namespace std;

#define IO ios_base::sync_with_stdio(0);cin.tie(0);

int main()
{
  IO;
  int n; cin >> n;
	vector <string> v(n);
	for (int i = 0; i < n; ++i) cin >> v[i];

	for (int i = n - 2; i >= 0; --i) {
		for (int j = 0; j < (int)v[i].size(); ++j) {
			if (v[i][j] > v[i + 1][j] || j >= (int)v[i + 1].size()) {
				v[i][j] = '-'; break;
			}
			else if (v[i][j] < v[i + 1][j]) break;
		}
	}

	for (int i = 0; i < n; ++i) {
	for (int j = 0; j < (int)v[i].size(); ++j)
    if (v[i][j] != '-') cout << v[i][j];
	else break;
	cout << '\n';
	}

	return 0;
}
