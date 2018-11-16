#include <iostream>
#include <bits/stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
const int N=1e6;
int m,n,a,b,ans,cat[N], c[N];
vector <int> v[N];

void dfs(int ver, int par){
	if(cat[ver]){
		if(par == -1)
			c[ver] = 1;
		else
			c[ver] = c[par]+1;
	}
	if(c[ver] > m)
		return;
	if(ver != 0 && v[ver].size() == 1)
		ans ++;
	for(int U=0 ; U<v[ver].size() ; U++){
		int u = v[ver][U];
		if(u != par)
			dfs(u, ver);		
	}
}

int main(int argc, char** argv) {
	cin >> n >> m;
	for(int i=0;i<n;i++)
	{
	cin >> cat[i];
	}	
	for(int i=0;i<n-1;i++){
		cin >> a >> b;
		
		a--;
		b--;
		v[b].push_back(a);
		v[a].push_back(b);
	}
	dfs(0, -1);
	cout << ans << "\n";
	return 0;
}
