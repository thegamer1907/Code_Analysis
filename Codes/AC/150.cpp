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
		
		int n;
		cin>>n;
		int arr[n];
		int sum=0;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			sum+=x;
			arr[i]=sum;
		}
		int m;
		cin>>m;
		for(int i=0;i<m;i++)
		{
			int x;
			cin>>x;
			int f = lower_bound(arr,arr+n,x)-arr;
			cout<<f+1<<'\n';
		}
		return 0; 
	}