#include<iostream>
#include<string>
using namespace std;
int main()
{  int n,m=0,k=0,j=0;
string s,s1;
cin>>s;
cin>>n;
for(int i=1;i<=n;i++)
{
	cin>>s1;
	if(s1==s)
		k++;
	else 
		{if(s1[0]==s[1])
		m++;
	 if(s1[1]==s[0])
		 j++;}
}
 if((j>=1&&m>=1)||k>=1)
cout<<"YES";
 else 
	 cout<<"NO";
return 0;
}