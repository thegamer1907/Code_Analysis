#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define vll vector<ll>
#define max_heap priority_queue<int>
#define min_heap priority_queue<int , vector<int>, greater<int> >
#define pb push_back
#define all(container) container.begin(), container.end()

int main()
{
	int n,t;
	cin >> n >> t;
	int array[n];
	int vis[n];

	for ( int i = 0; i < n-1; i++ )
	{
		cin >> array[i];
		vis[i] = 0;
	}
	vis[0] = 1;
	vis[n-1] = 0;
	array[n-1] = 0;
	int j = 0;
	
	while( j < n-1 )
	{
		vis[j+array[j]] = 1;
		j = j + array[j];
	}

	if ( vis[t-1] == 1 )
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}

	return 0;
}