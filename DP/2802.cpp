#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
#define pb push_back
using namespace std;

set<int> quas;


void dfs(int x){
	if(x > 1e6) return;
	if(quas.count(x)) return;
	quas.insert(x);
	dfs(10 * x);
	dfs(10 * x + 1);
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	dfs(1);
	
	int n; cin >> n;
	vector<int> ans(n + 1);
	vector<int> pre(n + 1);
	ans[0] = 0;
	for(int i = 1; i <= n; i++){
		ans[i] = 1e9;
		for(int x : quas){
			if(x > i) break;
			if(ans[i - x] + 1 < ans[i]){
				ans[i] = ans[i - x] + 1;
				pre[i] = x;
			}
		}
	}
	cout << ans[n] << endl;
	while(n > 0){
		cout << pre[n] << " ";
		n -= pre[n];
	}
	cout << endl;

	return 0;		
}