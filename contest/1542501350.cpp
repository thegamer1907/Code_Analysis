#include <bits/stdc++.h>
#define ll long long
using namespace std ;
const int INFTY = 1000000000 ;

bool f(map<ll,ll>&mp,ll k,ll b){
	ll sz=1<<k;
	for(ll i=0;i<sz;++i){
		if(!(i&b)){
			if(mp.find(i)!=mp.end()){
				return 1;
			}
		}
	}
	return 0;
}

int main(int argc, char *argv[]) {
   ios_base::sync_with_stdio(0);
   ll n,k;
   cin>>n>>k;
   ll b;
   map<ll,ll>mp;
   for(ll i=0;i<n;++i){
   	b=0;
   	for(ll j=0;j<k;++j){
   		ll a;
   		cin>>a;
   		b=b+pow(2,j)*a;
   	}
   	mp[b]=1;
   	if(f(mp,k,b)){
   		cout<<"YES\n";
   		return 0;
   	}
   }
   cout<<"NO\n";
   return 0;
}
