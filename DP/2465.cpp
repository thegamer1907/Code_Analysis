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
const LL M = (LL)1E9 + 7 ;
LL n,i,j,ans = 0;
LL a[1000000],pre[1000000] ;
int main()
{   // Read the constraints,highlights,Time Limit,Test Cases
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    LL q,k,l,r;
    cin>>q>>k ;
    REP(i,k) a[i] = 1 ;
    a[0] = 1 ;
    a[k] = 2 ;
    for(i=k+1;i<=100000+5;i++)
     a[i] = (a[i-1] + a[i-k] + M)%M ;

    for(i=1;i<=100000+5;i++)
    { a[i] = a[i-1] + a[i] ;
      a[i] = (a[i] + M)%M ;
    }
    while(q--)
    {  cin>>l>>r ;
       LL ans = (a[r] - a[l-1] + M)%M ;
       cout<<ans<<endl;
    }

}
// Check for 1,0, and other corner cases.
