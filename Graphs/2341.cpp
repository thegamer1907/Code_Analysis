#include<bits/stdc++.h>

using namespace std;

#define forn(i,n) for ( int i=0 ; i < n ; i++ )
#define all(a) (a).begin(), (a).end()
#define lb lower_bound
#define ub upper_bound
#define pii pair<int, int>
#define mp make_pair
#define pb push_back
#define ll long long
#define lli long long int
#define ull unsigned long long
#define endl '\n'

//int ans=0;
vector<bool> visited(100);


void addEdge(vector<int> g[],int a,int b){
	g[a].push_back(b);
	//g[b].push_back(a);
	return ;
}

int depth(vector<int> g[],int r){
	int final=0;
	forn(i,g[r].size())
		final=max(final,depth(g,g[r][i]));
	return final+1;
}

int dfs(vector<int> roots,vector<int> g[],int n){
	int ans=0;
	vector<bool> visited(n+1,false);
	forn(i,roots.size()){
		ans=max(ans,depth(g,roots[i]));
	}
	return ans;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	vector<int> g[n+1];
	vector<int> roots;
	int b;
	forn(i,n){
		cin >> b;
		if(b==-1)
			roots.pb(i+1);
		else
			addEdge(g,b,i+1);
	}

	cout << dfs(roots,g,n);

}
