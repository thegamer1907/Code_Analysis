#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll f[1000],s[1000];
int main()
{
	ios::sync_with_stdio(0);
	string st;
	cin>>st;
	ll n;
	cin>>n;
	bool ans=0;
	while(n--)
	{
		string te;
		cin>>te;
		if(te==st)
		ans=1;
		f[te[0]]=1;
		s[te[1]]=1;
	}
	if((s[st[0]]==1)&&(f[st[1]]==1))
	ans=1;
	if(ans)
	cout<<"YES";
	else
	cout<<"NO";
}