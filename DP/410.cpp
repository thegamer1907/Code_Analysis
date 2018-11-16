#include<bits/stdc++.h>
using namespace std;

const int MAXN = 1e3;

struct Edge{
	int v,flow,c;
	Edge(){};//v    f        c
	Edge(int _v,int _c ,int _flow){
		v = _v; c = _c; flow = _flow;
	}
};

typedef struct Edge edge;
vector<edge> Edges;
vector<int> G[MAXN];
int nivel[MAXN],send[MAXN];

inline void add_Edge(int u,int v,int cap,int rev = 0){

	Edges.push_back(Edge(v ,cap ,0));
	G[u].push_back((int)Edges.size() - 1);

	Edges.push_back(Edge(u ,rev ,0));
	G[v].push_back((int)Edges.size() - 1);
}

inline bool bfs(int s,int t){
	memset(nivel,-1,sizeof nivel);
	nivel[s] = 0;
	queue<int> q;
	q.push(s);
	while(!q.empty()){
		int u = q.front();
		q.pop();
		for(auto &w:G[u])
			if(nivel[Edges[w].v]<0 and Edges[w].flow < Edges[w].c ){
				nivel[Edges[w].v] = nivel[u]+1;
				q.push(Edges[w].v);
			}
	}
	return (nivel[t]>=0);
}

int sendFlow(int s,int t,int flow){
	if(s==t) return flow;
	for(int &i= send[s];i< (int)G[s].size(); i++){
		int e = G[s][i];
		if(nivel[Edges[e].v]==(nivel[s]+1) and Edges[e].flow<Edges[e].c){
			int curr_flow = min(flow, Edges[e].c - Edges[e].flow);
			if(int a = sendFlow(Edges[e].v, t, curr_flow)){
				Edges[e].flow += a;
				Edges[e^1].flow -=a;
				return a;
			}
		}
	}
	return 0;
}
inline int Dinic(int s, int t){
	int mf=0;
	while(bfs(s,t)){
		memset(send,0,sizeof send);
		while(int flow = sendFlow(s, t, INT_MAX))
			mf+= flow;
	}
	return mf;
}
int main(){
	int N,M,s=202,t=203;
	scanf("%d",&N);
	vector<int> B(N);
	for(auto &a:B)
		scanf("%d",&a);
	scanf("%d",&M);
	vector<int> G(M);
	for(auto &g:G)
		scanf("%d",&g);
	for(int i=0;i<N;i++)
		add_Edge(s,i,1);
	for(int j=0;j<M;j++)
		add_Edge(j+N,t,1);
	for(int i=0;i<N;i++)
		for(int j=0;j<M;j++)
			if(abs(G[j]-B[i])<=1)
				add_Edge(i,j+N,1);
	printf("%d\n",Dinic(s,t));
}