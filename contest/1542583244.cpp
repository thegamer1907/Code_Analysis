#include <iostream>

using namespace std;

int main()
{
	string s;
	cin>>s;
	int n,i,c=0,d=0;
	cin>>n;
	string s1[n+2];
	for(i=0;i<n;i++)
	{
		cin>>s1[i];
	}
	for(i=0;i<n;i++)
	{
		if(s==s1[i])
		{
			cout<<"YES\n";
			return 0;
		}
		if(s[0]==s1[i][1])
		{
			c=1;
		}
		if(s[1]==s1[i][0])
		{
			d=1;
		}
		if(c==1 && d==1)
		{
			cout<<"YES\n";
			return 0;
		}
	}

	cout<<"NO\n";
	return 0;

}