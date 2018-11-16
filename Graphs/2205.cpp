#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int n,t,m,ans;
const int N=2222;
vector <int> v[N];
int mark[N];

void dfs(int u, int h){
	ans=max(ans,h);
	for(int i=0;i<v[u].size() ; i++)
		dfs(v[u][i],h+1);
}

int main(int argc, char** argv) {
	cin >> n;
	for(int i=0;i<n;i++){
		cin>> m;
		m --;
		if(m==-2){
			mark[i]=true;
		}
		else
		{
			v[m].push_back(i);
		}
	}
	for(int i=0;i<n;i++){
		if(mark[i])
			dfs(i, 0);
	}
	cout << ans+1;
	return 0;
}
