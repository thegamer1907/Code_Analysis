
#include <bits/stdc++.h>
using namespace std;
	
int n;
vector<int> v[11234];
int c[11234];

int dfs( int x , int l )
{
	int ret = 0;
	if ( c[x] != l )
	{
		ret++;
		l = c[x];
	}

	int vs = v[x].size();
	for ( int i=0 ; i<vs ; i++ )
	{
		int y = v[x][i];
		ret += dfs( y , l );
	}

	return ret;
}

int main()
{
	cin>>n;
	for ( int i=2 ; i<=n ; i++ )
	{
		int p; cin>>p;
		v[p].push_back(i);
	}
	for ( int i=1 ; i<=n ; i++ )
	{
		int x; cin>>x;
		c[i] = x;
	}

	int ans = dfs( 1 , 0 );
	cout<<ans<<"\n";

	return 0;
}
