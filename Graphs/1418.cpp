#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define INF 0xFFFFFF
#define pb push_back
#define mp make_pair
int n,t,a[300100];
bool vis[300100];
void dfs(int c){
	if(vis[c])return;
	vis[c]=1;
	dfs(c+a[c]);
}


int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	//freopen(".gir","r",stdin);
	//freopen(".cik","w",stdout);
		cin>>n>>t;
		for(int i=1;i<=n-1;++i)cin>>a[i];
			dfs(1);
		if(vis[t])cout<<"YES"<<"\n";
		else cout<<"NO"<<"\n";
}