#include<cstdio>
#include<cstring>
#include<iostream>
#include<utility>
#include<algorithm>
#include<cmath>
#include<map>
#include<set>
#include<vector>
#include<queue>
using namespace std;
bool vis[500],ok=0,used[500];
int n,k,tot,a[10];
bool check(int x)
{
	int siz=0;
	memset(a,0,sizeof(a));
	for(int i=0;i<tot;i++)
	{
		if(x&1)
		{
			if(!vis[i])return 0;
			siz++;
			int y = i;
			for(int j=k;j;j--)
			{
				if(y&1)a[j]++;
				y>>=1;
			}
		}
		x>>=1;
	}
	for(int i=1;i<=k;i++)
	if(a[i]>siz/2)return 0;
	return 1;
}
int main()
{
	memset(vis,0,sizeof(vis));
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		int cur = 0;
		for(int j=1;j<=k;j++)
		{
			int x;cin>>x;
			cur<<=1;cur|=x;
		}
		vis[cur]=1;
//		cout<<"!"<<cur<<endl;
	}
	tot = 1<<k;
	for(int i=1;i<(1<<tot)-1;i++)
	if(check(i))ok=1;
	if(ok)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}