#include<bits/stdc++.h>
using namespace std;
int n;
long long a[100005];
bool chk(long long x)
{
	long long cnt=0;
	for(int i=1;i<=n;i++)
	{
		if(x<a[i]) return 0;
		cnt+=x-a[i];
	}
	return (cnt>=x);
}
int main()
{
	ios::sync_with_stdio(0);
	cin>>n;
	long long l=0,r=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		r+=a[i];
	}
	long long mid;
	while(r-l>5)
	{
		mid=(l+r)/2;
		if(chk(mid)) r=mid;
		else l=mid;
	}
	for(l;l<=r;l++)
	if(chk(l))
	{
		cout<<l;
		return 0;
	}
	return 0;
}