#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define mod 1000000007
#define pb push_back
#define pi pair<int,int>
#define vi vector<int>
#define vpi vector< pi > 
int main()
{
	int n,k,x,y,z=0;
	cin>>n>>k;
	if(n==1)
	{
		while(k--)
		{
			cin>>y;
			if(y==1)
			{
				cout<<"NO";
				return 0;
			}
		}
		cout<<"YES";
		return 0;
	}
	bool vis[25]={false};
	for(int i=1;i<=n;i++)
	{
		x=0;
		for(int j=0;j<k;j++)
		{
			cin>>y;
			if(y)
				x=x|(1<<j);

		}
		if(x!=0)
			z=1;
		vis[x]=true;

	}
	if(z==0)
	{
		cout<<"YES";
		return 0;
	}
	for(int i=0;i<=20;i++)
	{
		for(int j=0;j<=20;j++)
		{//if(vis[i]&&vis[j])
			//cout<<i<<" "<<j<<"\n";
			if(vis[i]&&vis[j]&&i!=j&&((i&j)==0))
			{
				cout<<"YES";
				return 0;
			}
		}
	}
	cout<<"NO";

	return 0;
}