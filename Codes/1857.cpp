#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define N 2005
#define ll long long 
#define mod 1000000007
#define barn cin.sync_with_stdio(0);cin.tie(0)
int check(ll val,ll n,ll m,ll k)
{
  ll a=0,b=0,x;
  for(int i=1;i<=n;i++)
  {

    if(val%i==0)
      x=min(m,val/i-1);
    else
      x=min(m,val/i);
    a=a+(x);
    if(val%i==0 && ((val/i) <= m))
     b++;
  }
  //cout<<a<<" "<<b<<"\n";
  if(a>=k)
     return 0;
  else
  {
    if(a+b<k)
      return 1;
    else
      return 2;
  } 
}
int main() {
  barn;
  //freopen("inputf.in","r",stdin);
  //freopen("outputf.in","w",stdout);
  ll n,m,k;
  cin>>n>>m>>k;
  ll l=1,h=n*m,mid,ans=0;
  while(l+1<h)
  { 
    mid=(l+h)/2;
    int s=check(mid,n,m,k);
    //cout<<mid<<" "<<s<<"\n";
    if(s==1)
      l=mid;
    else if(s==0)
      h=mid;
    else
    {
      ans=mid;
      break;
    }
  }
  if(ans==0)
  {
    if(check(l,n,m,k)==2)
       ans=l;
     if(check(h,n,m,k)==2)
       ans=h;
  }
  cout<<ans<<"\n";
  return 0;
} 