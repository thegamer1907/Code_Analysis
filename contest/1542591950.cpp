#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	long int i,k=0,r=0,flag=0,n;
	string s;
	cin>>s;
	cin>>n;
	for(i=0;i<n;i++)
	{
		string ss;
		cin>>ss;
		if(ss==s)
			flag=1;
		if(ss[1]==s[0])
			k=1;
		if(ss[0]==s[1])
			r=1;
	}
	if(flag==1 || (k==1 && r==1))
		cout<<"YES";
	else
		cout<<"NO";
}
