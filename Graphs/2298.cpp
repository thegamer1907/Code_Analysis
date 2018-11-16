/*
	Copyright: razouq (c)
	Author: Anass BENDARSI
	Date: 27/06/2018 23:25:38
	flamers will **** you
*/
//#include<flamers.h>

#include "bits/stdc++.h"
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#define ll long long
#define ull unsigned long long
#define F first
#define S second
#define PB push_back
#define POB pop_back

using namespace std;
const int maxn = 2002;
vector<int> g[maxn];
bool vis[maxn] = {false};
int rep = 0;
void dfs(int a, int deg) {
//	cout<<a<<" "<<deg<<endl;
	rep = max(rep, deg);
	vis[a] = true;
	for(auto x : g[a]) {
		if(!vis[x]) {
			dfs(x, deg+1);
		}
	}
	
}

int main(){
	
//	freopen("input.in", "r", stdin);
//	freopen("output.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie();
	int n;
	cin>>n;
	int tab[maxn] = {0};
	int a;
	for(int i = 1; i <= n; i++) {
		cin>>a;
		if(a != -1) {
			g[a].PB(i);
		}
		tab[i] = a;
	}
	for(int i = 1; i <= n; i++) {
		if(tab[i] == -1) dfs(i, 1);
	}
	cout<<rep<<endl;
	return 0;
}
