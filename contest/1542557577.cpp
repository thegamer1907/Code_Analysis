#include<iostream>
#include<string>
#include<string.h>
#include<algorithm>
#include<vector>
#include<queue>
#include<cmath>
using namespace std;
int a[105];
int b[105];
int main()
{
	string s;
	int n,check2=0,check3=0,check=0;
	cin>>s>>n;
	for(int i=1;i<=n;i++)
	{
		string v;
		cin>>v;
		if(v==s)
		{
			cout<<"YES";
			return 0;
		}
		if(v[0]==s[1] and v[1]==s[0])
		{
			check++;
		}
		if(v[1]==s[0])
		check3++;
		if(v[0]==s[1])
		check2++;
	}
	if(check!=0 and check3!=0 or check!=0 and check2!=0)
	{
		cout<<"YES";
		return 0;
	}
	if(check2!=0 and check3!=0)
	{
		cout<<"YES";
		return 0;
	}
	cout<<"NO";
	return 0;
}