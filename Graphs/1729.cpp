#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
		  ios_base::sync_with_stdio(0);
		  cin.tie(0);
		  cout.tie(0);
		  int n,t;
		  cin>>n>>t;
		  int a[n];
		  for(int i=0;i<n-1;i++)
		  {
		  	cin>>a[i];
		  }
		  
		  int k=0;
		  n--;
		  	
		  while(true)
		  {
		  	
		  	if(k+a[k]==(t-1))
		  	{
		  		cout<<"YES\n";
		  		return 0;
			  }
			k=(k+a[k]);
			if(k>(t-1))
			{
				cout<<"NO\n";
				return 0;
			}
		  	
		  	
		  }
		  
		  
		  //	cout<<"NO\n";
		  
		  



return 0;
}
