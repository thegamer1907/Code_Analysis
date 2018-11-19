#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
const int MAXL=(1<<15),MAXN=505;
string s[MAXN],pre[MAXN],suf[MAXN];
int Ans[MAXN],Len[MAXN];
bool H[MAXL];
bool Check(string s,int k)
{
	int cnt=0;
	for(int i=k-1;i<s.length();i++)
	{
		int tmp=0;
		for(int j=i-k+1;j<=i;j++)tmp=(tmp<<1)|(s[j]=='1');
		if(i>=k-1)
		{
			if(!H[tmp])cnt++;
			H[tmp]=1;
		}
	}
	for(int i=0;i<s.length();i++)
	{
		int tmp=0;
		for(int j=i-k+1;j<=i;j++)tmp=(tmp<<1)|(s[j]=='1');
		if(i>=k-1)H[tmp]=0;
	}
	if((1<<k)==cnt)return true;
	return false;
}
int Cal(string s)
{
	int Ans=1;
	while(true)
	{
		if(!Check(s,Ans))return Ans-1;
		Ans++;
	}
}
int main()
{
	
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>s[i];
		Ans[i]=Cal(s[i]);
		pre[i]=suf[i]=s[i];
		Len[i]=s[i].length();
	}
	int m;
	cin>>m;
	int a,b;
	for(int i=n+1;i<=n+m;i++)
	{
		cin>>a>>b;
		if(Len[a]+Len[b]>MAXL)
		{
			string x;
			x=suf[a]+pre[b];
			Ans[i]=Cal(x);
			pre[i]=pre[a];
			suf[i]=suf[b];
			Len[i]=x.length();
			Ans[i]=max(Ans[i],max(Ans[a],Ans[b]));
		}
		else {s[i]=pre[i]=suf[i]=s[a]+s[b];Len[i]=Len[a]+Len[b];Ans[i]=Cal(s[i]);}
		cout<<Ans[i]<<endl;
	}

	
	return 0;
}
