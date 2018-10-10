#include <iostream>
#include<algorithm>
#include<string>
#include<map>
#include <iterator>
#include<iomanip>
#include<vector>
#include<cmath>
#include<queue>
#include<stack>
#include<list>
#include<set>
#include <functional>

#define mod 1000000007
#define mod2 30000000
#define pa(a,b) make_pair(a,b)
#define f first
#define s second
#define pb(a)  push_back(a)
#define all(a) a.begin() , a.end()
#define mem(a, b) memset(a, b, sizeof(a))
#define LL  long long int
#define oo 1e9
#define pi 3.14159265359

LL maxx(LL a , LL b){ return a>b ?  a : b ;}
LL minn(LL a , LL b){ return a>b ?  b : a ;}

using namespace std;
int dx[] = {1 , 1 ,1 , 0 , 0  , -1 , -1  , -1  , 0 };
int dy[] = { -1 , 0  , 1 , 1 , -1 , 0 , 1 , -1 , 0 };
void boostIO()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}
LL gcd(LL a, LL b) {
    return b == 0 ? a : gcd(b, a % b);
}
LL lcm(LL a , LL b )
{
    return (a*b)/gcd(a , b);
}
LL poww(LL base, LL exp){
  base %= mod;
  LL result = 1;
  while (exp > 0) {
    if (exp & 1) result = (result * base) % mod;
    base = (base * base) % mod;
    exp >>= 1;
  }
  return result;
}
int n , k ; string s;
int sum[2][100100];
bool check(int m  , bool f , int idx)
{
    return( (m-idx) - (sum[f][m] - sum[f][idx]) <=  k ) ;
}
int solve(int idx , bool f )
{
    int l = idx + 1 , r = n ;
    while( l < r )
    {
      int mid = ( l + r ) >> 1 ;
      if(check(mid , f , idx ))
        l = mid + 1 ;
      else
        r = mid ;
    }
    if(!check(l , f , idx))
        l--;
   return (l - idx ) ;
}
int main()
{
    cin>>n>>k>>s;  int ans = 0 ;
    for(int i=1;i<=n;i++)
        sum[0][i]+=sum[0][i-1] + (s[i-1]=='a')  , sum[1][i]+=sum[1][i-1] + (s[i-1]=='b') ;
    for(int i = 0 ; i < n ; i++)
        ans = max(ans , max(solve(i , 0 ) , solve(i , 1 )) ) ;
    cout<<ans ;
}
