#include<bits/stdc++.h>
#define inf 0x3f3f3f3f
using namespace std;
long long pos[100005];
int main()
{
	memset(pos,inf,sizeof(pos));
	long long n,m,k;
	scanf("%lld%lld%lld",&n,&m,&k);
	for(int i=0;i<m;i++)
	{
		scanf("%lld",&pos[i]);
	}
	long long now=0;
	int cnt=0;
	int page_first=1,page_last=k;
	int tmp=0;
	while(now<m)
	{
		page_last+=tmp;
		tmp=0;
		if (pos[now]>page_last)
		{
			page_last+=k+k*((pos[now]-page_last-1)/k);
		}
		
		for (int i=now;pos[i]<=page_last;i++)
		{
			tmp++;
		}
		now+=tmp;
		cnt++;
	}
	printf("%d",cnt);
}