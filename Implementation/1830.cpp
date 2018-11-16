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

struct vec{
	int x;
	int y;
	int z;
};

int main()
{
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	
	int n = 0;
	cin >> n;
	vector<vec> qwe(n);
	for (int i = 0; i < n; i++) {
		cin >> qwe[i].x >> qwe[i].y >> qwe[i].z;
	}
	int x = 0, y = 0, z = 0;
	for (int i = 0; i < qwe.size(); i++) {
		x += qwe[i].x;
		y += qwe[i].y;
		z += qwe[i].z;
	}
	if (x == y && y == z && z == 0) cout << "YES" << endl;
	else cout << "NO" << endl;

	return EXIT_SUCCESS;
}
