#include <bits/stdc++.h>

using namespace std;
#define pb push_back
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(),(x).end()
#define ll long long

const int N=1e6+1,MOD=1e9+7,MAX=1e5;

string str;
int nb,ns,nc,pb,ps,pc,bneed,sneed,cneed;
ll k;

bool check(ll x){

        ll b = max(x*bneed - nb,0LL)*pb ,s = max(x*sneed - ns,0LL)*ps ,c = max(x*cneed - nc,0LL)*pc;
       
        return ( k >= b+s+c  );
}
int  main()
{
           #ifndef ONLINE_JUDGE
     freopen("test.txt","r",stdin);
   #endif  
          
          cin>>str>>nb>>ns>>nc>>pb>>ps>>pc>>k;

          for(auto c:str){

               bneed+=(c=='B');
               sneed+=(c=='S');
               cneed+=(c=='C');
          }

          ll l=0,r=1e13,ans=0;

          while(l<=r){

              ll mid = (l+r)/2;

              if(check(mid)){
                 
                  ans=mid;
                  l=mid+1;
              }
              else{
                
                 r=mid-1;
              }
          }

          cout<<ans<<"\n";
       
 return 0;
}