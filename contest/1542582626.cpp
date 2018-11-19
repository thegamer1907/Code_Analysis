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

ll t , n , m ,k ,z , cnt  , sum , ans , x , y , l , r;

ll a[N] , b[N] , c[N] ;

string s,p[1000] ;
int main()
{
	string s ;
   cin >> s >> n;
   rep(i,n)
   {
   	cin >> p[i] ;
   	 if(p[i]==s)l=1;
   	 if(p[i][1]==s[0])y=1;
   	 if(p[i][0]==s[1])x=1;
   	 if(p[i][0]==s[1] and p[i][1]==s[0])l=1;
   }
   if(x and y)l=1;
   cout <<(l?"YES":"NO") ;
	return 0;
}