#include <bits/stdc++.h>

using namespace std;

const int MAXN = 1e5;

int a[MAXN];
bool used[MAXN];

void dfs(int v){
	used[v] = true;
	
	if(!used[v + a[v]]) dfs(v + a[v]);
	
}

int main(){
	
	int n, t; cin >> n >> t;
	
	
	for(int i = 1; i <= n - 1; i++){
		cin >> a[i];
	}
	
	dfs(1);
	
	if(used[t]){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}
	
	return 0;
}