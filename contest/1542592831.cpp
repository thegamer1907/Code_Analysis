#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	string s;
	cin>>s;
	int n;
	cin>>n;
	bool q=0,p=0,e=0,r=0,t=0;
	for(int i=1;i<=n;i++)
	{
		string ss;
		cin>>ss;
		if (ss==s) t=1;
		if (ss[0]==s[0]) q=1;
		if (ss[1]==s[0]) p=1;
		if (ss[0]==s[1]) e=1;
		if (ss[1]==s[1]) r=1;
	}
	if (t || (p&&e)) cout<<"YES"<<endl;else cout<<"NO"<<endl;
	return 0;
}