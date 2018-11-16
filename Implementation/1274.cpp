#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,t;
	cin>>n>>t;
	string s;
	cin>>s;
	for(int i=0;i<t;i++)
	{
		int j=0;
		while(j<s.size()-1)
		{
			if(s[j]=='B'&&s[j+1]=='G')
			{
				s[j]='G';
				s[j+1]='B';
				j+=2;
			}
			else
				j++;
		}
	}
	cout<<s<<endl;

    return 0;
}