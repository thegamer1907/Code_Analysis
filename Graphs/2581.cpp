/*******************
Problem:
Author:CXY1999
Status:Coding
*******************/
#include<cstdio>
#include<iostream>
#include<cstring>
#include<cstdlib>
#include<climits>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
const int maxn=2e4;
int p[maxn];
int V[maxn];
vector<int> G[maxn]; 
int n;
int main()
{
	scanf("%d",&n);
	for(int i=2;i<=n;i++)
	{
		int p;
		scanf("%d",&p);
		G[i].push_back(p);
	} 
	for(int i=1;i<=n;i++)
	scanf("%d",&V[i]);
	int Ans=0;
	for(int i=1;i<=n;i++)
	{
		int buf=G[i].size();
		for(int j=0;j<buf;j++)
		{
			if(V[i]!=V[G[i][j]])
			{
				Ans++;
			}
		}
	}
	cout<<Ans+(V[1]==0?0:1)<<endl;
}
