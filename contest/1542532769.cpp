#include<cstdio>
#include<cstring>
#include<iostream>
#include<stdlib.h>
#include<ctime>
#include<string>
#include<cmath>
#include<algorithm>
#include<complex>
#include<vector>
#include<set>
#include<map>
#include<queue>
#include<bitset>
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define LL long long
#define FOR(i,a,b) for (int i=a;i<=b;++i)
#define FORD(i,a,b) for (int i=a;i>=b;--i)
using namespace std;
typedef pair<int,int> pa;
void getint(int &v){
    char ch,fu=0;
    for(ch='*'; (ch<'0'||ch>'9')&&ch!='-'; ch=getchar());
    if(ch=='-') fu=1, ch=getchar();
    for(v=0; ch>='0'&&ch<='9'; ch=getchar()) v=v*10+ch-'0';
    if(fu) v=-v;
}
const int INF=1e9+10;
int nedge,too[500010],D[500010],n,m,S,ans,x,y,d[55][55],w,s[500010],nxt[500010],hed[500010];
int f[51][51][51][51],g[111][111],tmp[111],ts;
void ae(int x,int y){
	nxt[++nedge]=hed[x];
	hed[x]=nedge;
	too[nedge]=y;
}
void mkt(int x,int l){
	for (int i=hed[x];i;i=nxt[i]){
		int y=too[i];
		if (y==l) continue;
		mkt(y,x);
		s[x]+=s[y];
	}
}
int dfs(int p,int q,int x,int y){
	if (x+y==0) return 0;
	if (f[p][q][x][y]!=-1) return f[p][q][x][y];
	if (D[q]==1){
		return f[p][q][x][y]=dfs(q,p,0,x)+d[p][q];
	}
	f[p][q][x][y]=INF;
	for (int i=hed[q];i;i=nxt[i]){
		int r=too[i];
		if (r==p) continue;
		FOR(j,1,y) dfs(q,r,x+y-j,j);
	}
	ts=0;
	for (int i=hed[q];i;i=nxt[i]){
		int r=too[i];
		if (r==p) continue;
		tmp[++ts]=r;
	}
	FOR(i,0,ts)
		FOR(j,0,y)
			g[i][j]=0;
	g[0][0]=INF;
	FOR(i,0,ts-1){
		FOR(j,0,y){
			FOR(k,0,y-j){
				g[i+1][j+k]=max(g[i+1][j+k],min(g[i][j],(k==0)?INF:dfs(q,tmp[i+1],x+y-k,k)+d[p][q]));
			}
		}
	}
	return f[p][q][x][y]=g[ts][y];
}
int main(){
	cin>>n;
	FOR(i,2,n){
		getint(x),getint(y),getint(w);
		d[x][y]=d[y][x]=w;
		ae(x,y),ae(y,x);
		++D[x],++D[y];
	}
	memset(f,-1,sizeof(f));
	cin>>S>>m;
	FOR(i,1,m){
		getint(x);
		++s[x];
	}
	mkt(S,0);
	ans=INF;
	for (int i=hed[S];i;i=nxt[i]){
		int y=too[i];
		if (s[y]) ans=min(ans,dfs(S,y,s[S]-s[y],s[y]));
	}
	cout<<ans<<endl;
	return 0;
}
