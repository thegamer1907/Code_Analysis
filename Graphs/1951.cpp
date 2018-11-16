#include<bits/stdc++.h>
typedef long long ll;
#define F(i,L,R) for (ll i = L; i < R; i++)
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define re(x) scanf("%lld",&x)
using namespace std;


int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  ll n,m;
  cin>>n;
  ll a[n];
  F(i,0,n) cin>>a[i];
  cin>>m;
  ll b[m];
  F(i,0,m) cin>>b[i];
  sort(a,a+n);
  sort(b,b+m);
  ll p1 = 0,p2 = 0;
  ll ans = 0;
  while(p1<n&&p2<m){
  	if(a[p1]==b[p2]||(abs(a[p1]-b[p2])==1)){
  		p1++;
  		p2++;
  		ans++;
	  }
	  else if(a[p1]>b[p2]) p2++;
	  else if(a[p1]<b[p2]) p1++;
  }
  cout<<ans<<endl;
  
  return 0;
}
