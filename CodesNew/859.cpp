#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	long long n, m, common = 0;
	cin >> n >> m;
	vector<string> p(n);
	string eword;
	for (int i = 0; i < n; ++i) {
		cin >> p[i];
	}

	for (int i = 0; i < m; ++i) {
		cin >> eword;
		if (find(p.begin(), p.end(), eword) != p.end()) {
			++common;
		}
	}

	if (common % 2)
		++n;

	if (n <= m) cout << "NO\n";
	else cout << "YES\n";

	//system("pause");
	return 0;
}