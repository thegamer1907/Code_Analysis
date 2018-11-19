#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s,a;
	int f1=0,f2=0,f=0,n,i;
	cin>>s;
	cin>>n;
	for (i=0;i<n;i++)
	{
		cin>>a;
		if (a[0]==s[1])f2=1;
		if (a[1]==s[0])f1=1;
		if (a==s)f=1;
	}
	if ((f1==1 && f2==1) || f==1)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}