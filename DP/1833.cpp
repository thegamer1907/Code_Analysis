#include <iostream>
using namespace std;
int main ()
{
	int ab=0,ba=0,x=0,y=0;
	string s,t;
	cin>>s;
	t=s;
	if(s.size()<=3)
	{
		cout<<"NO";
		return 0;
	}
	for(int i=0;i<s.size()-2;i++)
	{
		if(s[i]=='A')	
			if(s[i+1]=='B')
				if(s[i+2]=='A')
				{
					x++;
					s[i]=s[i+1]=s[i+2]='z';
				}
		if(s[i]=='B')	
			if(s[i+1]=='A')
				if(s[i+2]=='B')
				{
					y++;
					s[i]=s[i+1]=s[i+2]='z';
				}
	}
	if(y+x>=2)
	{
		cout<<"YES";
		return 0;
	}
	if(x==1 or y==1)
	{
		for(int i=0;i<s.size()-1;i++)
		{
			if(s[i]=='A')
				if(s[i+1]=='B')
				{
					cout<<"YES";
					return 0;
				}
			if(s[i]=='B')
				if(s[i+1]=='A')
				{
					cout<<"YES";
					return 0;
				}
		}
	}
		for(int i=0;i<s.size()-1;i++)
		{
			if(s[i]=='A')
				if(s[i+1]=='B')
				{
					ab++;
					s[i]=s[i+1]='z';
					break ;		
				}
		}
		for(int i=0;i<s.size()-1;i++)
		{
			if(s[i]=='B')
				if(s[i+1]=='A')
				{
					ba++;
					s[i]=s[i+1]='z';
					break ;		
				}
		}
		if(ab>0 && ba>0)
		{
			cout<<"YES";
			return 0;
		}
	cout<<"NO";
	return 0;
}
