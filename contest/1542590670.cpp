#include<bits/stdc++.h>
using namespace std;
string s,arr[110];
int main(int argc, char const *argv[])
{
	int n;
	cin>>s;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	bool flag=0;
	for(int i=0;i<n;i++)
	{
		if(s[0]==arr[i][0] && s[1]==arr[i][1])
		{
			flag=1;
		}
		else if(s[0]==arr[i][1])
		{
			for(int i=0;i<n;i++)
			{
				if(s[1]==arr[i][0])
				{
					flag=1;
				}
			}
		}
	}
	if(flag)
		cout<<"YES\n";
	else
		cout<<"NO\n";
	return 0;
}