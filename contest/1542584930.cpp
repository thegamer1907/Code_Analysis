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
vector < ll > v ;
int h,m,s,t1,t2,n ;
int a[N] ;
int main()
{
int i , j , t ;
scanf("%d %d %d %d %d",&h,&m,&s,&t1,&t2);
int fg = 0 ;  
int pr1min = (h%12) ;
int pr1max = (h%12)+1;
int pr2min = (m/5) ; 
int pr2max = (m/5)+1;
int pr3min = (s/5); 
int pr3max = (s/5)+1;
int minn = min(t1,t2) ; 
int maxx = max(t1,t2) ; 
t1=minn ; 
t2 = maxx;
fg=1;
for(i=t1;i<t2;i++)
{
	if(i == pr1min || i == pr2min || i == pr3min)
	fg=0;
} 
if(fg)
{
	printf("YES\n") ; 
	return 0 ; 
}
fg = 1 ; 
for(i=t2;i<=11;i++)
{
	if(i==pr1min||i==pr2min||i==pr3min)
	fg=0;	
}
for(i=0;i<t1;i++)
{
	if(i==pr1min||i==pr2min||i==pr3min)
	fg=0;
}
if(fg)
{
	printf("YES\n") ; 
	return 0 ; 
}
printf("NO\n");
return 0 ; 
}
