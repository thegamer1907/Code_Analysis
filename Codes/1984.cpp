#include<bits/stdc++.h>
#define ll  long long
using namespace std;
map<int,ll> dp[5];
int a[200005];

int main()
{
	int n,k;cin>>n>>k;
	ll ans=0;
	for(int i=1;i<=n;i++)
	{
		//cin>>a[i];
		scanf("%d",&a[i]);
	}
	
		for(int j=1;j<=n;j++)
		{
			int tmp=a[j]/k;
			if(a[j]%k==0){
			dp[3][a[j]]+=dp[2][tmp];
			dp[2][a[j]]+=dp[1][tmp];
		   }
		   dp[1][a[j]]++;
		}
	//cout<<1<<endl;
	map<int,ll>::iterator it=dp[3].begin();
	for(;it!=dp[3].end();it++)
	{
		ans+=(*it).second;
	}
	cout<<ans<<endl;
}