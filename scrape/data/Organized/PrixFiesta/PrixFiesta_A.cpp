/*

  _____      _____     _____    __    __    _______    _____    _____    ______      _______      __
 |  _  \    |  _  \   |_   _|   \ \  / /   |   ____|  |_   _|  |  ___|  (   ___|    |__   __|    /  \
 | |_)  )   | |_)  )    | |      \ \/ /    |  |____     | |    | |__     \  (__        | |      / /\ \
 | ____/    | ____/     | |      / /\ \    |   ____|    | |    |  __|     \__   \      | |     / /__\ \
 | |        | |\ \     _| |_    / /  \ \   |  |        _| |_   | |___     ____)  )     | |    / /----\ \
 |_|        |_| \_\   |_____|  /_/    \_\  |__|       |_____|  |_____|   |______/      |_|   /_/      \_\
*/

#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ll  long long int
typedef tree<ll, null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;
#define M 100005
#define mod 1000000007
#define oo (ll)1e18
#define pii pair<ll,ll>
#define fi first
#define se second
#define debug(x) cout<<" :"<<x<<"\n";
#define debug2(x,y) cout<<#x<<" :"<<x<<"\t"<<#y<<": "<<y<<"\n";
#define f(i,x,y) for(ll i=x;i<y;i++)
#define boost ios::sync_with_stdio(0);cin.tie(0);
#define in_arr0(a,n) f(i,0,n){cin>>a[i];}
#define in_arr1(a,n) f(i,1,n+1){cin>>a[i];}
#define pb(i) push_back(i)
#define mp(x,y) make_pair(x,y)
ll n,m,k;
ll p[M];
int main(){
  boost;
  cin>>n>>m>>k;
  f(i,0,m){
    cin>>p[i];
  }
//   if(k==1){
//       cout<<m;
//       return 0;
//   }
  ll curused=0;
  ll steps = 0;
  ll curwindowstart = (p[0]/k)*k+1;
  if(p[0]%k==0){
      curwindowstart-=k;
  }
  ll curwindowend = curwindowstart+k-1;
//   debug2(curwindowstart,curwindowend)
 while(1){
   if(curused==m){break;}
   if(p[curused]-curused>curwindowend){
     curwindowstart = ((p[curused]-curused)/k)*k+1;
     if((p[curused]-curused)%k==0){
         curwindowstart -=k;
     }
     curwindowend = curwindowstart+k-1;
   }
//    debug2(curwindowstart,curwindowend)

   ll incurrentwindow = 0;
   for(ll i=curused;i<m;i++){
     if(p[i]-curused>curwindowend){
       break;
     }
     incurrentwindow++;
   }
   steps++;
   curused+= incurrentwindow;
 }
  cout<<steps;
    return 0;
}