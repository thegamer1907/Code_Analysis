#include<iostream>
#include<string>
using namespace std;
int main()
{  int x,y=0,z=0,n=0;
string s,d;
cin>>s;
cin>>x;
for(int i=1;i<=x;i++)
{
	cin>>d;
	if(d==s)
		z++;
	else 
		{
			if(d[0]==s[1])
		y++;
	 if(d[1]==s[0])
		 n++;
	}
}
 if((n>=1&&y>=1)||z>=1)
cout<<"YES";
 else 
	 cout<<"NO";
}