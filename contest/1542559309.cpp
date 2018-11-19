#include<bits/stdc++.h>
using namespace std;
int main()
{
	string a;
	cin>>a;
	int n;
	cin>>n;
	string s[n];
	int i,j,ans=0;
	for(i=0;i<n;i++) 
	{
		cin>>s[i];
		if(s[i]==a) ans=1;
	}
	int flag=0;
	for(i=0;i<n;i++) if(s[i][1]==a[0]) flag=1;
	if(flag==1)
	{
		for(i=0;i<n;i++) if(s[i][0]==a[1]) flag=2;
	}
	if(ans==1 || flag==2) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}
