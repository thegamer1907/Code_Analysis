#include<bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define rep(i, a, b) for(int i=(a); i<(b); i++)
#define sz(x) (int)x.size()
#define de(x) cout<< #x<<" = "<<x<<endl
#define dd(x) cout<< #x<<" = "<<x<<" "
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

const int N=505;
int n,m,k,cnt;
int id[N][N];
int dx[]={0, 1, 0, -1};
int dy[]={1, 0, -1, 0};
pii di[N*N];
char s[N][N];
vi g[N*N];
bool in[N][N], vis[N*N];

void solve() {
	vi q;
	q.pb(1);
	vis[1]=1;
	rep(i,0,sz(q)) {
		if(!k) return ;
		int u=q[i];--k;
		int x=di[u].fi, y=di[u].se;
		s[x][y]='X';
		rep(j,0,sz(g[u])) {
			int v=g[u][j];
			if(!vis[v]) q.pb(v), vis[v]=1;
		}
	}
}

int main() {
	while(~scanf("%d%d%d",&n,&m,&k)) {
		///init
		memset(in,0,sizeof(in));
		rep(i,0,n*n+1) g[i].clear();
		memset(id,-1,sizeof(id));
		memset(vis,0,sizeof(vis));
		cnt=0;
		///read
		rep(i,1,n+1) scanf("%s",s[i]+1);
		///solve
		rep(i,1,n+1) rep(j,1,m+1) if(s[i][j]=='.') {
			id[i][j]=++cnt;
			di[cnt]=mp(i, j);
		}
		rep(i,1,cnt+1) {
			int x=di[i].fi, y=di[i].se;
			rep(j,0,4) {
				int nx=x+dx[j], ny=y+dy[j];
				if(~id[nx][ny]) {
					g[i].pb(id[nx][ny]);
				}
			}
		}
		k=cnt-k;
		solve();
		rep(i,1,n+1) rep(j,1,m+1) {
			if(s[i][j]=='.') s[i][j]='X';
			else if(s[i][j]=='X') s[i][j]='.';
		}
		rep(i,1,n+1) printf("%s\n",s[i]+1);
	}
	return 0;
}
