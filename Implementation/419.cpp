#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k,i,n,a[1000],m=0,b;
	cin>>n>>k;
	for(i=1;i<=n;i++)
	  cin>>a[i];
	  for(i=1;i<=n;i++){
	  	if(i==k) b=a[i];		  
	  	         
	  	       }
				  for(i=1;i<=n;i++)
				         {
						 if(a[i]>=b)  
						       if(a[i]!=0) m++;
							   }
	cout<<m; 
	   return 0;
}
