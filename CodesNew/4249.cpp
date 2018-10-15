#include<iostream>
using namespace std;
string a(string s)
{
	string str;
	for(int i=0;i<s.size()-1;i++)
	{
		str+=s[i];
	}
	return str;
}
string eshterak (string a,string b)
{
	string s;
	int m;
	if(a.size()>b.size())
	{
		m=b.size();
	}
	else
	{
		m=a.size();
	}
	for(int i=0;i<m;i++)
	{
		if(a[i]==b[i])
		{
			s+=a[i];
		}
		else
		{
			return s;
		}
	}
	return s;
}
int main()
{
	int n;
	cin>>n;
	string h[n];
	for(int i=0;i<n;i++)
	{
		cin>>h[i];
	}
	for(int i=n-2;i>=0;i--)
	{
		while(h[i]>h[i+1])
		{
			//h[i]=h[i].substr(0,h[i].size()-1);
			h[i]=eshterak(h[i],h[i+1]);
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<h[i]<<endl;
	}
	return 0;
}
