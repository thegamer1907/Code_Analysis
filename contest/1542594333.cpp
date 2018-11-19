#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> vi;
#define MOD 1000000007
#define MAX 20000002


void solve()
{
  string s;
  cin>>s;
  ll n;
  cin>>n;
  string arr[n];
  for(ll i=0;i<n;i++) cin>>arr[i];
  for(ll i=0;i<n;i++)
  {
    if(arr[i]==s)
    {
      cout<<"YES\n";
      return;
    }
  }
  bool b1=0,b2=0;
  for(ll i=0;i<n;i++)
  {
    if(s[0]==arr[i][1]) b1=1;
    if(s[1]==arr[i][0]) b2=1;
  }
  if(b1 and b2) cout<<"YES\n";
  else cout<<"NO\n";
}

int main()
{
  ll t=1;
  for(ll i=1;i<=t;i++) solve();
} 
