#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<set>
#include<map>
#include<vector>
using namespace std;
inline int read()
{
	int x=0,t=1;char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-')ch=getchar();
	if(ch=='-')t=-1,ch=getchar();
	while(ch<='9'&&ch>='0')x=x*10+ch-48,ch=getchar();
	return x*t;
}
int N,K;
bool fl=false;
int g[100100][5];
int gg[100100];
int test[17];
vector<int> v;
void check()
{
	int l=v.size();
	if(l==0)return;
	int tot[5]={0,0,0,0,0};
	for(int i=0;i<l;++i)
	{
		int k=v[i];
		for(int j=1;j<=4;++j)
		{
			k&1?tot[j]++:tot[j]--;
			k>>=1;
		}
	}
	for(int i=1;i<=4;++i)
	{
		if(tot[i]>0)return;
	}
	fl=true;
}
void DFS(int x)
{
	if(x==16)
	{
		check();
		return;
	}
	if(fl)return;
	DFS(x+1);
	if(fl)return;
	if(test[x])
	{
		v.push_back(x);
		DFS(x+1);
		v.pop_back();
		if(fl)return;
	}
	
}
int main()
{
	N=read();K=read();
	for(int i=1;i<=N;++i)
	{
		int tot=0;
		for(int j=1;j<=K;++j)
		{
			g[i][j]=read();
			if(g[i][j])
				tot|=(1<<(j-1));
		}
		test[tot]++;
	}
	DFS(0);
	if(fl)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}
