#include<bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;

int n,m,k;
vector<pii> ans[90005];

int main()
{
	scanf("%d%d%d",&n,&m,&k);
	int cnt = 1;
	for(int i=1;i<=n;i++)
	{
		if(i%2==1)
		{
			for(int j=1;j<=m;j++)
			{
				cnt++;
				ans[min(k,cnt/2)].push_back(make_pair(i,j));
			}
		}
		else
		{
			for(int j=m;j>=1;j--)
			{
				cnt++;
				ans[min(k,cnt/2)].push_back(make_pair(i,j));
			}
		}
	}
	for(int i=1;i<=k;i++)
	{
		printf("%d",(int)ans[i].size());
		for(int j=0;j<ans[i].size();j++)
		{
			printf(" %d %d",ans[i][j].first,ans[i][j].second);
		}
		printf("\n");
	}
	return 0;
}
