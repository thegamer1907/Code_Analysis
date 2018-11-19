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
#define N 1005
#define mod 1000000007
#define printi(n) printf("%d",n);
set < ll > s ;
set < ll > :: iterator it ;
vector < ll > v ;
int n ;
int a[N] ;
char str[100] ; 
int main()
{
int i , j , t ;
scanf("%s",str) ; 
sc(n) ; 
int fg = 0 ; 
	string tmp[N] ; 
for(i=1;i<=n;i++)
{
	cin>>tmp[i] ; 
}
int pp=0,pd=0;
int dp=0,dd=0;
for(i=1;i<=n;i++)
{
	if(tmp[i][0] == str[0] && tmp[i][1] == str[1])
	fg=1;
	if(tmp[i][1] == str[0])
	pd=1;
	if(tmp[i][0] == str[1])
	dp=1;
}
if(fg || (pd+dp)==2)
printf("YES\n") ; 
else
printf("NO\n") ; 
return 0 ;
}
