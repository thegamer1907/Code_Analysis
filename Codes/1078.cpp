/*input
			James Bond OO7

	*/				 
	#include <bits/stdc++.h>
	#define mod 1000000007
	using namespace std;
	
	string temp="";
	void dfs(int r, vector<string>&s, string arr[],bool flag[])
	{	
		flag[r]=1;
		temp=s[r];
		int index=-1;
		for(int i=r+1;i<s.size();i++)
		{
				if(s[r]==arr[i])
				{
					index=i;
					break;
				}
		}
		//cout<<index<<" ";
		if(index!=-1 && !flag[index])
		{
			
			dfs(index,s,arr,flag);

			
		}
	}
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

		long long n,d;
		cin>>n>>d;

		vector<pair<long long,long long> >arr;
		for(int i=0;i<n;i++)
		{
			long long m,s;
			cin>>m>>s;
			arr.push_back(make_pair(m,s));
		}
		sort(arr.begin(),arr.end());
		bool flag=0;
		long long ans=0;
		long long sum=0;
		int prev=0;
		for(int i=0;i<n;i++)
		{
			int j=prev;
			if(i>0) sum-=arr[i-1].second;
			for(j=prev;j<n;j++)
			{
				if(arr[j].first-arr[i].first>=d) 
				{
					prev=j;
					break;
				}
				sum+=arr[j].second;
			}
			ans=max(ans,sum);
			if(j==n) break;
		}
		cout<<ans;
		return 0; 
	}