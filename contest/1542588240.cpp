#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> vi;
#define MOD 1000000007
#define MAX 20000002


void solve()
{
  ll h,s,m,t1,t2;
  cin>>h>>m>>s>>t1>>t2;
  double a = min(t1,t2);
  double b = max(t1,t2);
  double ts = s/5.0;
  double tm = (m+s/60.0)/5.0;
  double th = (h+m/60.0+s/3600.0); 
  // cout<<a<<" "<<b<<" "<<ts<<" "<<tm<<" "<<th<<endl;
  if((th>b || th<a) && (tm>b || tm<a) && (ts>b || ts<a))
  	cout<<"YES\n";
  else if((th<b && th>a) && (tm<b && tm>a) && (ts<b && ts>a))
  	cout<<"YES\n";
  else cout<<"NO\n";
}

int main()
{
  ll t=1;
  for(ll i=1;i<=t;i++) solve();
} 
