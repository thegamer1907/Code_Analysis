#include<bits/stdc++.h>
using namespace std;
string s;
int main()
{
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='Q'||s[i]=='H'||s[i]=='9')
		{
			cout<<"YES";
			return 0;
		}
	}
	cout<<"NO";
	return 0;
}