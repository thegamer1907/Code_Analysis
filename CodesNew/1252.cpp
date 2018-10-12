#include "bits/stdc++.h"
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; ++i) {
        cin >> v[i];
        v[i] = (v[i] + 1) - (i + 1);
        v[i] = (v[i] + n - 1) / n;
	}

	int pos, _min = 1e9;
	for (int i = 0; i < n; ++i) {
        if (v[i] < _min) {
            _min = v[i];
            pos = i + 1;
        }
	}

	cout << pos << endl;
	return 0;
}
