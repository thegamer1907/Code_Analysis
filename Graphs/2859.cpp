#include <iostream>
#include <fstream>
#include <algorithm>
#include <cmath>
#include <climits>
#include <vector>

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;

const int INF = 2e9+5;

/*
    filippos
    Contest : 
    Task : 
*/

void dfs(int i, vector<vector<pii>> &g, vi &size){
	size[i] = 1;
	for(pii &p : g[i]){
		dfs(p.first, g, size);
		size[i] += size[p.first];
	}
}

int solve(int i, int dist, vector<vector<pii>> &g, vi &v, vi &size){
	if(dist > v[i]) return size[i];
	int ans = 0;
	for(pii &p : g[i]){
		ans += solve(p.first, max(0, dist + p.second), g, v, size);
	}
	return ans;
}

int main(){
    cin.tie(0), cin.sync_with_stdio(0);
    //we compute sizes, then go for a dfs
    int n;
    cin >> n;
    vi v(n);
    for(int &i : v)
    	cin >> i;
    //Build graph from fathers
    vector<vector<pii>> g(n);
    int root = 0;
    for(int i = 1; i < n; i++){
    	int from, cost;
    	cin >> from >> cost;
    	from--;
    	g[from].push_back({i, cost});
    }
    //We compute subtree size
    vi size(n);
    dfs(0, g, size);
    //we send the dfs
    cout << solve(0, 0, g, v, size);
}