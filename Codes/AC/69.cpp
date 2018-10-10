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

	    long long arr[n];
	    for(int i=0;i<n;i++) cin>>arr[i];

	    for(int i=1;i<n;i++) arr[i]+=arr[i-1];

	    long long ans=0;

	    if(arr[n-1]%3==0)
	    {
	    	long long a1 = arr[n-1]/3;
	    	long long b1 = 2*a1;

	    	long long count=0;
	    	for(int i=0;i<n-1;i++)
	    	{
	    		if(arr[i]==b1) ans+=count;
	    		if(arr[i]==a1) count++;
	    	}
	    }
	    cout<<ans;
		return 0;
	}