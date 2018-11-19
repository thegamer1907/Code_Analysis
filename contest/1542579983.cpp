#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<cstring>
#include<algorithm>
#include<queue>
#include<vector>
#define N 200000
#define inf
#define mod
#define rg register
using namespace std;
typedef long long ll;
typedef double db;
int n,k,x,h,t;
int q[N];
bool vis[N];
void work(int s){
	q[h=t=1]=s;
	while (h<=t){
		int x=q[h];h++;
		vis[x]=1;
		for (int i=0;i<k;++i){
			if ((x>>i)&1) continue;
			else q[++t]=x|(1<<i);
		}
	}
}
int main(){
	//	freopen ("c.in","r",stdin);
	//	freopen ("c.out","w",stdout);
	scanf ("%d%d",&n,&k);
	for (int i=1;i<=n;++i){
		int tmp=0;
		for (int j=1;j<=k;++j)
			scanf ("%d",&x),tmp|=(x<<j-1);		
		work(tmp);
	}
	if (vis[0]) {printf ("YES\n");return 0;}
	int l=(1<<k)-1;
	for (int i=0;i<=l;++i){
		if (vis[i]&&vis[i^l]) {printf ("YES\n");return 0;}
	}
	printf ("NO\n");
	return 0;
}
