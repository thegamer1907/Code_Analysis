#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pi acos(-1.0)
#define mem(a,b) memset(a,b,sizeof(a))
int n,k;
const int N=1e5+5;
int a[N][5];
map<string,int>mp;

bool dfs(int i,int j,string t)
{
	if(j==k)if(mp[t])return true;else return false;
	if(!a[i][j])
	{
		if(dfs(i,j+1,t+'0'))return true;
		if(dfs(i,j+1,t+'1'))return true;
	}
	else if(dfs(i,j+1,t+'0'))return true;
	return false;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<k;j++)
		cin>>a[i][j];
		string t="";
		for(int j=0;j<k;j++)
		if(a[i][j])t+='1';
		else t+='0';
		mp[t]++;
	}
	
	for(int i=0;i<n;i++)
	{
		if(dfs(i,0,""))
		{
			cout<<"YES"<<endl;
			return 0;
		} 
	}
	cout<<"NO"<<endl; 
	return 0;
}