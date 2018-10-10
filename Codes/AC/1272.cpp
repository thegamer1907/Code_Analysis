#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	map<string,int> mp;
	int t,m,n,win=0,k1=0,k2=0,i,cnt1=0,cnt2=0;
	string s1,s2;
	cin>>n>>m;
	for(i=0;i<n;i++)
	{
		cin>>s1;
		mp[s1]++;
	}
	for(i=0;i<m;i++)
	{
		cin>>s1;
		if(mp[s1]==0)
		{
			mp[s1]++;
			k2++;
		}
		else if(cnt1>cnt2)cnt2++;
		else cnt1++;
	}
	//cout<<cnt1<<" "<<cnt2<<endl;
	if(n-cnt2>m-cnt1)cout<<"YES";
	else cout<<"NO";
}