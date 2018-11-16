#include <bits/stdc++.h>

using namespace std;

#define REP(I,A,B) for (int I=(A),I##_END_=(B);I<=I##_END_;I++)
#define FOR(I,A,B) for (int I=(A),I##_END_=(B);I<I##_END_;I++)
#define REPD(I,A,B) for (int I=(A),I##_END_=(B);I>=I##_END_;I--)

const int MAXN= 101010;
const int MAXM = 303030;

const int mo = 1e9+7;

int tot;
int hd[MAXN];
int to[MAXM];
int nxt[MAXM];

int n,m;
int v[MAXN];

long long ans;
int cnt;

int df_time,top;
int dfn[MAXN],low[MAXN];
int in[MAXN],stk[MAXN];

inline void add(const int &x,const int &y){
	tot++;
	to[tot]=y;
	nxt[tot]=hd[x];
	hd[x]=tot;
}

void init(){
	ans=0;
	cnt=1;
	scanf("%d",&n);
	REP(i,1,n) scanf("%d",v+i);
	scanf("%d",&m);
	int u,v;
	REP(i,1,m){
		scanf("%d%d",&u,&v);
		add(u,v);
	}
}

void dfs(int p){
	dfn[p]=low[p]=++df_time;
	stk[++top]=p;
	in[p]=1;
	for (int i=hd[p];i;i=nxt[i]){
		int q=to[i];
		if (!dfn[q]){
			dfs(q);
			low[p]=min(low[p],low[q]);
		}
		else if (in[q])
			low[p]=min(low[p],dfn[q]);
	}

	if (low[p]==dfn[p]){
		int vl=mo,cn=0,pt;
		while (pt!=p){
			pt = stk[top--];
			if (v[pt]<vl){
				vl=v[pt];
				cn=1;
			}
			else cn+=vl==v[pt];
			in[pt]=0;
		}
		ans+=vl;
		cnt=cnt*1ll*cn%mo;
	}
}

void tarjan_scc(){
	df_time=0;
	REP(i,1,n)
		if (!dfn[i])
			dfs(i);
}

int main(){
	init();
	tarjan_scc();
	printf("%I64d %d\n",ans,cnt);
	return 0;
}
