#include<iostream>
using namespace std;

int main()
{
	int n,i,j,k;
	string pw;
	cin>>pw;
	cin>>n;
	string s[n+5];
	bool pos = false;
	for(i = 1;i<=n;i++)
	{
		cin>>s[i];
		if(s[i] == pw)
		{
			pos = true;
		}
		else if(s[i][0] == pw[1]&&s[i][1] == pw[0])
		{
			pos = true;
		}
	}
	if(pos == false)
	{
		bool b1 = false,b2 = false;
		for(i = 1;i<=n;i++)
		{
			if(s[i][0] == pw[1])
			{
				b2 = true;
			}
			if(s[i][1] == pw[0])
			{
				b1 = true;
			}
		}
		if(b1 == true&&b2 == true)
		{
			cout<<"YES";
		}
		else
		{
			cout<<"NO";
		}
	}
	else
	{
		cout<<"YES";
	}
}