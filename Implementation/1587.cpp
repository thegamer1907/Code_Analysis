#include<iostream>
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
	string s;
	cin>>s;
	ll len=s.length();
	ll dec=0;
	for(ll i=0;i<len;i++)
	{
		ll count=0;
		char a=s[i];
		for(ll j=i;j<i+7;j++)
		{
			if(s[j]==a)
				count++;
			if(count>=7)
			{
				 dec=1;
				break;
			}
			if(dec>0)
				break;
		}
	}
	if(dec>0)
		cout<<"YES";
	else
		cout<<"NO";
}