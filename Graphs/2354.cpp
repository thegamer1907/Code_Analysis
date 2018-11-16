#include <iostream>
#include <vector>
#define MAXN 2005

using namespace std;
typedef long long int lld;

int N, u, ans;
bool visited[MAXN];
vector<int> Graph[MAXN];

int dfs ( int node )
{
	int ret = 0;
	visited[node] = 1;
	for ( auto i : Graph[node] )
		ret = max ( ret, dfs ( i ) );
	return ret + 1;
}

int main ()
{
	cin >> N;
	for ( int i = 1; i <= N; i++ )
		cin >> u, Graph[u].push_back(i);
	for ( int i = 1; i <= N; i++ )
		if ( !visited[i] )
			ans = max ( ans, dfs(i) );
	cout << ans << "\n";
	return 0;
}
