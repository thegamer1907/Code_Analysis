/*siddharth goyal*/
#include<bits/stdc++.h>
using namespace std;
#define   pb              push_back
#define   REP(i,n)        for(i=1;i<=n;i++)
#define   FOR(i,a,b)      for(i=a;i<=b;i++)
#define   all(v)          v.begin(),v.end()
#define   F               first
#define   S               second
#define   vl              vector<LL>
#define   itr             ::iterator it
#define   lb              lower_bound
#define   ub              upper_bound
#define   LL              long long
#define   ULL             unsigned long long
LL n,i,j,ans = 0;
LL dp[500000],a[1000000] ; 
int main()
{   // Read the constraints,highlights,Time Limit,Test Cases
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    LL n,m,x ; 
    cin>>n>>m ; 
    set <LL> s ; 
    REP(i,n)  cin>>a[i] ; 
    for(i=n;i>=1;i--) s.insert(a[i]),dp[i] = s.size() ;   
    while(m--)
    {  LL x ; 
       cin>>x ; 
       cout<<dp[x]<<endl ;

    }
}
//Check for 0,1 and other corner cases.