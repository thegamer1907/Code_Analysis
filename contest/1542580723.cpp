#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define rep1(i,n) for(int i=1;i<=(int)(n);i++)
#define all(c) c.begin(),c.end()
#define pb push_back
#define fs first
#define sc second
#define show(x) cout << #x << " = " << x << endl
#define chmin(x,y) x=min(x,y)
#define chmax(x,y) x=max(x,y)
using namespace std;
template<class S,class T> ostream& operator<<(ostream& o,const pair<S,T> &p){return o<<"("<<p.fs<<","<<p.sc<<")";}
template<class T> ostream& operator<<(ostream& o,const vector<T> &vc){o<<"sz = "<<vc.size()<<endl<<"[";for(const T& v:vc) o<<v<<",";o<<"]";return o;}


int inf = 1e9;
int N,M,S;
int e[50][50];
int d[50][50];
int dp[55][50];	//x,v
int thief[50];	//cnt
vector<int> leaves;

bool can(int x,int v,int t){		//>=t ?
	int cnt = 0;
	for(int u:leaves){
		if(u==v) continue;
		int canput = 0;
		rep1(y,x){
			int nx = x-y;
			if(dp[nx][u] + d[v][u] >= t) canput = y;
		}
		cnt += canput;
	}
	return (cnt>=x);
}

bool now[50];
void dfs(int v,int p){
	now[v] = 1;
	rep(u,N) if(e[v][u]!=0 && u!=p) dfs(u,v);
}

bool canS(int t){		//>=t ?
	rep(adjS,N) if(e[S][adjS] != 0){
		{
			rep(i,N) now[i] = 0;
			dfs(adjS,S);
		}
		int x = 0;
		rep(i,N) if(now[i]) x += thief[i];

		int cnt = 0;
		for(int u:leaves){
			if(!now[u]) continue;
			int canput = 0;
			rep1(y,x){
				int nx = M-y;
				if(dp[nx][u] + d[S][u] >= t) canput = y;
			}
			cnt += canput;
		}
		bool ok = (cnt>=x);
		if(!ok) return 0;
	}
	return 1;
}

int main(){
	cin>>N;
	rep(i,N-1){
		int x,y,c;
		cin>>x>>y>>c;
		x--,y--;
		e[x][y] = e[y][x] = c;
	}
	rep(i,N){
		int deg = 0;
		rep(j,N) if(e[i][j]!=0) deg++;
		if(deg==1) leaves.pb(i);
	}
	rep(i,N) rep(j,N) if(i!=j) d[i][j] = inf;
	rep(i,N) rep(j,N) if(e[i][j]!=0) d[i][j] = e[i][j];
	rep(i,N) rep(j,N) rep(k,N) chmin(d[j][k],d[j][i]+d[i][k]);

	cin>>S;
	S--;
	cin>>M;
	rep(i,M){
		int x;
		cin>>x;
		x--;
		thief[x]++;
	}
	rep1(x,M){
		rep(v,N){
			int ub = 1e9, lb = 0;
			while(ub-lb>1){
				int m = (ub+lb)/2;
				if(can(x,v,m)) lb = m;
				else ub = m;
			}
			dp[x][v] = lb;
		}
	}

	{
		bool isleaf = 0;
		for(int v:leaves) if(v==S) isleaf = 1;
		if(isleaf){
			cout<<dp[M][S]<<endl;
			return 0;
		}
	}

	int ub = 1e9, lb = 0;
	while(ub-lb>1){
		int m = (ub+lb)/2;
		if(canS(m)) lb = m;
		else ub = m;
	}
	cout<<lb<<endl;
}
