#include<bits/stdc++.h>

using namespace std;
int n,k;
int vis[100];

int main()
{
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		int st=0;
		for(int j=0;j<k;j++)
		{
			int x;cin>>x;
			if(x)st=(st|(1<<j));
		}
		vis[st]=1;
	}

	int ok=0;
	for(int i=0;i<16;i++)
	{
		for(int j=0;j<16;j++)
		{
			if(!vis[i]||!vis[j])continue;
			if((i&j)==0)
			{
				ok=1;
				break;
			}
		}
		if(ok)
			break;
	}
	if(ok)cout<<"YES";
	else cout<<"NO";
}
