#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ll long long
#define maxn 100005
#define fr(i,j,k) for(int i=j;i<k;i++)
#define f(n) fr(i,0,n)
#define f1(n) fr(i,1,n+1)
#define ms(i) memset(i,0,sizeof(i))
#define lg length()
//#define endl '\n'
vector<int>g[maxn];
ll cont[maxn],dp[maxn];
int ans;
void dfs(int now,int pre){
	if(cont[now]!=pre){
		ans++;
	}
	for(auto i:g[now]){
		dfs(i,cont[now]);
	}
}
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	while(cin>>n){
		fr(i,2,n+1){
			int add;
			cin>>add;
			g[add].pb(i);
		}
		f1(n){
			cin>>cont[i];
		}
		ans=0;
		dfs(1,-1);
		cout<<ans<<endl;
	}
}