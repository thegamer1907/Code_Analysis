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

int C[N];
set<int> adj[N];

int main() {

	boost;
	int n, m; cin>>n>>m;
	for(int i=1; i<=n; i++) {
		cin>>C[i];
		adj[C[i]].insert(C[i]);
	}
	while(m--) {
		int a, b; cin>>a>>b;
		if(C[a] == C[b]) continue;
		adj[C[a]].insert(C[b]);
		adj[C[b]].insert(C[a]);
	}

	int p = -1, mx = -1;
	for(int i=1; i<N; i++) {
		if((int) adj[i].size() > mx) {
			mx = adj[i].size();
			p = i;
		}
	}
	cout<<p<<"\n";
	
	return 0;
}