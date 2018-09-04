/*Coded by::
    **Avinash Tiwary**
    **BE/10298/2015**
    **Production Engineer**
    **Producing <code>**
*/
#include<bits/stdc++.h>
#define buf ios_base::sync_with_stdio (0), cin.tie (0)
typedef long long ll;
typedef double dob;
#define MAX 50010
#define M5 500009
#define M6 2000009
#define M 1000000007
#define inf LLONG_MAX
using namespace std;
typedef vector<ll> V;
typedef queue<ll > Q;
typedef stack<ll> S;
typedef pair<ll,ll> P;
#define F first
#define S second
#define mp make_pair
#define mt make_tuple
#define pb push_back
ll fac[M6],not_prime[M6];
ll power(ll x,ll n){
    if(x==0) return 0;
    if(n==0) return 1;
    /*while(n){
        if(n%2) x=(((x*x)%M)*x)%M; 
        else x=(x*x)%M;
        n/=2;
    }*/
    if(n%2 == 0) return power((x*x),n/2);
    else return (x*power((x*x),(n-1)/2));
}
void fact(){
    fac[0]=1;
    for(ll i=1;i<M6;i++) fac[i]=(i*fac[i-1])%M;
}
void sieve(){
    not_prime[1]=1; not_prime[0]=1;
    for(ll p=2;p*p<M6;p++){
        if(!not_prime[p]){
            for(ll i=p*2;i<=M6;i+=p) not_prime[i]=1;
        }
    }
}
ll modi(ll a, ll m){
    ll m0 = m, t, q; ll x0 = 0, x1 = 1;
    if (m == 1) return 0;
    while (a > 1){  q = a / m; t = m; m = a % m, a = t;t = x0;x0 = x1 - q * x0; x1 = t;}
    if (x1 < 0) x1 += m0;return x1;
}
ll n,q,ar[M5],Z[M5];
void create_Z(string s){
	Z[0]=0;
	ll i,l=0,r=0;
	for(i=1;i<s.size();i++){
		if(i>r){
			l=r=i;
			while(r<s.size()&&s[r]==s[r-l]) r++;
			Z[i]=r-l;
			r--;
		}
		else{
			if(Z[i-l]<r-i+1) Z[i]=Z[i-l];
			else{
				l=i;
				while(r<s.size()&&s[r]==s[r-l]) r++;
				Z[i]=r-l;
				r--;		
			}
		}
	}
}
int main(){
    buf; 
    //sieve(); 
    //fact();
    ll i,j,k,test,flag,ans,t,a,b,c,d; string s;
    //cin>>test;
    test=1;
    while(test--){
    	cin>>s;
    	ll mm=0;create_Z(s);
    	
    	for(i=0;i<s.size();i++){
    		if(Z[i]==(ll)s.size()-i&&mm>=Z[i]){
    			for(j=0;j<Z[i];j++) cout<<s[j];
    			return 0;
    		}
    		mm=max(mm,Z[i]);
    	}
    	cout<<"Just a legend\n";
    }
    return 0;
} 