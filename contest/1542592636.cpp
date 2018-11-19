#include<bits/stdc++.h>
using namespace std;

string s,ss[110];
int n;

int main()
{
	cin>>s>>n;
	for(int i=0;i<n;i++)
	cin>>ss[i];
	for(int i=0;i<n;i++)
	if(ss[i]==s)
	{
		cout<<"YES";
		return 0;
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(ss[i][1]==s[0]&&ss[j][0]==s[1])
			{
				cout<<"YES";
				return 0;
			}
		}
	}
	cout<<"NO";
}
