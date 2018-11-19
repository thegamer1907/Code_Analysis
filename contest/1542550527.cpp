#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	string password;
	cin>>password;
	
	int n;
	cin>>n;
	
	string a[100];
	for(int i=0;i<n;i++)	cin>>a[i];
	
	int flag_0=0,flag_1=0;
	for(int i=0;i<n;i++)
	{
		if(password==a[i])	flag_1=flag_0=1;	
		
		if(password[0]==a[i][1])	flag_0=1;
		
		if(password[1]==a[i][0])	flag_1=1;
		
		if(flag_0 && flag_1)	break;
	}
	int flag=(flag_0 && flag_1);
	if(flag)	cout<<"YES"<<endl;
	else	cout<<"NO"<<endl;
}
 		    	  	    	 	    			 		  	