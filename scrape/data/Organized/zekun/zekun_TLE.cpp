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
	int i,j,m,y,ans=0;
	ll n,x,k;
	cin>>n>>m>>k;
	for(i=0;i<m;i++)
	{
		cin>>a[i];
	}
	x=k;
	j=0;
	while(j<m)
	{
		i=lower_bound(a,a+m,x)-a;
		if(i==0&&a[0]>x)
		{
			x=((a[0]+k-1)/k)*k;
			i=lower_bound(a,a+m,x)-a;
		}
		y=i+1;
		x+=1ll*y-j;
		j=y;
		ans++;
	}
	printf("%d",ans);
}