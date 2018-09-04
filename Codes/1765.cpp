/*****Enigma27*****/
#include<bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define  endl    '\n'
#define pll         pair<ll int,ll int>
#define vll          vector<ll int>
#define all(a)      (a).begin(),(a).end()
#define x           first
#define y           second
#define sz(x)       (ll int)x.size()
#define hell        1000000007
#define rep(i,a,b)  for(ll int i=a;i<b;i++)
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define gcd(a,b)    __gcd((a),(b))
#define lcm(a,b)    ((a)*(b)) / gcd((a),(b))
#define ios      ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
ll n,i,j,k,l,sum=0,flag=0,t,a[100005],ans=0,m;
ll check(ll x){
  ll cnt=0;
  for(i=1;i<=n;i++){
    cnt+=min((x/i),m);
  }
  return cnt;
}
int main()
{
  ios
  cin>>n>>m>>k;
  ll high=n*m,low=1,mid=(low+high)/2;
  while(high-low>1){
    if(check(mid)>=k) high=mid;
    else  low=mid;
    mid=(low+high)/2;
  }
  if(check(low)==k) cout<<low<<endl;
  else cout<<high<<endl;
  return 0;
}