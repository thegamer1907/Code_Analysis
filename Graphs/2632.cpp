//InHisName
#include <bits/stdc++.h>
using namespace std;

const int maxn = 10*1000 + 10;
vector <int> v[maxn];
bool mark[maxn];

void dfs(int x){
	if(mark[x]) return;
	mark[x] = true;
	for(auto y : v[x])
		dfs(y);
}

main(){
	int n, ans=0, x;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> x;
		v[i].push_back(--x);
		v[x].push_back(i);
	}
	for(int i = 0; i < n; i++) if(!mark[i]){
		dfs(i);
		ans++;
	}
	cout << ans << "\n";
}