#include <bits/stdc++.h>

using namespace std;
int main() 
{
	int n;
	string s,x;
		cin>>s;
		cin>>n;
	int yes=0,a=0,b=0;
	char l,v;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		if(x==s)
		  yes=1;
		else 
		{
			if(x[1]==s[0])
			 a=1;
			if(x[0]==s[1])
			 b=1;
		}
		
    }
   //cout<<l<<v<<endl;
   
    if(yes==1||(a==1&&b==1))
       cout<<"YES";
    else cout<<"NO";
     
}