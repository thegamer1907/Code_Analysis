#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> adj;
vector<bool> visited;
vector<int> a,b,match;

bool aug(int ini){
	if(visited[ini]) return 0;
	visited[ini]=1;
	for(int i=0;i<adj[ini].size();i++){
		int r = adj[ini][i];
		if(match[r]==-1 ||aug(match[r])){
			match[r]=ini;
			return 1;
		}
	}
	return 0;
}

int main(){
	int n,v;
	cin >> n;
	adj.assign(n,vector<int>());
	while(n--){
		cin >> v;
		a.push_back(v);
	}
	cin >> n;
	while(n--){
		cin >> v;
		b.push_back(v);
		for(int i=0;i<a.size();i++){
			if(abs(a[i]-v)<=1){
				adj[i].push_back(b.size()-1);
			}
		}
	}
	match.assign(b.size(),-1);
	int res = 0;
	for(int i=0;i<a.size();i++){
		visited.assign(a.size(),0);
		res+=aug(i);
	}
	cout << res << endl;
	return 0;
}
