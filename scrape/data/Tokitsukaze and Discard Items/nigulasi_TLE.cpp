#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<queue>
#include<stack>
#include<set>
#include<map>
#include<vector>
#include<cmath>
#define rep(i,l,r) for(int i=(l);i<(r);i++)
#define per(i,l,r) for(int i=(r-1);i>=(l);i--)
#define ll long long
#define ull unsigned long long
#define inf 0x3fffffffffff
#define pi pair<int,int> 
using namespace std;
ll a[100005];
int main ()
{
	ll n,m,k;
	cin>>n>>m>>k;
	rep(i,0,m)cin>>a[i];
	ll c=0,l=0;
	ll i=0,af=0;
	while(c<m)
	{
		ll v=(a[i]-c)%k;
		if(v==0)v=k;
		while((af+1)<m&&a[af+1]-a[i]<=k-v)
		af++;
		l++;
		c+=(af-i+1);
		i=af+1;
		af=i;
	}
	cout<<l;
	while(1);
}