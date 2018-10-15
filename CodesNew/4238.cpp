#include <bits/stdc++.h>
using namespace std;

set <int > se;
set <int > ::iterator it;

int main()
{
	int n,maxlen=0,maxi,i,j;
	cin>>n;
	string s[n],s1[n];
	for(i=0;i<n;i++)
		cin>>s[i];
	for(i=n-2;i>=0;i--)
	{
		if(s[i]>s[i+1])
		{
			for(j=0;j<s[i].size();j++)
			{
				if(s[i][j]>s[i+1][j])
				{
					s[i].resize(j);
					break;
				}
			}
		}
	}
	for(i=0;i<n;i++)
		cout<<s[i]<<endl;
	return 0;
}