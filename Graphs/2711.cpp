#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll oo = 1e18;
ll dist[100005],parent[100005];
int n , m;
bool vis[100005];
vector< pair<int,int> > g[100005];

int main() {
	cin >> n >> m;
	for(int u,v,w,i = 0 ; i < m ; ++i){
		scanf("%d%d%d",&u,&v,&w);
		g[u].push_back(make_pair(v,w));
		g[v].push_back(make_pair(u,w));
	}
	for(int i = 1 ; i <= n ; ++i)dist[i]=oo;
	priority_queue< pair< ll ,int > > q;
	dist[1]=0;
	q.push(make_pair(-dist[1],1));
	while(q.size()>0){
		pair<ll,int> src = q.top();
		q.pop();
		if(vis[src.second])continue;
		vis[src.second] = 1;
		for(int i = 0 ; i < g[src.second].size();++i){
			pair<int,int> v = g[src.second][i];
			if(dist[src.second]+v.second < dist[v.first]){
				dist[v.first] = v.second + dist[src.second];
				parent[v.first] = src.second;
				q.push(make_pair(-dist[v.first],v.first));
			}
		}
	}
	if(vis[n]==false){
		puts("-1");
		return 0;
	}
	int cur = n;
	vector<int> path;
	while(true){
		path.push_back(cur);
		if(cur==1)break;
		cur = parent[cur];
	}
	reverse(path.begin(),path.end());
	for(int i = 0 ;i < path.size();++i){
		if(i)printf(" ");
		printf("%d",path[i]);
	}
	puts("");
	return 0;
}