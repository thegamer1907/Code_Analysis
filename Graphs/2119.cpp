#include <iostream>
#include <queue>
using namespace std;

const int MAXN=10001;
bool vis[MAXN];
int level[MAXN];

int n,m;

void bfs(){
	queue<int> q;
	level[m]=1e7;
	q.push(n);
	while(!q.empty()){
		int cur=q.front();
		vis[cur]=true;
		q.pop();
		if(cur>m){
			level[m]=min(level[m],level[cur]+cur-m);
			continue;
		}
		else if(cur==m)
			break;

		if(!vis[cur-1] && cur){
			level[cur-1]=level[cur]+1;
			q.push(cur-1);
		}

		if(2*cur<=m && !vis[2*cur]){
			level[2*cur]=level[cur]+1;
			q.push(2*cur);
		}
		else if(2*cur>=m){
			level[m]=min(level[m],level[cur]+2*cur-m+1);
			//cout<<"fml "<<2*cur<<endl;
		}
		//cout<<cur<<endl;
	}
}

int main(){
	cin>>n>>m;
	bfs();
	cout<<level[m]<<endl;
}
