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
int main()
{
	speedio;
	 	string s; cin>>s;
	   lli r,nb,ns,nc,pb,ps,pc,cb=0,cs=0,cc=0;
	   cin>>nb>>ns>>nc>>pb>>ps>>pc>>r;
     rep(i,0,s.length()-1)
         if(s[i]=='B') ++cb; else if(s[i]=='S') ++cs; else ++cc;
         lli ham=0;
   bool possible=1;
   while(possible)
    {
    	if((nb-cb==0 || cb==0) && (ns-cs==0 || cs==0) && (nc-cc==0 || cc==0)) {++ham; break;}
     
     if(nb-cb>=0 && ns-cs>=0 && nc-cc>=0) {++ham; nb-=cb;ns-=cs;nc-=cc;}
     else
     {
       if(nb-cb<0) {if(r>=pb*(cb-nb)) {r-=pb*(cb-nb); nb=cb;} else {possible=0;break;}}
       if(ns-cs<0) {if(r>=ps*(cs-ns)) {r-=ps*(cs-ns); ns=cs;} else {possible=0;break;}}
       if(nc-cc<0) {if(r>=pc*(cc-nc)) {r-=pc*(cc-nc); nc=cc;} else {possible=0;break;}}
     }
    }
    if(possible==0) {cout<<"\n"<<ham; return 0;}
    else 
    {
      ham+=(r/(pb*cb+ps*cs+pc*cc));
      cout<<"\n"<<ham; return 0;
    }
}