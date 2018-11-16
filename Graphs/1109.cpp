#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


bool dfs(vector<int>& graph, int start, int end){
	if(start == end){
		return true;
	}else if(start == graph.size() - 1){
		return false;
	}
	return dfs(graph, start + graph[start], end);
}

int main(){

	#ifndef ONLINE_JUDGE
	    // for getting input from input.txt
	    freopen("input.txt", "r", stdin);
	    // for writing output to output.txt
	    freopen("output.txt", "w", stdout);
	#endif

	int n, t; cin >> n >> t;
	vector<int> v(n + 1, 0);
	for(int i = 1; i <= n; i++) cin >> v[i];

	if(dfs(v, 1, t)) cout << "YES";
	else cout << "NO";

	return 0;

}