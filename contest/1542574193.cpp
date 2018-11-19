#include"bits/stdc++.h"
#define F(i,j,n) for(register int i=j;i<=n;i++)
#define D(i,j,n) for(register int i=j;i>=n;i--)
#define ll long long
#define N 110
using namespace std;
namespace io{
	const int L=(1<<19)+1;
	char ibuf[L],*iS,*iT,c;int f;
	char gc(){
		if(iS==iT){
			iT=(iS=ibuf)+fread(ibuf,1,L,stdin);
			return iS==iT?EOF:*iS++;
		}
		return*iS++;
	}
	template<class I>void gi(I&x){
		for(f=1,c=gc();c<'0'||c>'9';c=gc())if(c=='-')f=-1;
		for(x=0;c<='9'&&c>='0';c=gc())x=x*10+(c&15);x*=f;
	}
};
using io::gi;
using io::gc;
int a,n,m,u,v,p,s,x[N],f[N][N],y[N],h[N][N],g[N][N],k[N][N],t[N],o,d[N],ans=1<<26;
vector<int> c[N];
/*
bool check(int x,int m,int s){
	int a=0,y;
	F(i,0,p){
		y=t[i];
		if(x==y)continue;
		if(f[x][y]+g[y][s-u]>m)a++;
	}
	return a>=v;
}//*/
int ask(int x,int s,int m){
	memset(h,0,sizeof(h));
	int l=0;
	F(i,0,p)if(t[i]!=x){
		F(j,0,s)h[l+1][j]=h[l][j];
		F(j,0,s)F(k,1,s-j){
			h[l+1][j+k]=max(h[l+1][j+k],min(!j?1<<26:h[l][j],f[x][t[i]]+g[t[i]][m-k]));
//			printf("	%d %d %d %d %d %d\n",j,k,h[l+1][j+k],h[l][j],f[x][t[i]],g[t[i]][s-k]);
		}
		l++;
//		F(j,0,s)printf("%d ",h[l][j]);puts("");
	}//puts("");
	return h[l][s];
}
void dfs(int u,int fa){
	o+=x[u];if(y[u]){t[++p]=u;return;}
	int m=c[u].size()-1,v;
	F(i,0,m){
		v=c[u][i];
		if(v==fa)continue;
		dfs(v,u);
	}
}
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("a.in","r",stdin);
	freopen("a.out","w",stdout);
	#endif
	gi(n);
	F(i,1,n)F(j,1,n)f[i][j]=i==j?0:1<<25;
	F(i,2,n)gi(u),gi(v),gi(p),f[u][v]=f[v][u]=p
		,c[u].push_back(v),c[v].push_back(u);
	gi(s);p=0;
	gi(m);F(i,1,m)gi(a),x[a]++;
	F(k,1,n)F(i,1,n)F(j,1,n)f[i][j]=min(f[i][j],f[i][k]+f[k][j]);
//	F(i,1,n){F(j,1,n)printf("%2d ",f[i][j]);puts("");}puts("");
	F(i,1,n)if(c[i].size()==1)y[i]=1,t[p++]=i;p--;
	F(i,0,p)F(j,1,n)g[t[i]][1]=max(g[t[i]][1],f[t[i]][j]);
//	F(i,0,p)printf("%4d ",t[i]);puts("");
//	F(i,0,p)printf("%4d ",g[t[i]][1]);puts("");
	F(j,2,m){
		F(i,0,p)g[t[i]][j]=ask(t[i],j,j);
//		F(i,0,p)printf("%4d ",g[t[i]][j]);puts("");
	}
	if(y[s]){printf("%d\n",g[s][m]);return 0;}
	a=c[s].size()-1;t[0]=s;
	F(i,0,a){
		p=o=0;
		dfs(c[s][i],s);
		if(!o)continue;
		ans=min(ans,ask(s,o,m));
//		printf("%d %d %d %d\n",o,u,v,ask(s,m));
	}
	printf("%d\n",ans);
	return 0;
}
