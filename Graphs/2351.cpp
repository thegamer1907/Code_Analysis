#include <bits/stdc++.h>
using namespace std;

vector<int> graph [2002];

bool visited [2002];
int maxh = 0;

void dfs(int u, int h){
	maxh = max(maxh, h);
	visited[u] = true;
	// cout << u <<" "<< h << endl;
	for(int i : graph[u]){
		if(!visited[i]) dfs(i, h+1);
	}
}

int main() {
	int n;
	cin>>n;
	vector<int> heads;
	for(int i = 0; i<n; i++){
		int k;
		cin>>k;
		if(k!=-1){
			--k;
			graph[k].push_back(i);
		}
		else{
			heads.push_back(i);
		}
		visited[i] = false;
	}
	for(int i : heads){
		dfs(i, 1);
	}
	cout<<maxh<<endl;
	return 0;
}