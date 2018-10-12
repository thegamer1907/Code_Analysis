/*
 =============================================================================
 Life is a bunch of unexpected events !
 
 Code by:Vivek Singh
 College: NIT,Patna
 Batch: 2K15
 Handles:viv_nitp(codechef) & Steady_Bunny(hackerrank,codeforces)
 243470CB
 =============================================================================
 */
#include<bits/stdc++.h>
using namespace std;
#define ld long double
#define ull unsigned long long
#define ll long long
#define mod 1000000007
#define mod2 1000000009L
#define f(i,n) for( ll (i)= 0;(i)<(n);(i)++)
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define lp pair<ll,ll>
#define mp make_pair
#define mt make_tuple
#define M_H priority_queue<ll ,vector<ll >,greater<ll > >
#define red 1;
#define black 0;
#define rep(i,j,n) for( ll (i)= j;(i)<(n);(i)++)
#define maxc 5000000
#define F first
#define S second
#define NUM 314159
#define maxn 1000001
#define PI 3.1415926535
#define root2 1.41421356237
#define inf 1000000000
#define LOG_WALA_FACTOR 100
#define ACTUAL_SIZE 10000
#define MAXN 16000001 
ll cb,cs,cc,cob,coS,coc,tt;
ll b=0,s=0,c=0;
ll possible(ll x){
	ll B=b,S=s,C=c;
	ll cost = cob*(max(0LL,B-cb))+coS*(max(0LL,S-cs))+coc*(max(0LL,C-cc));
	if(tt>=cost){
		tt-=cost;
		cb=max(0LL,cb-B);
		cs=max(0LL,cs-S);
		cc=max(0LL,cc-C);
		return 1;
	}
	return 0;
}
int main() 
{ 
  faster;
  string str ;
  cin>>str;
  f(i,str.size())
  	if(str[i]=='B')
  		b++;
  	else if(str[i]=='S')
  		s++;
 	else if(str[i]=='C')
  		c++; 	cin>>cb>>cs>>cc>>cob>>coS>>coc>>tt;
 	ll ans=1;
 	for(;ans<10000;ans++)
 		if(!possible(ans))
 			break;
 	ans--;
 	ll fac=0;
 	if(ans==10000-1)
 	{
 		fac=cob*b+coS*s+coc*c;
 		ans+=tt/fac;
 	}
 	cout<<ans;	

}     	
