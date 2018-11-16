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

bool f(int i) {
	if (i == t) return true;
	else if (i > t) return false;
	return f(g[i]);
}

int main() {
	cin >> n >> t;
	g.resize(n);
	--t;
	for (int i = 0; i < n-1; ++i) {
		cin >> a;
		g[i] = i + a;
	}
	bool ch = f(0);
	if (ch) cout << "YES";
	else cout << "NO";

//	system("pause");
	return 0;
}