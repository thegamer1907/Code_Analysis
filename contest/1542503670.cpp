#include<cstdio> 
#include<algorithm>
#include<cstring>
#include<cmath>
#include<map>
#include<set>
//¿ª O2£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡£¡ 
using namespace std;
#define fo(i,j,k) for(i=j;i<=k;i++)
#define fd(i,j,k) for(i=j;i>=k;i--)
#define cmax(a,b) (a=(a>b)?a:b)
#define cmin(a,b) (a=(a<b)?a:b)
typedef long long ll;
typedef long long LL;
typedef double db;
const int N=50+5,mo=1e9+7;
int f[N][N][N][N],siz[N],ans,n,i,j,k,l,x,y,z,S,m;
int tt,b[N*2],c[N*2],nxt[N*2],fst[N];
void cr(int x,int y,int z)
{
	tt++;
	b[tt]=y;
	c[tt]=z;
	nxt[tt]=fst[x];
	fst[x]=tt;
}
int dfs(int x,int y,int cnt,int tot,int z)
{
	if (!tot) return 0;
	if (!cnt) return 1e9;
	int &F=f[x][y][cnt][tot];
	int i,j,k,ts=0;
	if (F!=1e9) return F;
	if (b[fst[x]]==y&&!nxt[fst[x]]) return F=z+dfs(y,x,tot-cnt,tot-cnt,z);
	for(int p=fst[x];p;p=nxt[p])
		if (b[p]!=y)
		{
			fo(i,0,cnt)
				dfs(b[p],x,i,tot,c[p]);
			ts++;
		}
	int g[N][N];
	fo(i,0,ts) fo(j,0,tot) g[i][j]=0;
	ts=0;
	g[0][0]=1e9;
	for(int p=fst[x];p;p=nxt[p])
		if (b[p]!=y)
		{
			++ts;
			fo(j,0,tot)
				fo(k,0,tot-j)
					g[ts][j+k]=max(g[ts][j+k],min(g[ts-1][j],dfs(b[p],x,k,tot,c[p])));
		}
	return F=g[ts][cnt]+z;
}
void thr(int x,int y)
{
	for (int p=fst[x];p;p=nxt[p])
		if (b[p]!=y)
		{
			thr(b[p],x);
			siz[x]+=siz[b[p]];
		}
}
int main()
{
	scanf("%d",&n);
	fo(i,1,n-1)
	{
		scanf("%d %d %d",&x,&y,&z);
		cr(x,y,z);
		cr(y,x,z);
	}
	scanf("%d %d",&S,&m);
	fo(i,1,m)
	{
		scanf("%d",&x);
		siz[x]++;
	}
	thr(S,0);
	fo(i,1,n) fo(j,1,n) fo(k,0,m) fo(l,0,m) f[i][j][k][l]=1e9;
	ans=1e9;
	for(int p=fst[S];p;p=nxt[p])
		ans=min(ans,dfs(b[p],S,siz[b[p]],m,c[p]));
	printf("%d\n",ans);
}