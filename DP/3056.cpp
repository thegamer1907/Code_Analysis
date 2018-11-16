#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
#define INF 1061109567
#define maxn 3010
int n,s[maxn],c[maxn],ans=INF;
map<int,int> M;
map<int,int>::iterator ite;
int l[maxn][maxn],r[maxn][maxn];
int main(){
	//freopen("in.in","r",stdin);
	int i,j,x;
	scanf("%d",&n);
	for(i=1;i<=n;i++) {
		scanf("%d",&s[i]);
		M[s[i]]=0;
	}
	for(i=1;i<=n;i++) scanf("%d",&c[i]);
	i=1;
	for(ite=M.begin();ite!=M.end();ite++) ite->second=i++;
	memset(l,0x3f,sizeof(l));
	for(i=1;i<=n;i++){
		x=M.find(s[i])->second;
		for(j=1;j<x;j++) l[i][j]=l[i-1][j];
		for(j=x;j<=n;j++) l[i][j]=min(l[i-1][j],c[i]);

	}
	memset(r,0x3f,sizeof(r));
	for(i=n;i>0;i--){
		x=M.find(s[i])->second;
		for(j=1;j<=x;j++) r[i][j]=min(r[i+1][j],c[i]);
		for(j=x+1;j<=n;j++) r[i][j]=r[i+1][j];
	}
	for(i=2;i<n;i++){
		x=M.find(s[i])->second;
		ans=min(ans,l[i-1][x-1]+c[i]+r[i+1][x+1]);
	}
	if(ans==INF) printf("-1");
	else printf("%d",ans);
}