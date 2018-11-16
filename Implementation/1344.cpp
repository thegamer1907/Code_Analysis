#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll n,t;
	cin>>n>>t;
	string s;
	cin>>s;

	if(s.length() != n)
		return 0;

	while(t--)
	{
		for(ll i=0;i<n;i++)
		{
			if(s[i] == 'B' && s[i+1] == 'G')
			{
				swap(s[i],s[i+1]);
				i++;
			}
		}
	}
	cout<<s<<endl;

}