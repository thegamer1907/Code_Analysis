
// #include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;
#define MAX 2000002
int ans = 0;
vector<int> g[MAX];
bool see[MAX] = {0};
void dfs(int u ,int step){
	see[u] = 1;
	ans = max(step,ans);
	for(int i = 0; i< g[u].size();i++){
		int v = g[u][i];
		if(see[v] == 0)dfs(v,step + 1);
	}
}

vector<int> v;
int main(){
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);	
	int n,a;
	cin>>n;
	for(int i = 1; i<= n ;i++){
		cin>>a;
		if(a == -1)v.push_back(i);
		else g[a].push_back(i);
	}
	for(int i = 0; i < v.size() ;i ++){
		if(!see[v[i]]) dfs(v[i],0);
	}
	cout<<ans + 1;
	return 0;
}

