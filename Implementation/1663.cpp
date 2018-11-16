#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int cnt=0,prev=s[0];
	for(int i=0;i<s.size();i++)
	{
		if(cnt==7)
		{
			cout<<"YES"<<endl;
			return 0;
		}
		if(s[i]-48==prev)
		{
			cnt++;
		}
		else
		{
			prev=s[i]-48;
			cnt=1;
		}
	}
	if(cnt==7)
	{
		cout<<"YES"<<endl;
	}
	else
	cout<<"NO"<<endl;
	return 0;
}
