#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=(a);i<(b);i++)
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define sz(a) a.size()
#define de(a) cout<<#a<<" = "<<a<<endl;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int,int> pii;

const int N=100005;
const int mod=1e9+7;

int n,c[N],fa[N],x,ans;
vi g[N];
bool vis[N];

void dfs(int x) {
	vis[x]=1;
	rep(i,0,sz(g[x])) {
		int y=g[x][i];
		if (!vis[y]) {
			fa[y]=x;
			dfs(y);
		}
	}
}

int main(){
//	freopen("a.in","r",stdin);
	scanf("%d",&n);
	rep(i,2,n+1) {
		scanf("%d",&x);
		g[i].pb(x);
		g[x].pb(i);
	}
	rep(i,1,n+1) scanf("%d",&c[i]);
	dfs(1);
	rep(i,1,n+1) if (c[i]!=c[fa[i]]) ans++;
	printf("%d",ans);
 	return 0;
}