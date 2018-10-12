#include<iostream>
using namespace std;

int main()
{
	  
	   int n,m,count=0,f=1;
	
	   cin>>n>>m;
	   string s[n],p[m];
	 
	   for(int i=0;i<n;i++) 
	 	{
		 cin>>s[i];
	    }
	
	   for(int i=0;i<m;i++)
	 	cin>>p[i];	
	 	
	  
	 if(n>m)
	 { f=0;
	  cout<<"YES";
     } 
	 else
	 if(n<m)
	 { f=0;
	   cout<<"NO";
     }
	 
	 else
	 {
	  for(int i=0;i<n;i++)
	   {
	   	  for(int j=0;j<n;j++)
	   	  {
	   	  	  if(s[i]==p[j])
	   	  	  { //cout<<s[i];
	   	  	  	count++;
				   }
	   	  	
			 }
	   }
	 	
	
	 }
	 
	if(count%2==0 && f==1)
	cout<<"NO";
   	
	else
	 if(count%2!=0)
	 cout<<"YES"; 
	  //cout<<count;
	
}
