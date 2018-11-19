#include <bits/stdc++.h>
using namespace std;

const int maxn = 1e5 + 5;
map<string,int> vis;
char ans[10];
int a[maxn][10],pos[10],all;
string s;

void dfs(int x,int p){
	if(x == all){
		for(int i = 0;i < p;i++){
			if(pos[i] != 9){
				s += ans[pos[i]];
			}
		}
		if(!s.empty()) vis[s] = 1;
		s.clear();
		return;
	}
	pos[p] = x;
	dfs(x + 1,p + 1);
	pos[p] = 9;
	dfs(x + 1,p);
}

int main(){
	int n,k;
	cin >> n >> k;
	for(int i = 1;i <= n;i++){
		s.clear();
		for(int j = 1;j <= k;j++){
			cin >> a[i][j];
			memset(ans,0,sizeof(ans));
			if(a[i][j] == 0){
				if(j == 1) s += '1';
				else if(j == 2) s += '2';
				else if(j == 3) s += '3';
				else if(j == 4) s += '4';
			}
		}
		all = s.size();
		for(int j = 0;j < s.size();j++) ans[j] = s[j];
		s.clear();
		dfs(0,0);
	}
	for(int i = 1;i <= n;i++){
		string h;
		h.clear();
		for(int j = 1;j <= k;j++){
			if(a[i][j] == 1){
				if(j == 1) h += '1';
				else if(j == 2) h += '2';
				else if(j == 3) h += '3';
				else if(j == 4) h += '4';
			}
		}
		if(vis[h] == 1 || h.empty()){
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
}
