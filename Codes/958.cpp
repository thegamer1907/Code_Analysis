#include<bits/stdc++.h>
using namespace std;
long long n,m,k,i,j,ans,sum,dp[100009],dp1[100009],l,r,p;
string s;
int main()
{
	
	cin>>n>>k>>s;
	
	for(i=1;i<=n;i++)
	{
		if(s[i-1]=='b')dp[i]++;
		else
		dp1[i]++;
		dp1[i]+=dp1[i-1];
		dp[i]+=dp[i-1];
		
	}
	
	l=0;
		for(r=1;r<=n;r++)
		{
			
			p=min(dp[r]-dp[l],dp1[r]-dp1[l]);
			
			while(p>k)
			{
				l++;
				p=min(dp[r]-dp[l],dp1[r]-dp1[l]);
		
			}
			
			if(r-l>ans)ans=r-l;
			
		}
	
	cout<<ans<<endl;
	return 0;
}