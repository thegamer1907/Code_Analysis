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


  bool isprime[10000005]={0};
  ll ans[10000005];
  ll m[10000005];

int main()
{
  ll N=10000000;
  ios

  ll n;
    cin>>n;

  for(int i=0;i<n;i++)
  {
    ll x;
    cin>>x;
    m[x]++;
  }


  for(int i=2;i<=N;i++)
  {
    ans[i]=ans[i-1];
    if(!isprime[i])
    {
      ans[i]+=m[i];
      for(int j=2*i;j<=N;j+=i)
      {
        isprime[j]=1;
        ans[i]+=m[j];
      }
    }
  }

  ll q;
  cin>>q;
  while(q--)
  {
    ll l,r;
    cin>>l>>r;
    if(l>=N)
			{	cout << "0\n";
        continue;
      }
    r=min(r,N);
    cout<<ans[r]-ans[l-1]<<"\n";
  }
}
