#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;

	char current=s[0];
	int count=1;

	for (int i = 1; i < s.length(); ++i)
	{
		if(s[i]==current)
		{
			if(++count>=7)
			{
				cout<<"YES"<<endl;
				return 0;
			}
		}
		else
		{
			count=1;
			current=s[i];
		}
	}
	cout<<"NO"<<endl;
	return 0;
}