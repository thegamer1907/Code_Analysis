#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;int n ,k  = 0, k1 = 0;
	cin>>s>>n;
	string m[n];
	for(int i = 0; i < n ;i ++)
	{
		cin>>m[i];
		if(m[i][0] == s[1])
		{
			k = 1;
		}
		if(m[i][1] == s[0])
		{
			k1 = 1;
		}
		if(m[i] == s)
		{
			cout<<"YES";
			return 0;
		}
	} 
	if(k1 == 1 && k == 1)
	{
		cout<<"YES";
		return 0;
	}cout<<"NO";
}