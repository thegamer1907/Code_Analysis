/*
     Bad weather forecasts are more often right than good ones.
*/


//#define __USE_MINGW_ANSI_STDIO 0
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout<<#x<<" :: "<<x<<"\n";
#define debug2(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define debug3(x,y,z) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\t"<<#z<<" :: "<<z<<"\n";

#define boost ios::sync_with_stdio(0); cin.tie(0)

#define fi first
#define se second

typedef long long ll;
typedef double ld;
typedef pair<int, int> pii;

const int N = 1e5 + 5;

/***************************************************************************/

int P[N];
vector<int> adj[N];

int dfs(int v, int p) {
	int d = 0;
	for(auto it : adj[v]) {
		if(it == p) continue;
		d = max(d, dfs(it, v));
	}
	return d+1;
}

int main() {

	boost;

	int n; cin>>n;
	for(int i=1; i<=n; i++) {
		cin>>P[i];
		if(P[i] != -1) {
			adj[P[i]].push_back(i);
		}
	}

	int ans = 0;
	for(int i=1; i<=n; i++) {
		if(P[i] == -1) ans = max(ans, dfs(i, 0));
	}
	cout<<ans<<"\n";
	
	return 0;
}