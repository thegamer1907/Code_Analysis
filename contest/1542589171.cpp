#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
string a[1100];
int main()
{
	string s;
	cin>>s;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	bool f=false;
	for(int i=1;i<=n;i++)
	{
		for(int k=1;k<=n;k++)
		{
			string q=a[i]+a[k];
			for(int j=0;j<q.size();j++)
			{
				if(q[j]==s[0]&&q[j+1]==s[1])
				{
					f=true;
					break;
				}
			}
		}
	}
	if(f)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}
