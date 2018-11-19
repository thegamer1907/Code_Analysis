#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
		  ios_base::sync_with_stdio(0);
		  cin.tie(0);
		  cout.tie(0);
		  
		  string mu;
		  cin>>mu;
		  int n;
		  cin>>n;
		  int ok=0;
		  string ku[n];
		  for(int i=0;i<n;i++)
		  {
		  	cin>>ku[i];
		  	if(ku[i]==mu || ku[i][0]==mu[1] && ku[i][1]==mu[0])
		  	  ok=1;
		  	
		  }
		  for(int i=0;i<n;i++)
		  {
		  	
		  	for(int  j=0;j<n;j++)
		  	{
		  		if(ku[i][1]==mu[0] && ku[j][0]==mu[1])
		  		{
		  			ok=1;
		  		
				  }
		  		
			  }
		  	if(ok==1)
		  	{
		  		cout<<"YES\n";
		  		return 0;
		  		
			  }
		  	
		  }
		  
		  cout<<"NO\n";;
		  
		  



return 0;
}
