#include<cstdio>
#include<cstring>
#include<algorithm>
#include<string>
#include<iostream>
#include<set>
#define rep(i,a,b) for(int i=(a);i<=(b);i++)
#define per(i,a,b) for(int i=(a);i>=(b);i--)
#define Rep(i,x) for(int i=head[x];i+1;i=nxt[i])
#define rep2(i,a,b) for(int i=(a);i<(b);i++)
#define ff first
#define ss second
using namespace std;
const int N=205;
const int inf=1e9+7;
typedef long long ll;
//------------------------------------------head---------------------------------------------------//
string s[N];
string pre[N],suf[N];
set<int> mp[N][35];
int tag[N];
int main()
{
	int n;scanf("%d",&n);
	rep(q,1,n)
	{
		cin>>s[q];
		pre[q]=suf[q]=s[q];
		for(int i=0;i<s[q].length();i++)
		{
			int cur=0;
			for(int j=i;j<s[q].length();j++)
			{
				if(j-i+1>=30)break;
				int len=j-i+1;if(s[q][j]=='1')cur|=(1<<(len-1));
				mp[q][len].insert(cur);
			}
		}
	}
	int m;scanf("%d",&m);
	rep(i,n+1,m+n)
	{
		int x,y;scanf("%d%d",&x,&y);
		if(pre[x].length()<30)
		{
			string tt=pre[x]+pre[y];
			pre[i]="";
			for(int j=0;j<min(30,(int)tt.length());j++)pre[i]=pre[i]+tt[j];
		}
		else pre[i]=pre[x];
		if(suf[y].length()<30)
		{
			string tt=suf[x]+suf[y];
			suf[i]="";
			for(int j=(int)tt.length()-1;j>=max(0,(int)tt.length()-30);j--)suf[i]=tt[j]+suf[i];
		}
		else suf[i]=suf[y];
		string xjt=suf[x]+pre[y];
		for(int j=1;j<=30;j++)
		{
			mp[i][j]=mp[y][j];
			for(set<int>::iterator it=mp[x][j].begin();it!=mp[x][j].end();it++)mp[i][j].insert(*it);
		}
		//cout<<"Case 23: "<<xjt<<endl;
		for(int ii=0;ii<xjt.length();ii++)
		{
			int cur=0;
			for(int j=ii;j<xjt.length();j++)
			{
				if(j-ii+1>=30)break;
				int len=j-ii+1;if(xjt[j]=='1')cur|=(1<<(len-1));
				mp[i][len].insert(cur);
				//cout<<"Case OwO : "<<len<<" "<<cur<<endl;
			}
		}
		int ans=0;
		for(int j=1;j<=30;j++)if(mp[i][j].size()==(1<<j))ans=max(ans,j);
		//printf("Case 0: %d\n",mp[i][2].size());
		//cout<<pre[i]<<endl<<suf[i]<<endl;
		printf("%d\n",ans);
	}
	return 0;
}