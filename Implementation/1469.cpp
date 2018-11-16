#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll choose(ll n,ll k);
bool isprime(ll n);
ll power(ll x,ll y,ll p);

int main()
{
  string s; cin>>s; //cout<<s.length()<<endl;
  if(s.length()<7) {cout<<"NO"; return 0;}
  for(int i=0;i<s.length()-6;i++)
  {
    if(s.substr(i,7)=="1111111"||s.substr(i,7)=="0000000") {cout<<"YES"; return 0;}
  }
  cout<<"NO";
  return 0;
}

ll choose(ll n,ll k)
{
  if(k==0)
    return 1;
  return (n* choose(n-1,k-1))/k;
}

bool isprime(ll n)
{
  for(ll i=2;i*i<=n;i++)
  {
    if(n%i==0)
      return false;
  }
  return true;
}

ll power(ll x,ll y,ll p)
{
  ll res=1;
  x=x%p;
  while(y>0)
  {
    if(y&1)
      res=(res*x)%p;
    y=y>>1;
    x=(x*x)%p;
  }
  return res;
}
