#include<bits/stdc++.h>
using namespace std ;
#define pb push_back
#define mp make_pair
#define infile() freopen("large.in","r",stdin);
#define output() freopen("output.txt","w",stdout);
#define ll long long
#define sc(t); scanf("%d",&t);
#define scl(t); scanf("%lld",&t);
#define sc2(n,m); scanf("%d%d",&n,&m);
#define scl2(n,m); scanf("%lld%lld",&n,&m);
#define debug(); printf("tushar\n");
#define N 100005
#define mod 1000000007
#define printi(n) printf("%d",n);
set < ll > s ;
set < ll > :: iterator it ;
vector < ll > v ;
int n,k ;
int a[N] ;
int dp[100] = {0} ; 
int fg = 0 ; 
void func(int x )
{
	for(int i=1;i<=(1<<(k+1))-2;i++)
	{
		if(i==x)
		continue; 
		int tmp = 0 ;
		for(int j=0;j<k;j++)
		{
			if((x&(1<<j))&&(i&(1<<j)))
			tmp=1;
		}
		if(tmp)
		continue;
		if(dp[i])
		fg=1;
	}
return ;
}
int main()
{
int i , j , t ;
sc(n) ; 
sc(k) ; 
for(i=1;i<=n;i++)
{
	int x,y,z,w ; 
	int pp[10]={0};
	int tmp = 1  ;
	int num = 0 ;
	for(j=1;j<=k;j++)
	{
	scanf("%d",&pp[j]) ; 
	num = num + tmp*pp[j] ; 
	tmp*=2;
	}
	dp[num]++ ; 
}
if(dp[0])
fg=1;
for(i=1;i<=(1<<(k+1))-2;i++)
{
	if(dp[i])
	{
		func(i);
	}
}
if(fg)
printf("YES\n") ; 
else
printf("NO\n");
return 0 ;
}
