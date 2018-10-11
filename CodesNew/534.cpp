#include<iostream>
#include<cstring>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<climits>
#include<set>
#include<utility>
#include<unordered_map>
#include<map>
#include<iterator>
#define speedio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define max3(a,b,c) ((a)>(b) && (a)>(c) ? (a) : (b)>(c) ? (b) : (c))
#define min3(a,b,c) ((a)<(b) && (a)<(c) ? (a) : (b)<(c) ? (b) : (c))
#define max2(a,b) ((a)>(b) ? (a) : (b))
#define min2(a,b) ((a)<(b) ? (a) : (b))
#define rep(i,a,b) for(i=a;i<=b;++i)
#define rev(i,a,b) for(i=a;i>=b;--i)
#define lli long long int
#define vi vector<int>
#define vlli vector<lli>
#define si set<int>
#define slli set<lli>
#define pb push_back
#define ins insert
#define mp make_pair
#define iterator(dt) set<dt> :: iterator
#define mod 1000000007
/*
  lli gcd(lli a,lli b)
       { while((a)!=0 && (b)!=0) { if((a)>(b)) (a)%=(b); else (b)%=(a); } return ((a)==0 ?(b):(a)); }
  lli power(lli x,lli n,unsigned lli m=ULLONG_MAX)
       { lli res=1;  	x%=m;
	    while(n>0)
	      {
                if(n&1==1) res=(res*x)%m;
                 n/=2;
                x=(x*x)%m;
	      }
	return res;
       }
*/
using namespace std;
int i,j;

//*********************//
vlli prime;
lli ma=0;
  void sieve()
  {
  	  vector<bool> isprime(ma,0);
  	   rep(i,2,sqrt(ma))
              if(isprime[i]==0)
              	  for(j=2*i; j<=ma; j+=i)
              	  	   isprime[j]=1;

       rep(i,2,ma) if(isprime[i]==0) prime.pb(i);
  }
//*********************//
int main()
{
	speedio;
	lli n,m,x,y; cin>>n;
	vlli ct(10000001,0);
	rep(i,0,n-1) {cin>>x; ++ct[x]; if(ma<x) ma=x;}

	sieve();

    vector< vector<lli> > arr(2,vector<lli>(prime.size(),0));

    for(i=prime[0];i<=ma;i+=prime[0])
    	 arr[0][0]+=ct[i];
   arr[1][0]=arr[0][0];

   rep(i,1,prime.size()-1)
       {
       	 for(j=prime[i];j<=ma;j+=prime[i])
       	 	  arr[0][i]+=ct[j];
       	arr[1][i]=arr[1][i-1] + arr[0][i];

       }
//submit ho ja bhai
     cin>>m;
     rep(i,0,m-1)
     {
     	cin>>x>>y;
     	int pos1=lower_bound(prime.begin(),prime.end(),x)-prime.begin();
     	int pos2=lower_bound(prime.begin(),prime.end(),y)-prime.begin();

     	if(pos2==prime.size()) --pos2;
     	else if(prime[pos2]!=y) --pos2;

     	if(pos2<pos1) cout<<"\n0";
     	else if(pos1==0) cout<<"\n"<<arr[1][pos2];
     	else cout<<"\n"<<arr[1][pos2]-arr[1][pos1-1];
     }
}   