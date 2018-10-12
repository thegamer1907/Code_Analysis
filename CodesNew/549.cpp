#include <bits/stdc++.h>
#define ll long long
using namespace std;

//ll p[10000003];
std::vector<ll> dp(10000003,0);
//std::vector<ll> primes;


#define MAXN   10000001 
  
// stores smallest prime factor for every number 
ll spf[MAXN]; 
  
// Calculating SPF (Smallest Prime Factor) for every 
// number till MAXN. 
// Time Complexity : O(nloglogn) 
void sieve() 
{ 
    spf[1] = 1; 
    for (ll i=2; i<MAXN; i++) 
  
        // marking smallest prime factor for every 
        // number to be itself. 
        spf[i] = i; 
  
    // separately marking spf for every even 
    // number as 2 
    for (ll i=4; i<MAXN; i+=2) 
        spf[i] = 2; 
  
    for (ll i=3; i*i<MAXN; i++) 
    { 
        // checking if i is prime 
        if (spf[i] == i) 
        { 
            // marking SPF for all numbers divisible by i 
            for (ll j=i*i; j<MAXN; j+=i) 
  
                // marking spf[j] if it is not  
                // previously marked 
                if (spf[j]==j) 
                    spf[j] = i; 
        } 
    } 
    //cout<<spf[5];
} 
  
// A O(log n) function returning primefactorization 
// by dividing by smallest prime factor at every step 
void getFactorization(ll x) 
{ 
    while (x != 1) 
    { 
    	//cout<<x<<endl;
    	if(spf[x]==0) break;
        dp[spf[x]]++;
        ll sp=spf[x];
        x = x / sp;
        while(x%sp==0)
        	x/=sp;
    } 
     
} 
  

int main() {
    std::ios::sync_with_stdio(false);cin.tie(0);
    //unordered_map<ll,ll> mp;
    ll n;
    sieve();
    cin>>n;
    std::vector<ll> a(n);
    for(int i=0;i<n;i++){
    	cin>>a[i];
    	//mp[a[i]]++;
    	//if(mp[a[i]]>1) a[i]=1;
    }

    ll m;

    //for(ll i=4;i<10000001;i++) p[i]=1;
    /*primes.push_back(2);
    for(ll i=3;i<3301;i+=2){
    	if(p[i]==1) continue;
    	primes.push_back(i);
    	for(ll j=i*i;j<10000001;j+=2*i)
    		p[j]=1;
    }

    for(ll i=3301;i<5000001;i+=2){
    	if(p[i]==1) continue;
    	primes.push_back(i);
    }*/
    //for(int i=0;i<10;i++) cout<<primes[i]<<" ";
    for(ll i=0;i<n;i++){
    	
    	//cout<<"-----"<<a[i]<<endl;
    	
    	//ll lim=primes.size();
    	//cout<<"$"<<dp[11]<<endl;
    	//ll root=sqrt(a[i]);
    	//if(root*root!=a[i]) root++;
    	ll org=a[i];
    	getFactorization(a[i]);
    	//cout<<"$"<<dp[11]<<endl;
    }
    
    for(ll i=1;i<10000001;++i){
    	//cout<<i<<" -"<<dp[i]<<endl;
    	dp[i]=dp[i-1]+dp[i];
    	//cout<<i<<" -"<<dp[i]<<endl;
    }
    cin>>m;
    while(m--){
    	ll l,r;
    	cin>>l>>r;
    	if(r>=10000000) r=10000000;
    	if(l>=10000000) l=10000000;
    	cout<<dp[r]-dp[l-1]<<endl;
    }

    return 0;
}