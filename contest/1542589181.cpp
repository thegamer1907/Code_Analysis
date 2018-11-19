#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;cin>>s;
	int n,flag=0,flag2=0,flag3=0;
	cin>>n;
	vector<string>v;
	for(int i=0;i<n;i++)
	{
		string s1;cin>>s1;
		
		if(s1==s)
			flag=1;
		if(s1[1]==s[0] && flag2==0)
			flag2=1;
		 if(s1[0]==s[1] && flag3==0)
			flag3=1;


	}
	if(flag==1 || (flag2==1 && flag3==1))
		cout<<"YES"<<endl;
	else
	{
		cout<<"NO"<<endl;
	}
}