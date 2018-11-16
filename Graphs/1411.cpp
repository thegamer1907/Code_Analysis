#include<iostream>
using namespace std;
int a[30005];
int n,t;
int dfs(int x){
	if(x==t)return 1;
	if(x==n)return 0;
	return dfs(x+a[x]);
}
int main(){
	cin>>n>>t;
	for(int i=1;i<n;i++){
		cin>>a[i];
	}
	cout<<(dfs(1)==1?"YES":"NO");
}