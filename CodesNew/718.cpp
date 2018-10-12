#include<bits/stdc++.h>

using namespace std;
map<string,int>id;
int main()
{
	int n,m;cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		string s;cin>>s;
		id[s]++;
	}
	int cnt=0;
	for(int i=0;i<m;i++)
	{
		string s;cin>>s;
		if(id[s])cnt++;
	}
	n-=cnt;m-=cnt;
	if(cnt%2)
	{
		n++;
	}
	if(n>m)cout<<"YES";
	else cout<<"NO";
}