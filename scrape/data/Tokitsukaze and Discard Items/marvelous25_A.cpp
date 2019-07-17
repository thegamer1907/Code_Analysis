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
unsigned ll m,n,l;
cin>>m>>n>>l;
unsigned ll a[n];
for(int i=0;i<n;i++)
cin>>a[i];
unsigned ll ans=0;
unsigned ll prev=0;
unsigned ll j=l;
while(prev<n){
    ans+=1;
    //cout<<prev<<endl;
   if(a[prev]>j)
	    {
	        j=j+(((a[prev]-1+l-j)/l)*l);
	    }
    
    unsigned ll i;
    unsigned x=0;
    for(i=prev;i<n;i++){
        if(a[i]>j)
        break;
        x++;
    }
    j+=x;
    prev=i;
}
cout<<ans;
}