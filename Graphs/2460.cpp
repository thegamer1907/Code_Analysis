#include <bits/stdc++.h>

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for(int i = a; i <b; i++)
#define FOR(i,n) for(int i = 0; i < n; i++)

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

int main(){

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    vector<int> g[10005];
    int parent[10005];
    
    for(int i = 2; i <= n; i++){
    	int a;
    	cin >> a;
    	g[a].push_back(i);
    	parent[i] = a;
	}
	
	int col[10005];
	for(int i = 1; i <=n; i++){
		cin >> col[i];
	}
	
	int ans = 0;
	stack<int> s;
	ans++;
	for(int i = 0; i < g[1].size(); i++){
		s.push(g[1][i]);
	}
	while(!s.empty()){
		int i = s.top();
		s.pop();
		if(col[i] != col[parent[i]]){
			ans++;
		}
		for(int j = 0; j < g[i].size(); j++){
			s.push(g[i][j]);
		}
	}
    
    cout << ans <<"\n";
    
	return 0;
}

