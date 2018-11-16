#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define endl '\n'
#define fr(i,l,n) for(int i=l;i<=n;++i)
#define fre(i,l,n) for(int i=l;i<n;++i)
#define rko(t) int t; cin>>t; while(t--)
typedef long long int ll;
typedef unsigned long long int ull;
#define MOD 1000000007
template<typename T>
inline T max( T a, T b, T c ) { return max( max(a,b), c ) ; }
template<typename T>
inline T max( T a, T b, T c, T d ) { return max( max(a,b), max(c,d) ) ; }
template<typename T>
inline T min( T a, T b, T c ) { return min( min(a,b), c ) ; }
template<typename T>
inline T min( T a, T b, T c, T d ) { return min( min(a,b), min(c,d) ) ; }
ll power(ll a,ll n,ll m){a=a%m;ll r=1;
while(n>0){
if(n%2==1)
r=r*a%m;
a=a*a%m;n=n/2;
}return r;}

/*****************************************************************************************************************************************************
********************  @author : Saif Haider   **********************************************************************************************
*****************************************************************************************************************************************************/
 



int main() { std::ios::sync_with_stdio(false);                // don't use scanf & printf
 string s;
 cin>>s;
 
 s="#"+s;
 int n=s.length();
 int sum[n];
 fill(sum,sum+n,0);
  sum[0]=0;

  for(int i=1;i<n;++i)
  {
    sum[i]=sum[i-1]+(int)(s[i]-'0');


  }

  for(int i=7;i<n;++i)
  {
    if(sum[i]-sum[i-7]==0 || sum[i]-sum[i-7]==7)
    {
      cout<<"YES";
      exit(0);
    }
  }
  cout<<"NO";



   return 0;
}


