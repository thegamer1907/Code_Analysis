#include <bits/stdc++.h>
using namespace std;

const int N_MAX = 3e4+1;
int N,t;
int A[N_MAX];
int visited[N_MAX];

bool dfs(int i){
	if(i>t)return false;
	if(i==t)return true;
	else return dfs(i+A[i]);
}

int main(){
	cin>>N>>t;
	for(int i=1;i<=N-1;i++)cin>>A[i];
	int i=1;
	while(i<t)i+=A[i];
	if(dfs(1))cout<<"YES\n";
	else cout<<"NO\n";
}