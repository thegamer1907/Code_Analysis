#include<cstdio>
#include<string>
#include<cstring>
#include<utility>
#include<cmath>
#include<map>
#include<queue>
#include<set>
#include<algorithm>
#include<vector>
#include<iostream>
#define ll long long
#define pii pair<int,int>
#define mp make_pair
#define fi first
#define se second
#define inf 0x7fffffff
using namespace std;
ll a[100010];
int main()
{
	int i,j,m,y,ans;
	ll n,x,k;
	cin>>n>>m>>k;
	for(i=0;i<m;i++)
	{
		cin>>a[i];
	}
	x=((a[0]+k-1)/k)*k;
	y=0;
	ans=1;
	for(i=0;i<m;i++)
	{
		if(a[i]<=x)
		{
			y++;
		}
		else
		{
			x+=y;
			y=1;
			x+=((a[i]-x+k-1)/k)*k;
			ans++;
		}
	}
	printf("%d",ans);
}