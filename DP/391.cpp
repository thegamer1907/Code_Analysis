#include<bits/stdc++.h>
using namespace std;

int boys[101];
int girls[101];

int main()
{
	int n;
	cin>>n;
	for(int i=0; i<n; ++i)
	{
		int x;
		cin>>x;
		boys[x]++;
	}
	int m;
	cin>>m;
	int ans = 0;
	int g[m];
	for(int i=0; i<m; ++i) cin>>g[i];
	sort(g,g+m);
	for(int i=0; i<m; ++i)
	{
		int gs = g[i];
		if(boys[gs-1] > 0)
		{
			boys[gs-1]--;
			ans++;
		}
		else if(boys[gs] > 0)
		{
			boys[gs]--;
			ans++;
		}
		else if(boys[gs+1] > 0)
		{
			ans++;
			boys[gs+1]--;
		}
	}
	cout << ans <<"\n";
}