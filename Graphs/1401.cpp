#include <cstdio>
#include <cmath>
#include <iostream>
#include <set>
#include <algorithm>
#include <vector>
#include <map>
#include <cassert>
#include <string>
#include <cstring>
#include <queue>

using namespace std;

#define rep(i,a,b) for(int i = a; i < b; i++)
#define S(x) scanf("%d",&x)
#define S2(x,y) scanf("%d%d",&x,&y)
#define P(x) printf("%d\n",x)
#define all(v) v.begin(),v.end()
#define sz size()

typedef long long int LL;
typedef pair<int, int > pii;
typedef vector<int > vi;

int A[30005];
bool vis[30005];

void dfs(int c) {
	if(vis[c]) return;
	vis[c] = true;
	dfs(c+A[c]);
}

int main() {
	int n,t;
	S2(n,t);
	rep(i,0,n-1) {
		S(A[i+1]);
	}

	dfs(1);

	if(vis[t] ) printf("YES\n");
	else printf("NO\n");

	return 0;

}