#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lld long double
#define vi vector<int>
#define vll vector<ll>
#define vvl vector<vll>
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
#define vpi vector<pii>
#define vpl vector<pll>
#define rshuffle(x,y) unsigned seed = std::chrono::system_clock::now().time_since_epoch().count(); shuffle (x, y, std::default_random_engine(seed));
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define rep(i,n) for(ll i=0;i<n;i++)
#define repA(i,a,n) for(ll i=a;i<=n;i++)
#define repD(i,a,n) for(ll i=a;i>=n;i--)
ll gcd(ll a, ll b) {return (b ? gcd(b,a%b):a); }
ll lcm (ll a, ll b) {return a/gcd(a,b) * b; }
ll inf = 1e9+7;

int main(){
  std::ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  ll v;
  cin>>v;

  vll a(10);
  ll mi=inf;
  repA(i,1,9){
    cin>>a[i];
    mi=min(mi,a[i]);
  }
  ll dig=v/mi;
  ll extra=v%mi;

  if(dig==0) cout<<-1;

  ll i=9;
  ll cnt=0;
  while(i>=0 && cnt<dig){
    if(a[i]-mi<=extra){
      extra-=a[i]-mi;
      cout<<i;
      cnt++;
    }
    else{
      i--;
    }
  }
}
