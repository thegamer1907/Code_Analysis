#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	string s,st[105];
	cin>>s;
	ll n, i;
	int flag1=0,flag2=0;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>st[i];
	for(i=0;i<n;i++)
	{
		if(st[i][0]==s[0] && st[i][1]==s[1])
		{
			cout<<"YES"<<'\n';
			return 0;
		}
		if(st[i][1]==s[0])
			flag1 =1;
		if(st[i][0]==s[1])
			flag2=1;
		if(flag1 && flag2)
		{
			cout << "YES"<<endl;
			return 0;
		}
	}
	
	cout<<"NO"<<'\n';
	return 0;
}
