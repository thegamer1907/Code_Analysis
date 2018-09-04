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

		long long n,k;
		cin>>n>>k;
		long long temp=pow(2,n);
		while(temp>k)
		{
			temp=pow(2,n)-pow(2,n-1);
			if(k>temp) k=k-temp;
			n--;
		}
		//cout<<temp<<'\n';
		
		if(k%2!=0)
		{
			cout<<1;
			return 0;
		}
		long long t=2;
		long long count=2;
		//cout<<k<<'\n';
		while(1)
		{
			if(log2(k+t)-(long long)log2(k+t) == 0)
			{
				cout<<count;
				return 0;
			}
			t*=2;
			count++;
		}
		return 0; 
	}