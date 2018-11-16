#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector< ll > v;
ll maxx = -1;
 ll n ;
ll cnt(ll i , ll j)
{
      ll ans = 0;
      for(ll k=0;k<n;++k){
            if(v[k]==1){
                  ++ans;
            }
      }
      return ans;
}
ll flips(ll i , ll j){
      for(ll k=i;k<=j;++k){
           v[k] = 1-v[k];
      }
      return cnt(i,j);
}
void configure(ll i , ll j){
      for(ll k=i;k<=j;++k){
            v[k] = 1-v[k];
      }
}
int main()
{
      ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
      cin >> n ;
      for( ll i=0;  i<n ; ++i){
            ll x;
            cin >> x;
             v.push_back(x);
      }
      for(ll i=0;i<n;++i){
            for(ll j=i;j<n;++j){
                  ll foo = flips(i,j);
                  configure(i,j);
                 // cout<<" i is "<<i<<"  j is "<<j<<" foo is "<<foo<<endl;
                  maxx = max(maxx , foo);
                  continue;
            }
      }
      cout<<maxx<<endl;
      cout.flush();
      return 0;

}
