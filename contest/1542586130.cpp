#include<bits/stdc++.h>
using namespace std;
map<int,int>ma;
vector<int>ve;
map<int,int>::iterator it;
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int i,j;
	for(i=1;i<=n;i++)
	{
		int y=0;
		for(j=1;j<=m;j++)
		{
			int x;
			scanf("%d",&x);
			y|=(1<<(j-1))*x;
		}
		ma[y]++;
	}
	for(it=ma.begin();it!=ma.end();it++)
	{
		ve.push_back(it->first);
	}
	int answ=0;
	for(i=1;i<(1<<ve.size());i++)
	{
		int co[5]={0};
		for(j=0;j<ve.size();j++)
		{
			if(i&(1<<j))
			{
				for(int k=0;k<m;k++)
				{
					if((ve[j]&(1<<k)))
					co[k]++;
				}
			}
		}
		int cou=0;
		int tt=__builtin_popcount(i);
		for(int k=0;k<m;k++)
		{
			if(co[k]<=(tt/2))
			{
				
			}
			else
			{
				cou=1;
				break;
			}
		}
		if(cou==0)
		{
			answ=1;
			break;
		}
	}
	if(answ==0)
	printf("NO");
	else
	printf("YES");
}