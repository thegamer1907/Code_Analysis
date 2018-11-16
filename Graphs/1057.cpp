#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll ms = 31234;

int main() 
{
  vector<ll> cells(ms);
  ll n,t,p;
  cin >> n >> t;
  n--;   t--; 
  for(ll i = 0;i<n;i++) cin >> cells[i];
  for(p = 0;p<t;p += cells[p]);
  
  if(p == t) cout << "YES\n";
  else  cout << "NO\n";

  return 0;   
}