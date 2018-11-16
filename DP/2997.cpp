#include <bits/stdc++.h>
using namespace std;
int n;
string s,q;
int main()
{
	cin>>n;
	cin>>s>>q;
	int ans=0;
	for(int i=-1;++i<n;)
		if(s[i]!=q[i])
		{
			ans++;
			if(s[i+1]!=q[i+1] && s[i]!=s[i+1])	i++;
		}
	return cout<<ans,0;
}
