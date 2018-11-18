#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n,k;
	int vis[20];
	cin>>n>>k;
	memset(vis,0,sizeof vis);
	for(int i=1;i<=n;i++)
	{
		int state=0;
		for(int j=1;j<=k;j++)
		{
			int x;
			cin>>x;
			state+=(1<<(j-1))*x;
		}
		vis[state]=1;
	}
	int f=0;
	for(int i=0;i<16;i++)
	{
		for(int j=0;j<16;j++)
		{
			if(vis[i]==0||vis[j]==0)continue;
			if((i&j)==0)
			{
				f=1;
				break;
			}
		}
		if(f)break;
	 } 
	 if(f)cout<<"YES"<<endl;
	 else cout<<"NO"<<endl;
	
}