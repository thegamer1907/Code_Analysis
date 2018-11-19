#include<bits/stdc++.h>
using namespace std;

int main()
{
	string a;
	cin>>a;
	int n;
	cin>>n;
	string in[105];
	for(int i=0;i<n;i++)
	{
		cin>>in[i];
	}
	int flag1=0,flag2=0;
	for(int i=0;i<n;i++)
	{
		if(in[i][0]==a[1])flag1=1;
		if(in[i][1]==a[0]) flag2=1;
		if(in[i]==a)
		{
			flag1=1;
			flag2=1;
		}
	}
	if(flag1==1&&flag2==1) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}