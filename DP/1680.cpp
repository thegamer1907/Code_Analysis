#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	cin>>str;
	int flag = 0;
	for(long long i=0; i<str.size(); i++)
	{
		if(str[i]=='A' && str[i+1]=='B')
		{
			for(long long j=i+2; j<str.size(); j++)
			{
				if(str[j]=='B' && str[j+1]=='A')
				{
					flag = 1;
					break;
				}
			}
		}
		else if(str[i]=='B' && str[i+1]=='A')
		{
			for(long long j=i+2; j<str.size(); j++)
			{
				if(str[j]=='A' && str[j+1]=='B')
				{
					flag = 1;
					break;
				}
			}
		}
	}
	if(flag == 0)
	{
		cout<<"NO"<<endl;
	}
	else
	{
		cout<<"YES"<<endl;
	}
	return 0;
}