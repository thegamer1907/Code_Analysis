#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int f=0,l=0,k=0;
	int i,j,n,t;
	cin>>n;
	while(n--)
	{
		string s2;
		cin>>s2;
		string s3="";
		for(i=1;i>=0;i--)
		s3+=s2[i];
		if(s2==s||s3==s)
		k=1;
		if(s[0]==s2[1])
		f=1;
		if(s[1]==s2[0])
		l=1;
	}
	if(k==1||f==1&&l==1)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
	return 0;
}