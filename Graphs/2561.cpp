#include<bits/stdc++.h>
using namespace std;
vector<int>v[100001];
int par[100001];
int color[100001];
int main()
{
	int n; cin>>n;
	for(int i=2;i<=n;i++)
	{
		int x; cin>>x;
		par[i]=x;
	}

	for(int i=1;i<=n;i++)
	{
		cin>>color[i];
	}
	color[0]=0;
	int ans=0;
	for(int i=1;i<=n;i++)
	{
		if(color[i]!=color[par[i]])
		{
			ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
}