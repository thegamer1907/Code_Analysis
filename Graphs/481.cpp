#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,t;
	cin>>n>>t;
	if((n>=1&&n<=50)&&(t>=1&&t<=50))
	{
		string s;
		cin>>s;
		while(t--)
		{
			for(int i=1;i<s.length();i++)
			{
				if(s[i]=='G'&&s[i-1]=='B')
				{
					s[i]='B';
					s[i-1]='G';
					i++;
				}
			}
		}
		cout<<s;
	}
}