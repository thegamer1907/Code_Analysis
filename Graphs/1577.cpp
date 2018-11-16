#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m, x;
bool v[30005], f;
vector <int> a[30005];

void bfs(int z) {
	if (z>m) {
		cout << "NO" << endl;
		exit(0);
	}
	if (z==m) {
		cout << "YES" << endl;
		exit(0);
	}
	v[z] = 1;
	for (int i=0; i<a[z].size(); i++) {
		if (!v[a[z][i]])  bfs(a[z][i]);
	}
}

int main() {
	cin >> n >> m;
	for (int i=1; i<=n-1; i++) {
		cin >> x;
		a[i].push_back(i+x);
	}
	bfs(1);
	return 0;
}