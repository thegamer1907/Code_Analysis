#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	string s;
	cin>>s;
	int n;
	cin>>n;
	int i;
	vector<int> a(26),b(26);
	int flag=0;
	for(i=0;i<n;i++)
	{
		string x;
		cin>>x;
		if(x==s)
		{
			flag=1;
		}
		a[x[0]-'a']++;
		b[x[1]-'a']++;
	}
	if(flag)
	{
		cout<<"YES";
		return 0;
	}
	if(b[s[0]-'a'] && a[s[1]-'a'])
	{
		cout<<"YES";
		return 0;
	}

	cout<<"NO";
	return 0;
}