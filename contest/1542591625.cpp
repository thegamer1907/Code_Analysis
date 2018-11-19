#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{	

	string s;
	cin>>s;
	int n;
	cin>>n;
	int flag=0;
	string str[n];
	for(int i=0;i<n;i++)
		cin>>str[i];
	for(int i=0;i<n;i++)
		if(str[i]==s)
			{flag=1;break;}
	if(flag!=1)
	{
		int f1=0,f2=0;
		for(int i=0;i<n;i++)
		{
			if(str[i][0]==s[1])
				f1=1;
			if(str[i][1]==s[0])
				f2=1;
			if(f1==1&&f2==1)
				{flag=1;break;}
		}
	}
	if(flag==1)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;	
}
