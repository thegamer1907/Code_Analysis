#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int n;
	cin>>n;
	int f1=0, f2=0,f3=0, f4=0;
	for(int i=0;i<n;i++)
	{
		string temp;
		cin>>temp;
		if(temp==s)
		{
			f1=1;
		}
		else if(temp[0]==s[1])
		{
			f2=1;
		}
		else if(temp[1]==s[0])
		{
			f3=1;
		}
		if(temp[0]==s[1] && temp[1]==s[0])
		{
			f4=1;
		}
	}
	if(f1 ||(f2 && f3) || f4)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
}