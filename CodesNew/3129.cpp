#include <bits/stdc++.h>

using namespace std;

int main(){

	ios_base::sync_with_stdio(false);

	int n,k;
	cin >> n >> k;

	int a[n];

	for(int i=0;i<n;i++)
		cin >> a[i];

	int dp[n];

	int count=k;
	dp[0]=-22;

	for(int i=0;i<n;i++)
		if(a[i]==0 and count>0)
		{
			count--;
		}
		else if(a[i]==0 and count==0)
		{
			dp[0]=i-1;
			break;
		}

	if(dp[0]==-22)
	{
		cout << n << "\n";
		for(int i=0;i<n;i++)
			cout << "1 ";
		return 0;
	}

	int s,max_index=0;

	for(int i=1;i<n;i++)
	{
		if(a[i-1]==0)
		{
			dp[i]=-22;

			s=dp[i-1]+1;

			count=1;

			for(int j=s;j<n;j++)
				if(a[j]==0 and count==0)
				{
					dp[i]=j-1;
					break;
				}
				else if(a[j]==0 and count>0)
					--count;

			if(dp[i]==-22)
				dp[i]=n-1;	
		}
		else
			dp[i]=dp[i-1];

		if(dp[i]-i>dp[max_index]-max_index)
			max_index=i;
	}

	cout << dp[max_index]-max_index+1 << "\n";

	for(int i=0;i<n;i++)
		if(i>=max_index and i<=dp[max_index])
			cout << "1 ";
		else
			cout << a[i] << " ";

}