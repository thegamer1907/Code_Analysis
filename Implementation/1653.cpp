#include<iostream>
using namespace std;

int main()
{
	string s;
	cin>>s;
	
	int conti;
	for(size_t i = 0;i<s.size();i++)
	{
		
		if(s[i] == s[i-1])
		{    conti += 1;
			  if(conti == 7)
			  {
			  	cout<<"YES"<<endl;
			  	return 0;
			  }
			 
		}
		 else
			  {
			  	conti = 1;
			  }
			  
	}
	cout<<"NO"<<endl;
	
}
