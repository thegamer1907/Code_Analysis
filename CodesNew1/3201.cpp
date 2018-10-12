#include <iostream>
#include <algorithm>
#include<cmath>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<vector>
#include<iomanip>
#define sqr(x) (x)*(x)
using namespace std;
int num[300005],n,m,i,j,ans=-1,sl,sr,l,r,mid,now,cnt[300005];
int main()
{
	ios::sync_with_stdio(0);
	cin>>n>>m;
	for (i=1;i<=n;i++) cin>>num[i];
	for (i=1;i<=n;i++) cnt[i]=cnt[i-1]+1-num[i];
	j=0;
	for (i=1;i<=n;i++)
	{
		l=i-1;r=n+1;now=i-1;
		while (l<r)
		{
			mid=(l+r)/2;
			if (cnt[mid]-cnt[i-1]<=m)
			{
				now=mid;
				l=mid+1;
			}
			else r=mid;
		}
		if (now-i+1>ans)
		{
			ans=now-i+1;
			sl=i;sr=now;
		}
	}
	cout<<ans<<endl;
	for (i=1;i<sl;i++) cout<<num[i]<<' ';
	for (i=sl;i<=sr;i++) cout<<"1 ";
	for (i=sr+1;i<=n;i++) cout<<num[i]<<' ';
	return 0;
}