#include "bits/stdc++.h"
 
#define wsp                cin >> ws;
#define sp                 setprecision            
#define sn(n)              scanf("%lld",&n)
#define cn(n)              cin>>n
#define pr(n)              printf("%lld\n",n)
#define ff                 first
#define ss                 second
#define prn                cout<<endl
#define str(n)             scanf("%s",n)
#define pb                 push_back
#define len(n)             n.length()
#define forp(i,a,b)        for(ll i=a;i<=b;i++)
#define rep(i,n)           for(ll i=0;i<n;i++)
#define forn(i,a,b)        for(ll i=a;i>=b;i--)
#define ren(i,n)           for(ll i=n-1;i>=0;i--)
#define LALIT              ios_base::sync_with_stdio(false);cin.tie(0)
#define tr(container, it)  for(__typeof(container.begin()) it = container.begin(); it != container.end(); it++)
#define mem(n,m)           memset(n,m,sizeof(n))
#define mp                 make_pair
#define mod               1000000007                                                                             
 
using namespace std;
typedef unsigned long long int ull;
typedef long long int          ll;
typedef pair<int, int>         pii;
typedef pair<ll, int>          pli;
typedef pair<double, int>      pdi;
typedef pair<ll, ll>           pll;
typedef pair<double, double>   pdd;
 
const int  N = int(300000)+5;

ll t , h,hh,s,t1,t2,n , m ,k ,z , cnt  , sum , ans , x , y , l , r;

ll a[N] , b[N] , c[N] ;


int main()
{
   cin >> h >> m >> s >> t1 >> t2 ;
   if(m==0 and s==0)hh=1;
   if(m%5)m=m/5+1;
   else if(s!=0)m=m/5+1;
   else m=m/5 ;
   if(s%5)s=s/5+1;
   else s=s/5;
   if(s!=0 or m!=0)h=h+1;
   if(h>12)h=1;
   if(s==0)s=12;
   if(m==0)m=12;
   for(int i=t1;;)
   {
   	 r=i+1 ;
   	 if(r>12)r=1;
   	  if((r)==h or r==m or r==s)
   	  {
   	  	l=1 ;
		 }
   	  i = r ;
   	  if(i==t2)break;
   }
 // cout << l;
   if(l==1)
   {
   	l = 0 ;
   	  for(int i=t2;;)
   	  {
   	  	r=i+1 ;
   	    if(r>12)r=1;
   	   // cout << r<<" ";
   	     if(r==h or r==m or r==s)
   	     {
   	  	  l=1 ;
   	  	 // cout << r ;
		  }
   	      i = r ;
   	      if(i==t1)break;
		 }
   }
   cout <<(l==0?"YES":"NO") ;
	return 0;
}
