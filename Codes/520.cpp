#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
  ll k;
  cin >> k;
  ll ans;
  for(ll i = 19; k > 0; i++){
    ll sum = 0,n = i;
    n = i;
    while(n){
      sum += n%10;
      n /= 10;
    }
    if(sum == 10){ --k; ans = i;}
  }
  cout << ans << endl;
  return 0;
}
