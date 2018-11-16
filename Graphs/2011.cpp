#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
const int MAX=100000+1000;
vector<int> vec[MAX];
bool a[MAX],b[MAX];
int n,m,x=0;
void dfs(int i,int y){
	b[i]=1;
	bool t=1;
	if(!a[i])
		y=0;
	else
		y++;
	if(y>m)
		return;
	for(int j:vec[i]){
		if(!b[j]){
			dfs(j,y);
			t=0;
		}
	}
	if(t&&y<=m)
		x++;
	return;
}
int main(){
	cin>>n>>m;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n-1;i++){
		int x,y;
		cin>>x>>y;
		x--;
		y--;
		vec[x].push_back(y);
		vec[y].push_back(x);
	}
	dfs(0,0);
	cout<<x;
}