#include <iostream>
#include <vector>

using namespace std;

#define MAX_N 100001

int n, m;
int a[MAX_N], cnt[MAX_N];
vector<int> gr[MAX_N];


int dfs(int v, int pV) {
	
	int ans = 1;
	for (auto u : gr[v]) {
		if (u != pV) {
			ans += dfs(u, v);
		}
	}
	if (ans == 1) 
		a[v] = 0;
	return ans;
}
int dfs(int v, int pV, int cat) {
	if (a[v] == 0) 
		cat = 0;
	else 
		cat = cat + 1;
//	cout << v << " " << pV << " " << cat << endl;
	if (cat > m) 
		return 0;
	int ans = 0;
	int child = 0;
	for (auto u : gr[v]) {
		if (u != pV) {
			child = 1;
			ans += dfs(u, v, cat);
		}
	}
	if (child == 0) 
		return 1;
	return ans;
}

int main() {
	cin >> n >> m;
	for (int i = 1; i <= n; ++i) 
		cin >> a[i];
	int x, y;
	for (int i = 1; i < n; ++i) {
		cin >> x >> y;
		gr[x].push_back(y);
		gr[y].push_back(x);
	}
	//dfs(1, 0);
	cout << dfs(1, 0, 0) << endl;
	return 0;
}