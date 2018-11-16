#include<bits/stdc++.h>
#define hell 1000000007LL
#define rep(i,a,b) for(int i=a;i<b;i++)
#define repi(i,a,b) for(int i=a;i>=b;i--)
#define ll long long
#define pb push_back
#define vi vector<int>
#define pii pair<int,int>
#define mk make_pair
#define fi                  first
#define se                  second
#define pii                 pair<int,int>
#define all(c)              c.begin(),c.end()
#define sz(c)               (int)c.size()
using namespace std;
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return a * (b / gcd(a, b)); }
int parent[100005];
int size[100005];
int find(int i)
{
	while(i!=parent[i])
	{
		parent[i]=parent[parent[i]];
		i=parent[i];
	}
	return i;
}
void uni(int a,int b)
{
	int pa=find(a);
	int pb=find(b);
	if(pa==pb)
		return ;
	if(size[pa]>size[pb])
	{
		parent[pb]=pa;
	}
	else if(size[pb]>size[pa])
	{
		parent[pa]=pb;
	}
	else
	{
		parent[pb]=pa;
		size[pa]++;
	}
}
int main()
{
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	cin>>n;
	rep(i,1,n+1)
	{
		parent[i]=i;
		size[i]=1;
	}
	rep(i,1,n+1)
	{
		int a;
		cin>>a;
		uni(i,a);
	}
	int cnt=0;
	rep(i,1,n+1)
	{
		if(parent[i]==i)
			cnt++;
	}
	cout<<cnt;
	return 0;
}