//#include<bits/stdc++.h>  
//#pragma comment(linker, "/STACK:1024000000,1024000000")   
#include<stdio.h>  
#include<algorithm>  
#include<queue>  
#include<string.h>  
#include<iostream>  
#include<math.h>                    
#include<set>  
#include<map>  
#include<vector>  
#include<iomanip> 
#include<bitset>
using namespace std;         //

#define ll long long  
#define pb push_back  
#define FOR(a) for(int i=1;i<=a;i++) 
#define sqr(a) (a)*(a)
#define dis(a,b) sqrt(sqr(a.x-b.x)+sqr(a.y-b.y))
ll qp(ll a,ll b,ll mod){
	ll t=1;while(b){if(b&1)t=t*a%mod;b>>=1;a=a*a%mod;}return t;
}
struct DOT{int x;int y;};
const int dx[4]={0,0,-1,1};
const int dy[4]={1,-1,0,0};
const int inf=0x3f3f3f3f;  
const ll mod=1e9+7;

const int maxn=2e3+4;
vector<int>G[maxn];
int n;
int ans;
int du[maxn];

void dfs(int u,int dep){
	ans=max(ans,dep);
	for(int i=0;i<G[u].size();i++){
		dfs(G[u][i],dep+1);
	}
}

int main(){
	scanf("%d",&n);
	for(int i=1,x;i<=n;i++){
		scanf("%d",&x);
		if(x==-1)continue;
		G[x].pb(i);
		du[i]++;
	}	
	for(int i=1;i<=n;i++)if(!du[i])dfs(i,1);
	printf("%d\n",ans);
}

