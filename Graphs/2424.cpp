#include <bits/stdc++.h>

using namespace std;

#define WAIT cout << flush,system("pause");
#define TRUE 1
#define FALSE 0

typedef pair<int, int> ii;
typedef vector<int> vi;
typedef long long ll;

vector <int> adj[2010];
int jer[2010];
vi roots;
int d[2010];


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int n;
	cin >> n;
	
	for(int i = 1; i <= n; ++i)
		cin >> jer[i];
	
	int x;
	for(int i = 1; i <= n; ++i){
		x = jer[i];
		if(x > 0)
			adj[x].push_back(i);
		else
			roots.push_back(i);
	}
	
	int maxi = 0,s = 0;
	for(int i = 0; i < roots.size(); ++i){
		
		queue<int> q;
		memset(d,-1,sizeof(d));
		s = roots[i];
		d[s] = 0;
		q.push(s);
		
		int u,v;
		while(!q.empty()){
			u = q.front(); q.pop();
			
			for(int j = 0; j < adj[u].size(); ++j){
				v = adj[u][j];
				if(d[v] == -1){
					d[v] = d[u] + 1;
					maxi = max(maxi,d[v]);
					q.push(v);
				}	
				
			}
		}
		
	}
	
	cout << maxi + 1 << '\n';
	

	//WAIT
}



