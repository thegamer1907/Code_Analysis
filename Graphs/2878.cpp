#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<map>
#include<string>
#include<math.h>
#include<queue>
#include<stack>
#include<iostream>
using namespace std;
#define LL long long
#define mod 1000000007
vector<int> G[100005], F[100005];
stack<int> st;
int t, num, scc[100005], low[100005], time[100005], vis[100005], val[100005];
void Trajan(int x)
{
	int i, temp;
	st.push(x);
	vis[x] = 1;
	low[x] = time[x] = ++t;
	for(i=0;i<G[x].size();i++)
	{
		temp = G[x][i];
		if(vis[temp]==0)
		{
			Trajan(temp);
			low[x] = min(low[x], low[temp]);
		}
		else if(scc[temp]==0)
			low[x] = min(low[x], time[temp]);
	}
	if(low[x]==time[x])
	{
		num++;
		while(st.empty()==0)
		{
			temp = st.top();
			st.pop();
			scc[temp] = num;
			F[num].push_back(temp);
			if(temp==x)
				break;
		}
	}
}
int main(void)
{
	LL sum, ans;
	int n, m, i, x, y, j;
	scanf("%d", &n);
	for(i=1;i<=n;i++)
		scanf("%d", &val[i]);
	scanf("%d", &m);
	for(i=1;i<=m;i++)
	{
		scanf("%d%d", &x, &y);
		G[x].push_back(y);
	}
	for(i=1;i<=n;i++)
	{
		if(vis[i]==0)
			Trajan(i);
	}
	ans = 1, sum = 0;
	for(i=1;i<=num;i++)
	{
		x = 2e9, y = 0;
		for(j=0;j<F[i].size();j++)
		{
			if(val[F[i][j]]<x)
				x = val[F[i][j]], y = 1;
			else if(val[F[i][j]]==x)
				y++;
		}
		sum += x;
		ans = ans*y%mod;
	}
	printf("%lld %lld\n", sum, ans);
	return 0;
}