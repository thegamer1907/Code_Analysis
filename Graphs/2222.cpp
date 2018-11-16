#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define pb push_back
#define INF ll_MAX/10
#define x first
#define y second
typedef long long ll;
typedef pair<ll,ll> PII;

vector<int> g[2007];
vector<int> su;
bool visited[2007];
int n, h, mh;

void dfs(int i){
	visited[i] = true;
	h++;
	if ( h > mh )	mh = h;
	for ( auto nbr : g[i] ){
		if ( !visited[nbr] )
			dfs(nbr);
	}
	h--;
}

int main(){
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    	
    int m;
    cin >> n;
    for ( int i = 1 ; i <= n ; i++ ){
    	cin >> m;
    	if ( m == -1 )
    		su.pb(i);
    	else g[m].pb(i);
    }

    mh = INT_MIN;
    for ( auto i : su ){
    	// apply dfs from here
    	h = 0;
    	dfs(i);

    }   

    cout << mh << endl;

    return 0;
}


