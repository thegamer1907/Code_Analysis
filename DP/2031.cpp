#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
  ll n,m;
  cin >> n >> m;
  ll v[n];
  vector<ll> c;
  ll a,i;
  set<ll> s;
  for(i=0;i<n;i++)
    cin >> v[i];
  for(i=n-1;i>=0;i--)
  {
      s.insert(v[i]);
      c.push_back(s.size());
  }
  for(i=0;i<m;i++)
  {
      cin >> a;
      cout << c[n-a] << endl;
  }
}