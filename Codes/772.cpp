#include<iostream>
#include<cstdio>
using namespace std;
int c[20][20],ans[10],T,d;
void init()
{
    c[0][0]=1;
    for(int i=1;i<=16;i++)
    {
	c[i][0]=1;
	for(int j=1;j<=i&&j<=10;j++)
	    c[i][j]=c[i-1][j]+c[i-1][j-1];
    }
}
void dfs(int depth, int n, int left)
{
    if(depth==1)
    {
	ans[1]=left;
	for(int i=d;i>=1;i--)
	{
	    printf("%d",ans[i]);
	}
	return;//end
    }
    int digit=0;
    for(int i=0;i<=9;i++)
    {
	if(depth==d&&i==0)continue;
	digit=i;
	int tmp=c[left-i-ans[depth]+depth-2][depth-2];
	if(n+tmp<T)
	    n+=tmp;
	else break;
    }
    ans[depth]=digit;
    dfs(depth-1,n,left-digit);
}
int main()
{
    init();
    scanf("%d",&T);
    int now=0;
    for(int i=1;i<=8;i++)
    {
	if(now+c[8+i][i-1]-1<T)
	{
	    now+=c[8+i][i-1]-1;
	    d=i;
	} 
	else break;
    }
    d++;
    ans[d]=0;
    dfs(d,now,10);
}
