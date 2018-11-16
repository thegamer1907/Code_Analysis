 #include<iostream>
#include<cmath>
#include<algorithm>
# include<set>
# include<map>
#include<vector>
#include<string>
#include<array>
# include<math.h>
# include<string.h>
# include<stack>
# include<queue>
# include<deque>
# include<iterator>
# include<sstream>
# include<conio.h>
# include<string.h>
using namespace std;
int n, m;
vector<int >vec;
vector<int>vis;

void dfs(int node) {
	vis[node] = 1;
	if (node == m) {
		cout << "YES";
		exit(0);
	}
	if (node == n) {
		cout << "No";
		exit(0);
	}
	dfs(node + vec[node]);
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	cin >> n >> m;
	vec.resize(n + 1);
	vis.resize(n + 1);
	for (int i = 1; i < n; i++) {
		cin >> vec[i];
	}
	dfs(1);
	return 0;
}
	
