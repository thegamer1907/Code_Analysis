#include<bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(NULL); cin.tie(false);
int main()
{
	int n,i=0,j,t,k;
	cin>>n>>t;
	string s;
	cin>>s;
	for(k=0;k<t;k++)
	{
		i=0;
		while(s[i]!='\0')
		{
			if(s[i]=='B' && s[i+1]=='G')
			{
				s[i]='G';
				s[i+1]='B';
				i=i+2;
			}
			else
			i++;
		}
	}
	cout<<s;
}