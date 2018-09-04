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

	    
	   int n,l;
	   cin>>n>>l;
	   double arr[n];
	   for(int i=0;i<n;i++) cin>>arr[i];

		sort(arr,arr+n);
		double maxi=0.0;
		maxi=arr[0];
		if(arr[n-1]!=l) maxi=max(maxi,l-arr[n-1]);

		for(int i=1;i<n;i++) maxi=max(maxi,(arr[i]-arr[i-1])/2);

		cout<<fixed<<setprecision(10)<<maxi;
		return 0; 
	}