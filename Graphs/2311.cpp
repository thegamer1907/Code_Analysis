/*input
			James Bond OO7

	*/				 
	#include <bits/stdc++.h>
	#define mod 1000000007
	using namespace std;
	int count1=0;
	int maxi=0;
	vector<vector<int> >v(2001);
	bool flag[2001]={0};
	bool primes[1000001]={0};
	//vector<int>arr;

	long long powermod(long long _a,long long _b,long long _m)
	{long long _r=1;while(_b){if(_b%2==1)_r=(_r*_a)%_m;_b/=2;_a=(_a*_a)%_m;}return _r;}
	long long divi(long long a,long long b){long long x = a;long long y = powermod(b,mod-2,mod);long long res = (x*y)%mod;return res;}
	void prime()
	{
		primes[0]=primes[1]=1;
		for(int i=2;i<=1000000;i++)
		{
			if(!primes[i])
			{
				//arr.push_back(i);
				for(int j=i+i;j<=1000000;j+=i) primes[j]=1;
			}
		}
	}

	void dfs(int r)
	{
		flag[r]=1;
		int l=v[r].size();
		for(int i=0;i<l;i++)
		{
			if(!flag[v[r][i]])
			{
				count1++;
				maxi=max(maxi,count1);
				dfs(v[r][i]);
				count1--;
			}
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

		int n;
		cin>>n;

		

		
		for(int i=1;i<=n;i++)
		{
			int x;
			cin>>x;
			if(x==-1) x=0;
			v[x].push_back(i);
		}
		for(int i=0;i<=n;i++)
		{
			count1=0;
			if(!v[i].empty())
			{
				count1=0;
				dfs(i);
			}	
		}
		cout<<maxi;
		return 0;
	}