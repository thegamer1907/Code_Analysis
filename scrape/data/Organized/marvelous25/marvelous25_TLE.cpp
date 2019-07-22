#include<bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define ppb         pop_back
#define	endl		'\n'
#define mii         map<ll int,ll int>
#define msi         map<string,ll int>
#define mis         map<ll int, string>
#define rep(i,a,b)    for(ll int i=a;i<b;i++)
#define mpi         map<pair<ll int,ll int>,ll int>
#define pii         pair<ll int,ll int>
#define vi          vector<ll int>
#define vii         vector<pair<ll int, ll int>>
#define vs          vector<string>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (ll int)x.size()
#define hell        1000000007
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define mp          make_pair
/*bool prime[100000001];
void sieve(ll n) 
{ 
   
    
    memset(prime,true, sizeof(prime)); 
    prime[1]=false;
  
    for (ll p=2; p*p<=n; p++) 
    { 
       
        if (prime[p] == true) 
        { 
            
            for (ll i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
  
   
    
} */
ll power(ll a,ll b,ll c){
    ll ans=1;
    a=(a%c);
    while(b>0){
        if(b&1){
            ans=(ans*a)%c;
        }
        b=b>>1;
        a=(a*a)%c;
    }
    return ans;
    
    
}

using namespace std;

int main() 
{  
ll m,n,l;
cin>>m>>n>>l;
ll a[n];
for(int i=0;i<n;i++)
cin>>a[i];
ll ans=0;
ll prev=0;

while(prev<n){
    ans+=1;
    //cout<<prev<<endl;
    ll d=ceil(((double)a[prev]-(double)prev)/(double)l);
    ll g=(l*d)+prev;
    ll i;
    for(i=prev;i<n;i++){
        if(a[i]>g)
        break;
    }
    prev=i;
}
cout<<ans;
}