#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<vector<int> > gr(10004);
vector<int> color(10005);

int dfs(int, int);


int main(){
	int n, a;
	cin >> n;
	for(int i = 2; i <= n; i++){
		cin >> a;
		gr[a].push_back(i);
	}
	for(int i = 1; i <= n; i++){
		cin >> color[i];
	}
	cout << dfs(1, 0);
	return 0;
}
int dfs(int v, int cp){
	int ans = 0;
	if(color[v] != cp)ans++;
	for(int i = 0; i < gr[v].size(); i++){
		cp = color[v];
		ans += dfs(gr[v][i], cp);
	}
	return ans;
}
