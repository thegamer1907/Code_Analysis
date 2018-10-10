#include<bits/stdc++.h>

using namespace std;
int nxt[1000005];
set<int>vis;

void getn(string s)
{
	nxt[0]=-1;
	int n=s.length();
	int i=0,j=-1;
	while(i<n)
	{
		if(j==-1||s[i]==s[j])nxt[++i]=++j;
		else j=nxt[j];
	}
	for(int i=0;i<n;i++)vis.insert(nxt[i]);
}

int main()
{
	string s;cin>>s;
	getn(s);
	int n=s.length();
	int ans;
	int i=s.size();
	while(nxt[i]>0)
	{
		if(vis.count(nxt[i]))
		{
			string tmp=s.substr(0,nxt[i]);
			cout<<tmp<<endl;
			return 0;
		}
		i=nxt[i];
	}
	cout<<"Just a legend"<<endl;
}