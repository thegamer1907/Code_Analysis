#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
ll n,x ,m,k,start,cnt,tim,q,tot,ans=00 ;
vector<ll>s;
int main()
{
  ios::sync_with_stdio(false);cin.tie(nullptr);
  cin>>n>>m>>k;
  for(int i=0 ; i<m ; i++){
    cin>>x;
    s.pb(x);
  }
  for(int i=0 ; i<m  ;  ){
        
      ll curpage= ( s[i]+k-1 -i ) /k ;
      ll j= i+1;
      for(  ; j<m ;  j++){

         ll page=( s[j] +k-1 -i ) /k ;
         if(curpage!=page) break;
      }
      ans++;
      i=j;
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