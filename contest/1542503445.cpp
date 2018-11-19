#include<bits/stdc++.h>
using namespace std;
int main()
{
	string p;
	int n;
	cin>>p>>n;
	string s[n];
	for(int i=0;i<n;i++)
		cin>>s[i];
	int f1=0,f2=0;
	for(int i=0;i<n;i++)
	{
		if(s[i][0]==p[1])
			f1=1;
		if(s[i][1]==p[0])
			f2=1;
		if(p==s[i])
		{
			cout<<"YES";
			return 0;
		}
	}
	if(f1==1 && f2==1)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}