/*input
			James Bond OO7

	*/				 
	#include <bits/stdc++.h>
	#define mod 1000000007
	using namespace std;
	
	int main()
	{
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);

		#ifndef ONLINE_JUDGE
	    // for getting input from input.txt
	    freopen("C:/Users/Arpan/Desktop/input.txt", "r", stdin);
	    // for writing output to output.txt
	    freopen("C:/Users/Arpan/Desktop/output.txt", "w", stdout);
		#endif

	    int n,k;
	    cin>>n>>k;
	   	int dp[100001]={0};
	   	int arr[n];
	   	int count=0;
	   	for(int i=0;i<n;i++)
	   	{
	   		cin>>arr[i];
	   		dp[arr[i]]++;
	   		if(dp[arr[i]]==1) count++;
	   	}
	   	int ans[n];
	   	for(int i=0;i<n;i++)
	   	{
	   		ans[i]=count;
	   		dp[arr[i]]--;
	   		if(dp[arr[i]]==0) count--;
	   	}
	   	while(k--)
	   	{
	   		int x;
	   		cin>>x;
	   		cout<<ans[x-1]<<'\n';
	   	}

		return 0; 
	}