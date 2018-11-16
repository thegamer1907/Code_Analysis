#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
ll a[200005];
int main() {
  ll n, t;
  cin >> n >>t;
  for (int i = 1; i < n; i++) {
    cin >> a[i];
  }
  ll x = 1;
  while (x < t) {
    x += a[x];
  }
  if(x == t) 
  cout << "YES" <<endl;
  else
  cout << "NO" <<endl;
}