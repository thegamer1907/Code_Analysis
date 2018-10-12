    #include<bits/stdc++.h>
    #define endl '\n'
    using namespace std;
     
    int findLCS(int a[], int n, int b[], int m)
    {
    	int dp[n+1][m+1];
     
    	for(int i=0;i<=n;i++)
    	{
    		for(int j=0;j<=m;j++)
    		{
    			if(i==0||j==0)
    			dp[i][j]=0;
    			else if(a[i-1]==b[j-1])
    			dp[i][j]=dp[i-1][j-1]+1;
    			else
    			dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
    		}
    	}
    	//cout<<dp[n][m]<<" is "<<endl;
    	return dp[n][m];	
    }
     
    int main()
    {
    	int n,m;
    	cin>>n>>m;
     
    	int top=1;
    	map<string,int> mp;
     
    	int a[n],b[m];
     
    	for(int i=0;i<n;i++)
    	{
    		string s;
    		cin>>s;
    		//cout<<s<<" is the string and mp is "<<mp[s]<<endl;
    		if(!mp[s])
    		mp[s]=top++;
     
    		a[i]=mp[s];
    	}
     
    	for(int i=0;i<m;i++)
    	{
    		string s;
    		cin>>s;
    		//cout<<s<<" is the string and mp is "<<mp[s]<<endl;
    		if(!mp[s])
    		mp[s]=top++;
     
    		b[i]=mp[s];
    	}
     
    	// for(int i=0;i<n;i++)
    	// cout<<a[i]<<" ";
    	// cout<<endl;
     
    	// for(int i=0;i<m;i++)
    	// cout<<b[i]<<" ";
    	// cout<<endl;
     
    	int lcs = findLCS(a,n,b,m);
    	n-=lcs;
    	m-=lcs;
    	//cout<<"lcs is "<<lcs<<endl;
    	if(lcs&1)
    	n>=m ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    	else
    	n<=m ? cout<<"NO"<<endl : cout<<"YES"<<endl;
    	return 0;
    }