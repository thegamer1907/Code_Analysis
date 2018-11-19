#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <assert.h>
#include <cstring>
#include <iomanip>
#include <deque>

#define LL long long int
#define N 2005
#define INF 1000000000
#define MOD 1000000007
using namespace std;

int n,m,vis[N][N],ans[N][N],i,j,r,c,x,y,dx[4]={0,0,1,-1},dy[4]={1,-1,0,0};
string v[N];

bool in(int x,int y) {
	return x<=n && x>=1 && y<=m && y>=1 && v[x-1][y-1]!='*' && !vis[x][y];
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	string t,s;
	int n,fi=0,sec=0,got=0;
	cin >> t;
	cin >> n;
	for (i=0;i<n;i++) {
		cin >> s;
		if (s[0]==t[0] && s[1]==t[1]) got++;
		if (s[0]==t[1]) fi++;
		if (s[1]==t[0]) sec++; 
	}
	if (got || (fi && sec)) cout << "YES\n";
	else cout << "NO\n";
	return 0;
}
