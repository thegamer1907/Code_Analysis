#include <string>
#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;
int n, t, a;
vector<int> g;

int main() {
	cin >> n >> t;
	g.resize(n);
	--t;
	for (int i = 0; i < n-1; ++i) {
		cin >> a;
		g[i] = i + a;
	}
	int i = 0;
	while (i < t) {
		i = g[i];
	}
	if (i == t) cout << "YES" << endl;
	else cout << "NO" << endl;

//	system("pause");
	return 0;
}