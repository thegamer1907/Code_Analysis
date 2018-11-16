#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int i,j,n,k,l;
	i=s.find("AB");
	j=s.find("BA");
	
	if (i==-1 || j==-1)
	{
		cout<<"NO";
		return 0;
	}
	n=s.size();
	k=s.find("ABA");
	l=s.find("BAB");
	if (k!=-1 && l!=-1)
	{
		if (l>k)
		{
			s.erase(k,3);
		i=s.find("AB");
		j=s.find("BA");
		if (i!=-1 || j!=-1) {cout<<"YES";return 0;}
		else {cout<<"NO";return 0;}
		}
		else
		{
		s.erase(l,3);
		i=s.find("AB");
		j=s.find("BA");
		if (i!=-1 || j!=-1) {cout<<"YES";return 0;}
		else {cout<<"NO";return 0;}	
		}
	}
	if (k!=-1)
	{
		s.erase(k,3);
		i=s.find("AB");
		j=s.find("BA");
		if (i!=-1 || j!=-1) {cout<<"YES";return 0;}
		else {cout<<"NO";return 0;}
		}
	if (l!=-1)
	{
		s.erase(l,3);
		i=s.find("AB");
		j=s.find("BA");
		if (i!=-1 || j!=-1) {cout<<"YES";return 0;}
		else {cout<<"NO";return 0;}
	}	
	if(i>j) 
	{
		if(i-j==1)
		{
			s.erase(j,1);
			j=s.find("BA");
			if(j==-1) {cout<<"NO"; return 0;}
			else {cout<<"YES";return 0;}
		}
		else {cout<<"YES";return 0;}	
	}
	else
	{
		if(j-i==1)
		{
			s.erase(i,1);
			i=s.find("AB");
			if(i==-1) {cout<<"NO"; return 0;}
			else {cout<<"YES";return 0;}
		}
		else {cout<<"YES";return 0;}
	}	
	return 0;
}