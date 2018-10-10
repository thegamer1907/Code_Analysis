#include<bits/stdc++.h>
using namespace std;

int n,x,m,i,j,ans,sum,l,r,mas[10000009],fix[10000009],dp[10000009];

int main()
{
	scanf("%d",&n);
	
	
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x);

		
		fix[x]++;
	}
	
	for(i=2;i<=10000000;i++)
	{
		if(mas[i]==0)
		{
			
			for(j=i;j<=10000000;j+=i)
			{
	
	mas[j]=1;
	
	dp[i]+=fix[j];
	//	if(fix[j]>0)
//cout<<i<<" "<<j<<" "<<dp[i]<<" "<<fix[j]<<endl;
			}
			
		}
		
		
	}
	dp[1]=0;
	for(i=2;i<=10000000;i++)
	{
		dp[i]=dp[i]+dp[i-1];
	}
	
	scanf("%d",&m);


while(m--)
{
	scanf("%d",&l);
		scanf("%d",&r);


	
	if(l>10000000)l=10000000;
	if(r>10000000)r=10000000;
	
	cout<<dp[r]-dp[l-1]<<endl;
}

	return 0;
}