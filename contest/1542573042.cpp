#include<bits/stdc++.h>
using namespace std;
int f[100005][4];
int u[100005]={0};
map<int,int>s;
int main()
{
	int n,k;
	scanf("%d%d",&n,&k);
	int a[4]={0};
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<k;j++)
		{
			scanf("%d",&f[i][j]);
			a[j]+=f[i][j];
			if(f[i][j]==1)
			{
				u[i]=(u[i]<<1)+1;
			}
			else 
				u[i]=u[i]<<1;
		}
		s[u[i]]+=1;
	}
	for(int i=0;i<k;i++)
	{
		if(a[i]==n)
		{
			puts("NO");
			return 0;
		}
	}
	bool ff=0;
	for(int i=0;i<k;i++)
	{
		if(a[i]!=0)
			ff=1;
	}
	if(ff==0)
	{
		puts("YES");
			return 0;
	}
	if(k==1)
		puts("YES");
	else 
	{
		vector<int>v;
		map<int,int>::iterator it;
		for(it=s.begin();it!=s.end();it++)
		{
			v.push_back(it->first);
		}
		for(int i=0;i<v.size();i++)
			for(int j=i+1;j<v.size();j++)
			{
				if((v[i]&v[j])==0)
					{
						puts("YES");
						return 0;
					}
			}
		puts("NO");
			return 0;
	}
}