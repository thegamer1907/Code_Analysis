#include <bits/stdc++.h>
#define int long long
using namespace std;
main()
{
	string s; cin>>s;
	char s1=s[0],s2=s[1];
	int n,i; cin>>n;
	bool check1=false,check2=false;
	for (i=0;i<n;i++)
	{
		cin>>s;
		if (s[0]==s1&&s[1]==s2)
		{
			cout<<"YES"; return 0;
		} 
		if (s[0]==s2) check2=true; if (s[1]==s1) check1=true;  
	}
	if (check1&&check2) cout<<"YES"; else cout<<"NO";
}
