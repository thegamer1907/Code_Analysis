
#include <bits/stdc++.h>
using namespace std;
#define LL long long int
#define pii pair<int,int>
#define ff first
#define ss second
#define pb push_back
const int maxN = 30123;
int n,t;
vector<int> graph[maxN];
int visisted[maxN];


void bfs(){

	stack<int> st;
	st.push(0);

	while(st.size()){
		int v = st.top(); st.pop();
		if(visisted[v]) continue;
		visisted[v] = 1;
		for(int i = 0; i<graph[v].size(); i++){
			st.push(graph[v][i]);
		}
	}
}
int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(0);

	cin>>n>>t; t--;
	for(int i = 0; i<n-1; i++){
		int a; cin>>a;
		graph[i].pb(i+a);
	}

	memset(visisted,0,sizeof(visisted));
	bfs();

	if(visisted[t]) cout<<"YES"<<endl;
	else 			cout<<"NO"<<endl;
	return 0;
}
