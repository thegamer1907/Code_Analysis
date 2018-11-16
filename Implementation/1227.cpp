#include<bits/stdc++.h>
using namespace std;


#define MOD 1000000007
#define ll long long
#define mp make_pair
#define pb push_back
#define pp popo_back
#define nl printf("\n");
#define sf scanf
#define pf printf
#define rep(i,n) for(ll i=0;i<n;i++)
#define rep1(i,n) for(ll i=1;i<=n;i++)
#define vint vector<int>
#define  tc int t;scanf("%d",&t);while(t--)

ll x,y,r,z,prime[1000];

int main(){
  ll n;
  cin>>n;
  ll t;
  cin>>t;
  std::vector<ll> a;
  rep(i,n){
    char c;
    cin>>c;
    if(c=='B'){
      a.pb(1);
    }
    else{
      a.pb(0);
    }
  }
  while(t--){
    rep(i,n-1){
      if(a[i]==1&&a[i+1]==0){
        swap(a[i],a[i+1]);
        i++;
      }
    }
  }
  rep(i,n){
    if(a[i]==1){
      printf("B" );
    }
    else
      printf("G" );
  }
  nl

  }
