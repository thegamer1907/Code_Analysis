#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int n,k,num,book[20],flag,cnt[20];

bool judge()
{
	for(int i=0;i<(1<<k);i++)
		if(book[i]>num/2)
			return false;
	return true;
}

void dfs(int x)
{
	int cur;
	if(x==(1<<k))
	{
		if(num && judge()) flag=1;
		return;
	}
	dfs(x+1);
	if(cnt[x])
	{
		cur=x;
		for(int i=1;i<=k;i++)
		{
			book[i]+=cur&1;
			cur>>=1;
		}
		num++;
		dfs(x+1);
		num--;
		cur=x;
		for(int i=1;i<=k;i++)
		{
			book[i]-=cur&1;
			cur>>=1;
		}
	}
}

int main()
{
//	freopen("input","r",stdin);
	scanf("%d %d",&n,&k);
	for(int i=1;i<=n;i++)
	{
		int res=0;
		static int x;
		for(int j=1;j<=k;j++){
			scanf("%d",&x);
			res=res*2+x;
		}
		cnt[res]++;
	}
	dfs(0);
	if(flag) cout<<"YES";
	else cout<<"NO";
	return 0;
}
