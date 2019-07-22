#include<iostream>
#include<cstdio>
#include<cstring>
#include<queue>
#include<algorithm>
#include<cmath>
#include<vector>
#include<map>
#include<set>
#include<deque>
#include<string>
using namespace std;
int main()
{
	#ifdef local
	freopen("1.txt","r",stdin);
	#endif
	long long n,m,k,num;
	cin>>n>>m>>k;
	queue<long long>a;
	int i;
	for(i=0;i<m;i++)cin>>num,a.push(num);
	long long page=n/k;
	long long fp;
	long long l=1,r=page;
	while(l<=r)
	{
		long long mid=l+r>>1;
		if(mid*k<a.front())
		{
			l=mid+1;
		}
		else r=mid-1;
	}
	fp=l;
	long long ans=0,sum=0;
	while(!a.empty())
	{
		int j=0;
		while(!a.empty()&&a.front()-sum<=fp*k)a.pop(),j++;
		if(j==0)
		{
			l=fp,r=page;
			while(l<=r)
			{
				long long mid=l+r>>1;
				if(mid*k<a.front()-sum)l=mid+1;
				else r=mid-1;
			}
			fp=l;
		}
		else
		{
			sum+=j;
			ans++;
		}
	}
	cout<<ans;
}