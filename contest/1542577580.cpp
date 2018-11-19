#include<cstdio>
#include<cstring>
#include<algorithm>
#include<string>
#define LL long long
#define clr(x,i) memset(x,i,sizeof(x))
using namespace std;
const int N=205;
int n,K,vist[21],sum[21][5],now[5],cnt=0;
int main()
{
	scanf("%d%d",&n,&K);
	for(int i=1;i<=n;i++)
	{
		int x=0,y;
		for(int j=1;j<=K;j++)
		{
			scanf("%d",&y);
			x=x*2+y;
		}
		vist[x]=1;
	}
	
	for(int i=0;i<20;i++)
	  if(vist[i])
	  {
	  	for(int j=0;(1<<j)<=i;j++){
	  		if(i&(1<<j))
	  		  sum[cnt][j]=1;
	  	}
	  	cnt++;
	  	  //sum[cnt][j]= i&(1<<j)>0 ? 1 : 0;
	  }
	bool ff=0;
	for(int i=1;i<(1<<cnt);i++)
	{
		clr(now,0);int cur=0,f1=1;
		for(int j=0;j<cnt;j++)
		{
			if(i&(1<<j)){
				cur++;
				for(int k=0;k<K;k++)
				  now[k]+=sum[j][k];
			}
		}
		for(int j=0;j<K;j++)
		  if(now[j]>cur/2)f1=0;
		if(f1){
			ff=1;break;
		}
	}
	if(ff)printf("YES");
	else printf("NO");
}