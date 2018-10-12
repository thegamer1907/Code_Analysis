#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define mod 1000000007
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

typedef long long ll ;
typedef long double ld ;
typedef long long int lli;

using namespace std;

ll mult(ll a,ll b, ll p=mod){return ((a%p)*(b%p))%p;}
ll add(ll a, ll b, ll p=mod){return (a%p + b%p)%p;}
ll sub(ll a, ll b, ll p=mod){return (a%p - b%p + p)%p;}
ll fpow(ll n, ll k, ll p = mod) {ll r = 1; for (; k; k >>= 1) {if (k & 1) r = r * n%p; n = n * n%p;} return r;}
ll inv(ll a, ll p = mod) {return fpow(a, p - 2, p);}



int main()
{
  string s;
  cin>>s;
  ll B=0,S=0,C=0,nb,ns,nc,pb,ps,pc,r;
  cin>>nb>>ns>>nc>>pb>>ps>>pc>>r;
  for(int i=0;i<s.length();i++)
  {
    if(s[i]=='B') B++;
    else if(s[i]=='C')  C++;
    else  S++;
  }
  ll ans=LLONG_MAX;
  if(B!=0)
    ans=min(ans,nb/B);
  else  nb=0;
  if(C!=0)
    ans=min(ans,nc/C);
  else  nc=0;
  if(S!=0)
    ans=min(ans,ns/S);
  else  ns=0;
  nb-=ans*B;
  nc-=ans*C;
  ns-=ans*S;
  ll cost=0;
  while(r>0)
  {
    if(nb==0&&nc==0&&ns==0)
      break;
    cost=0;
    if(nb<B)
    {
      cost+=(B-nb)*pb;
      nb=0;
    }
    else
    {
      nb-=B;
    }
    if(nc<C)
    {
      cost+=(C-nc)*pc;
      nc=0;
    }
    else{
      nc-=C;
    }
    if(ns<S)
    {
      cost+=(S-ns)*ps;
      ns=0;
    }
    else
    {
      ns-=S;
    }
    if(r>=cost)
    {
      r-=cost;
      ans++;
    }
    else
      break;
  }
  if(r!=0)
  {
    ans+=r/((B*pb)+(S*ps)+(C*pc));
  }
  cout<<ans;
}
