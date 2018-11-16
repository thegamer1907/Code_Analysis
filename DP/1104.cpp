/******************************************
*    AUTHOR:         ASHUTOSH MAHESHWARI    *
*    INSTITUITION:   SGSITS INDORE   *
******************************************/
#include <bits/stdc++.h>
using namespace std;
 
typedef long long LL; 
typedef long double LD;

const int MAX   = 1e5 + 5;
const int LIM   = 3e5 + 5;
const int MOD   = 1e9 + 7;
const LD  EPS   = 1e-10;
const double PI = acos(-1.0);

#define fastio          ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define Assert(x) 		{if(!(x)){cerr<<"Assertion failed at line "<<__LINE__<<": "<<#x<<" = "<<(x)<<"\n";exit(1);}}
#define inchar          getchar//_unlocked
#define outchar(x)      putchar(x)//_unlocked(x)
#define unique(a)       sort((a).begin(), a.end()), (a).erase(unique((a).begin(), (a).end()),(a).end())



double tick(){static clock_t oldt;clock_t newt=clock();double diff=1.0*(newt-oldt)/CLOCKS_PER_SEC;oldt = newt;return diff;}

template<typename T> T gcd(T a, T b){return (b?__gcd(a,b):a);}
template<typename T> T lcm(T a, T b){return (a*(b/gcd(a,b)));}
template<typename T> T mod(T a, T b) {return (a<b ? a : a%b);}
template<typename T> T add(T a, T b, T c){T x=a+b;return (x>=c ? x-c : x);}
template<typename T> T mod_neg(T a, T b) {a=mod(a, b);if(a<0){a+=b;}return a;}
LL mulmod(LL a,LL b, LL m){LL q=(LL)(((LD)a*(LD)b)/(LD)m);LL r=a*b-q*m;if(r>m)r%=m;if(r<0)r+=m;return r;}
template<typename T> T expo(T e, T n){T x=1,p=e;while(n){if(n&1)x=x*p;p=p*p;n>>=1;}return x;}
template<typename T> T power(T e, T n, T m){T x=1%m,p=e;while(n){if(n&1)x=mod(x*p,m);p=mod(p*p,m);n>>=1;}return x;}
template<typename T> T extended_euclid(T a, T b, T &x, T &y){T xx=0,yy=1;y=0;x=1;while(b){T q=a/b,t=b;b=a%b;a=t;t=xx;xx=x-q*xx;x=t;t=yy;yy=y-q*yy;y=t;}return a;}
template<typename T> T mod_inverse(T a, T n){T x,y;T d = extended_euclid(a, n, x, y);return (d>1?-1:mod_neg(x,n));}

int main() {
    // #ifndef ONLINE_JUDGE
    //     freopen("inp.txt", "r", stdin);
    //     freopen("out.txt", "w", stdout);
    // #endif
    fastio;
  int n;
  cin>>n;
vector<int>v(n);
  for(int i=0;i<n;i++)
  {
      cin>>v[i];
      

  }
  int yehai=0,maxxy=0;
int flag=0;

  for(int i=0;i<n;i++)
  {
      for(int j=i ;j<n;j++)
      {
          int count0=0,count1=0;
          for(int k=i;k<=j;k++)
          {
              if(v[k]==0)
              count0++;
              else
              count1++;
             maxxy=max(count0,count1);
             if(count0>=count1)
             flag=1;
          


          }

          for(int k=0;k<i;k++)
          {
              if(v[k]==1)
              maxxy++;
          }
          for(int k=j+1;k<n;k++)
          {
              if(v[k]==1)
              maxxy++;
          }
          yehai=max(yehai,maxxy);
      }
  }

  if(flag==1)
cout<<yehai<<endl;
else{
    cout<<n-1<<endl;
}
   
    return 0;
}