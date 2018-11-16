#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, t;
	cin>>n>>t;
	char s[n+1];
	cin>>s;
	for(int i=0;i<t;i++)
	{
		int k=0;
		for(int j=1;j<n;j++)
		{
			if(k==1 && s[j]=='G')
			{
				continue;
			}
			else
			{
				k=0;
			}
			if(s[j-1]=='B' && s[j]=='G')
			{
				s[j-1]='G';
				s[j]='B';
				k=1;
			}
		}
	}
	cout<<s<<endl;	
}