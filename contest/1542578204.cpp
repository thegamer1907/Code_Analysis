#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
#include<cstdlib>
using namespace std;
int T=12,n,m,F[210][20],G[210][20],S[210][10010],tot,len[210],P[210];
char s[210];
int main()
{
  cin>>n;
  for(int i=1;i<=n;i++)
  {
	scanf("%s",s+1);
    int len=strlen(s+1);
    ::len[i]=min(len,12);
    for(int j=0;j<=min(len,T);j++)
	  for(int k=1;k<=len-j;k++)
	  {
	    int t=1<<(j+1); 
	    for(int l=k;l<=k+j;l++) t+=(s[l]-'0')<<(l-k);
	    S[i][t]=1;
	  }
	for(int j=1;j<=min(T,::len[i]);j++) F[i][j]=s[j]-'0',G[i][j]=s[len-j+1]-'0';
  }
  /*
  for(int i=1;i<=n;i++)
  {
    //cout<<len[i]<<endl;
	for(int j=1;j<=min(T,len[i]);j++) cout<<F[i][j];
    cout<<endl;
  }
  */
  cin>>m;
  tot=n;
  for(int i=1,x,y;i<=m;i++)
  {
	scanf("%d%d",&x,&y);
	tot++;
	for(int j=0;j<=(1<<T+1);j++) S[tot][j]=S[x][j]|S[y][j];
	for(int j=1;j<=len[x];j++) F[tot][j]=F[x][j];
	for(int j=len[x]+1;j<=min(len[x]+len[y],T);j++) F[tot][j]=F[y][j-len[x]];
	
	for(int j=1;j<=len[y];j++) G[tot][j]=G[y][j];
	for(int j=len[y]+1;j<=min(len[x]+len[y],T);j++) G[tot][j]=G[x][j-len[y]];
	len[tot]=min(len[x]+len[y],T);
	
	int cnt=0;
	for(int j=1;j<=len[x];j++) P[++cnt]=G[x][len[x]-j+1];
	for(int j=1;j<=len[y];j++) P[++cnt]=F[y][j];
	/*
	for(int i=1;i<=cnt;i++) cout<<P[i]; cout<<endl;
	for(int i=1;i<=len[tot];i++) cout<<F[tot][i]; cout<<endl;
	for(int i=1;i<=len[tot];i++) cout<<G[tot][i]; cout<<endl;
	*/
	for(int j=0;j<=min(cnt,T);j++)
	  for(int k=1;k<=cnt-j;k++)
	  {
	    int t=1<<(j+1);
	    for(int l=k;l<=k+j;l++) t+=P[l]<<(l-k);
	    S[tot][t]=1;
	    //cout<<t<<endl;
	  }
	int ans=0;
	for(int i=1;i<=T;i++)
	{
      int t=(1<<i);
      bool f=1;
      for(int j=0;j<(1<<i);j++) 
	    if(S[tot][j+t]==0) f=0;
      if(f==1) ans=i;
      else break;
	}
	printf("%d\n",ans);
  }
  return 0;
}
/*
5
01
10
101
11111
0
3
1 2
6 5
4 4
*/
