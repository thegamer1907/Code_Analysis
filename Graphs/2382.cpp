#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pii;
typedef vector<ll> vi;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	cin>>n;
	vector<vi> g(n+1);
	vi p(n+1);
	vi depth(n+1,0);
	queue<int> q;
	for(int i=1;i<=n;i++){
		cin>>p[i];
		if(p[i]!=-1){
			g[p[i]].push_back(i);
		}
		else q.push(i);
	}
	while(!q.empty()){
		int x=q.front();
		q.pop();
		for(int i=0;i<g[x].size();i++){
			depth[g[x][i]]=depth[x]+1;
			q.push(g[x][i]);
		}
	}
	cout<<*max_element(depth.begin(),depth.end())+1<<endl;
	return 0;
}