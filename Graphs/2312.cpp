#include <bits/stdc++.h>
using namespace std;
int mx;
vector<int> g[2000];
int depth[2000],ans;
void dfs(int rt){
	ans = max(ans,depth[rt]);
	for(int to:g[rt]){
		depth[to] = depth[rt] + 1;
		dfs(to);
	}
}
int main() {
	int n,a;
	vector<int> v;
	cin >> n;
	for(int i = 0;i<n;i++){
		cin >> a;
		if(a == -1){
			v.push_back(i);
			depth[i] = 1;
		}
		else{
			g[a-1].push_back(i);
		}
	}
		for(int c:v){
			dfs(c);
		}
		cout << ans << endl;
	return 0;
}