#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
ll n,x ,m,k,start,cnt,tim,q,tot,ans=00 ;
vector<ll>s;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
  cin>>n>>m>>k;
  for(int i=0 ; i<m ; i++){
    cin>>x;
    s.pb(x);
  }
  sort(s.begin(),s.end());
  start=k;
  cnt=0;
  tim=1;
  while(s.size()  ){

     //cout<<"searc- "<<start<<" ";
     auto it=upper_bound(s.begin() , s.end() ,start ) ;
     //cout<<"UB- "<<*it;
     --it;
     //cout<<" EB- "<<*it;
     q=it-s.begin();
     if(q==-1 ) {

          ++tim;
          start=start+k+cnt;
          cnt=0;
          //cout<<"NO PROBLEMO THIS PAGE , new page= "<<start<<endl;
          continue;
     }
     tot=0;
     if(q>=0){
        ans++;
        tot=q+1;
     }
     //cout<<" & ans- "<<ans<<" ElemDet.tot- "<<tot;
     if(tot){  cnt=cnt+tot; }
     while(tot--) {s.erase( s.begin() );}
    /// ++tim;
     start=start+cnt;
     cnt=0;
     //cout<<" newp= "<<start<<" and elems";
//     for(auto it2:s){
//         cout<<it2<<":";
//     } cout<<endl;

  }
  cout<<ans;

  return 0;
}

/*
13 9 4
1 2 3 6 7 8 11 12 13
*/



///author-joydip007x         ///
///Time&Date-Whenever i submit///