#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i, n) for(ll i=0; i<n; i++)
int main(){
   ios::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);
   ll n, m, v; cin>>n>>m;
   vector <ll> a, f, dif(100000), l;
   loop(i, n){
      cin>>v;
      a.push_back(v);
    }
   loop(i, m){
      cin>>v;
      l.push_back(v);
   }
   reverse(a.begin(), a.end());
   f.push_back(1); dif[a[0]]++;
   for(ll i=1; i<n; i++){
      if(dif[a[i]]==0){
         f.push_back(f[i-1]+1);
         dif[a[i]]++;
      }
      else f.push_back(f[i-1]);
   }
   loop(i, m) cout<<f[n-l[i]]<<endl;
   return 0;
}
