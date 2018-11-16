#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <algorithm>

#define N 1000000
#define INF 100000000000000
#define MOD 1000000007
#define LL long long int
using namespace std;

vector<int> g[N];
int col[N],ANS=0;

void dfs(int node,int prnt,int currcol) {
	if (col[node]!=currcol) {
		ANS++;
		currcol=col[node];
	}
	for (auto it:g[node]) if (it!=prnt) {
		dfs(it,node,currcol);
	}
}
int main() {
	int n,i,reach=0,m,x,y;
	cin >> n;
	for (i=2;i<=n;i++) {
		cin >> x;
		g[x].push_back(i);
		g[i].push_back(x);
	}
	for (i=1;i<=n;i++) cin >> col[i];	
	dfs(1,-1,0);
	cout << ANS << '\n';
	return 0;
}
