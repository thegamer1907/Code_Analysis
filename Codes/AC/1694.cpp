#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const ll NMAX = 1e5+7;
ll n,m,k;
ll ok(ll x){
  ll ret = 0;
  for(ll i = 1; i<=n; i++){
      ret+=min(m, (x-1)/i);
  }
  return ret<k;
}
int main(){
   std::cin >> n >> m >> k;
   ll l = 1, r = n*m+1, mid;
   while (l<=r) {
    mid = l + (r-l)/2;
     if(ok(mid)) l=mid+1;
     else r = mid-1;
   }
   std::cout << l-1 << '\n';
}
