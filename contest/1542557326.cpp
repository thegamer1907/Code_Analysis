#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i,j,n;
	string a,b[101];
	cin>>a;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>b[i]; 
	} 
	int flag=0,flag1=0;
	for(i=0;i<n;i++)
	{
		if(a==b[i])
		{
			cout<<"YES"<<endl;return 0;
		}
		else if(a[0]==b[i][1] && a[1]==b[i][0])
		{
			cout<<"YES"<<endl;return 0;
		}
		else if(a[0]==b[i][1]) 
		{
			flag=1;
		}
		else if(a[1]==b[i][0])
		{
			flag1=1;
		}
	}
	if(flag&&flag1)
	{
		cout<<"YES"<<endl;return 0;
	}
	cout<<"NO"<<endl;return 0;
}
  			 	 					    	  	 			  	 		