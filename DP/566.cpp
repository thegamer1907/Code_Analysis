#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	vector<int >v(s.length());
	if(s[0]==s[1]) v[0]=1;
	for(int a=1;a<s.length()-1;a++)
	{
		v[a]=v[a-1];
		if(s[a]==s[a+1]) v[a]+=1;
	}
	v[s.length()-1]=v[s.length()-2];
	//for(int a=0;a<s.length();a++) cout<<v[a]<<" ";
	int q;
	cin>>q;
	while(q--)
	{
		int l,r;
		cin>>l>>r;
		int ans=v[r-1]-v[l-1];
		if(s[l-1]==s[l]) ans++;
		if(r!=s.length() && s[r-1]==s[r]) ans=ans-1;
		cout<<ans<<endl;
	}
	return 0;
}
