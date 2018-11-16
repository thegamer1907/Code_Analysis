#include <iostream>
#include <vector>
#define maxn 10005
using namespace std;
int c[maxn], ans;
vector<int> G[maxn];
void dfs(int x, int fa, int color) {
	if ( c[x] != color )	ans++;
	color = c[x];
	for ( int i : G[x] )
		if ( i != fa )
			dfs(i,x,color);
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	cin >> n;
	for ( int i=2, x; i<=n; ++i ) {
		cin >> x;
		G[i].emplace_back(x);
		G[x].emplace_back(i);
	}
	for ( int i=1; i<=n; ++i )	cin >> c[i];
	dfs(1,1,0);
	cout << ans << '\n';
	return 0;
}
