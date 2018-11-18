#include<cstdlib>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<cmath>
#include<iostream>
using namespace std;

int main()
{
	int ans = 0, ant = 0;
	int n;
	string a;
	string s;
	cin>>s>>n;
	while(n--)
	{
		cin>>a;
		if(a == s)
		{
			cout<<"YES"<<endl;
			return 0;
		}
		if(a[0] == s[1])  ans++;
		if(a[1] == s[0]) ant++;
	}
	if(ans >= 1 && ant >= 1)
	{
		cout<<"YES"<<endl;
		return 0;
	}
	else
	{
		cout<<"NO"<<endl; 
		return 0;
	}
}
  	 		 	  				 	  		  	  			 		