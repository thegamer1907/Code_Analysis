#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define pii pair<int,int>
#define pll pair<ll,ll>
#define PB push_back
#define MP make_pair

bool Check(ll n, ll k){
  ll x = 0, y = 0;
  while(n){
    ll _x = min(k, n);
    n -= _x;

    ll _y = n / 10;
    n -= _y;

    x += _x, y += _y;
  }
  return (x >= y);
}

ll BinarySearch(ll n){
  ll x = 1, y = n, ans = n;
  while(x <= y){
    ll mid = x + (y - x) / 2;
    if(Check(n, mid)){
      ans = mid, y = mid - 1;
    }
    else
      x = mid + 1;
  }
  return ans;
}

int main(){
  ll n;

  cin >> n;
  cout << BinarySearch(n) << '\n';

  return 0;
}
