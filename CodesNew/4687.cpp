#include<bits/stdc++.h>
using namespace std;
#define   UPR(x,y)  upper_bound(all(x),y)-x.begin()
#define   linp2(x,y) long long int x,y; cin>>x>>y;
#define   rep2(i,k,n) for(int i=k;i<=n;i++)
#define   all(x) x.begin(),x.end()
#define   vpll  vector<pll >
#define   vb  vector<bool>
#define   vll  vector<ll>
#define   MOD 1000000007
#define   sz(a) a.size()
#define   INF   1e18+7
#define   ff  first
#define   ss second
#define   pb push_back
#define   ld long double
#define   pll pair<ll,ll>
#define   ll   long long int
#define   rep1(i,k,n) for(int i=k;i<n;i++)
#define   linp1(n) long long int n; cin>>n;
#define   present(c,x) ((c).find(x) != (c).end())
#define   LWR(x,y)  lower_bound(all(x),y)-x.begin()
const ll MAX = 1e5+7;
// Start


void solve(){
     linp1(n);
     vll arr(n);
     rep1(i,0,n)
          cin>>arr[i];
     ll lim=n/2;
     ll l=n/2-1,r=n-1;
     ll cnt=0;
     sort(all(arr)); 
     while(l>=0){
          
          if(2*arr[l]<=arr[r]){
               cnt++;
               
               --l,--r;
          }
          else{
               
           --l;   
          }
     }
     cout<<n-cnt;
}
int main(){
  int t;
  t=1;
  cin.sync_with_stdio(0), cin.tie(0);
  //cin>>t;
  while(t--){
          solve();
          cout<<"\n";
     }
return 0;
}