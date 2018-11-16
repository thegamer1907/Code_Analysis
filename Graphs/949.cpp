#include<bits/stdc++.h>

using namespace std;

bool mark[40002];

class graph{
	int v;
	list<int>*adj;
	public:
		graph(int n){
			this->v = n+1;
			this->adj = new list<int>[n+1];
		}
		void addEdge(int a,int b){
			adj[a].push_back(b);
		}
		
		void dfsUtil(int x){
			mark[x] = 1;
			for(auto i:adj[x]){
				if(!mark[i]){
					dfsUtil(i);
				}
			}
		}
		
		int dfs(int a){
			dfsUtil(1);
			if(mark[a])
				return 1;
			else
				return 0;
		}
		
		
};


int main(){
	int n,t,x;
	cin>>n>>t;
	graph data(n);
	for(int i=1;i<=n-1;i++){
		cin>>x;
		mark[i] = mark[i+1] = 0;
		data.addEdge(i,x+i);
	}
	
	if(data.dfs(t)){
		cout<<"YES";
	}else{
		cout<<"NO";
	}


	return 0;
}
