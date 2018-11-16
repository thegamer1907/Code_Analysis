#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>
#include <queue>
#include <map>
#include <set>
#include <bitset>
using namespace std;

using pii = pair<int, int>;

int main()
{
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	int n = 0, k = 0;
	cin >> n >> k;
	vector<int> points(n);
	int ans = 0;
	for (int i = 0; i < n; i++) {
		cin >> points[i];
	}
	int check = points[k - 1];
	for (int i = 0; i < points.size(); i++) {
		if (points[i] > 0) {
			if (points[i] >= check) ans++;
			else break;
		}
	}
	cout << ans << endl;

	return EXIT_SUCCESS;
}
