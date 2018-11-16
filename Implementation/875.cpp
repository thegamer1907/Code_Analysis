#include<iostream>
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
	ll n,t;
	cin>>n>>t;
	string s;
	cin>>s;
	for(ll i=0;i<t;i++)
	{
		for(ll i=0;i<n;i++)
		{
			if(s[i]=='B' && s[i+1]=='G')
				{swap(s[i],s[i+1]);
					i++;
				}
		}
	}
	cout<<s;
}