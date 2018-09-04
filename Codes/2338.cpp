#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pll;
int main(){
	ios_base::sync_with_stdio(0);
	ll c=0,n,x,m;
	vector<pll> primes;
	vector<ll> fact(1e7+1,0);
	map<ll,int> pti;
	for (ll i=2;i<3164;i++){
	   if (!fact[i]){
	      primes.push_back(pll(i,0LL));
	      pti[i]=c++;
	      fact[i]=i;
	      ll k=i-1;
	      while (++k*i<=1e7){
	         if (!fact[k*i]) fact[k*i]=i;
	      }
	   }
	}
	for (ll i=3164;i<1e7+1;i++){
	   if (!fact[i]){
	      primes.push_back(pll(i,0LL));
	      pti[i]=c++;
	      fact[i]=i;
	   }
	}
	cin>>n;
	while (n--){
	   cin>>x;
	   while (x-1){
	      primes[pti[fact[x]]].second++;
	      ll f=fact[x];
	      while (!(x%f)) x/=f;
	   }
	}
	for (ll i=1;i<c;i++) primes[i].second+=primes[i-1].second;
	cin>>m;
	while (m--){
	   ll l,r,mini,maxi,midi;
	   cin>>l>>r;
	   if (l>primes[c-1].first) cout<<0<<"\n";
	   else {
	      mini=0; maxi=c-1;
	      while (mini!=maxi){
	         midi=(mini+maxi)/2;
	         if (primes[midi].first>=l) maxi=midi;
	         else mini=midi+1;
	      }
	      l=mini;
	      mini=0; maxi=c-1;
	      while (mini!=maxi){
	         midi=(mini+maxi+1)/2;
	         if (primes[midi].first<=r) mini=midi;
	         else maxi=midi-1;
	      }
	      r=maxi;
	      if (l<=r){
	         if (l) cout<<primes[r].second-primes[l-1].second<<"\n";
	         else cout<<primes[r].second<<"\n";
	      } else cout<<"0\n";
	   }
	}
	return 0;
}