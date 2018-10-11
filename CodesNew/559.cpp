#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,ll> pii;
#define MOD 10000000079
#define mod(a) (a)%MOD
#define pb push_back
#define ft first
#define sd second
#define all(v) v.begin(),v.end()
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl '\n'
ll gcd(ll a,ll b){if(a==0) return b; return gcd(b%a,a);}
ll powm(ll base,ll exp,ll mod=MOD) {base%=mod;ll ans=1;while(exp){if(exp&1LL) ans=(ans*base)%mod;exp>>=1LL,base=(base*base)%mod;}return ans;}

ll isNotPrime[10000004];
ll x[10000006];
ll ans[10000006];
ll spf[10000004];
void sieve(ll n){
      for(ll i=2;i<=n;i++){
      	if(isNotPrime[i])
      		continue;
      	spf[i]=i;
      	for(int j=2*i;j<=n;j+=i){
            if(!isNotPrime[j])
                spf[j]=i;
            isNotPrime[j]=1;
      	}

      }


}

int main(){

     sync;
     ll n;
     cin>>n;
     sieve(10000005);
     for(int i=1;i<=n;i++){
       cin>>x[i];
     }
     ll m;cin>>m;
     for(int i=1;i<=n;i++){
        ll prev=-1;
        while(x[i]!=1){
           if(spf[x[i]]!=prev){
               ans[spf[x[i]]]++;
               prev=spf[x[i]];
           }
            x[i]/=spf[x[i]];
        }
     }
     for(int i=2;i<=10000007;i++){
        ans[i]=ans[i-1]+ans[i];
     }


     while(m--){
     	ll l,r;
     	cin>>l>>r;
     	r=min(10000000LL,r);
     	l=min(l,r);
     	cout<<ans[r]-ans[l-1]<<endl;
     }
}
