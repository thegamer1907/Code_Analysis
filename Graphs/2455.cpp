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
	int n;
	cin >> n;
	vector<int> v[n+1];

	for ( int i = 2; i <= n; i++ )
	{
		int index;
		cin >> index;
		v[index].pb(i);
	}
	int color[n+1];
	int inicolor[n+1];

	color[0]=0;
	inicolor[0] =0;
	for ( int i = 1; i <= n; i++ )
	{
		cin >> color[i];
		inicolor[i]=0;
	}
	int ans = 0;

	queue<int> q;
	q.push(1);
	int x = 1;

	while(q.size()!=0)
	{
		x = q.front();
		q.pop();

		if ( inicolor[x] != color[x])
		{
			inicolor[x] = color[x];
			ans ++;
		}
		for(int i=0;i<v[x].size();i++)
		{
			q.push(v[x][i]);
			inicolor[v[x][i]] = inicolor[x];	
		}
	}
	cout << ans << endl;

}