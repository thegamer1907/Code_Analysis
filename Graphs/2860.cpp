#include <bits/stdc++.h>
#define PB push_back
#define MAX 100005
#define MP make_pair
#define LL long long
using namespace std;
#define FZ(X) memset(X,0,sizeof(X))

vector<int> v[MAX];
LL val[MAX],c[MAX],tmp,dp[MAX];
bool vis[MAX];

void dfs(int now,LL rem){
	if(val[now]<rem)return;
	//printf("%d\n",now);
	vis[now]=1;
	for(auto i:v[now]){
		dfs(i,max(rem+c[i],c[i]));
	}
}

int main(){
	int n,fr;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&val[i]);
	}
	for(int i=2;i<=n;i++){
		scanf("%d%lld",&fr,&tmp);
		v[fr].PB(i);
		c[i]=tmp;
	}
	dfs(1,0);
	int cnt=0;
	for(int i=1;i<=n;i++){
		if(!vis[i])cnt++;
	}
	printf("%d\n",cnt);
}