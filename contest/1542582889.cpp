#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<cmath>
#include<algorithm>
#include<cstdlib>
using namespace std;
int a[100010][5],b[30][5],now[5],P,tot,n,m;
bool flag[1<<4];
inline void dfs(int x,int y)
{
  if(P==1) return ; 
  if(x==tot+1)
  {
	if(y==0) return ;
	int kill=0;
	//for(int i=1;i<=m;i++) cout<<now[i]<<" "; cout<<endl;
	for(int i=1;i<=m;i++) if(now[i]>0) {kill=1; break;}
    if(kill==0) P=1;
	return ;
  }
  for(int i=1;i<=m;i++) now[i]+=b[x][i];
  dfs(x+1,1);
  for(int i=1;i<=m;i++) now[i]-=b[x][i];
  dfs(x+1,y);
}
int main()
{
  cin>>n>>m;
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=m;j++) scanf("%d",&a[i][j]);
    int ha=0;
	for(int j=1;j<=m;j++) 
	{
	  ha+=(1<<j-1)*a[i][j];
	  if(a[i][j]==0) a[i][j]=-1;
	}
	if(flag[ha]==0) 
	{
	  flag[ha]=1,tot++;
	  for(int j=1;j<=m;j++) b[tot][j]=a[i][j];
	}
  }
  dfs(1,0);
  if(P==1) printf("YES\n");
  else printf("NO\n");
  return 0;
}
