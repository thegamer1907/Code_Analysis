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
#define M5 200009
#define M6 2000009
#define M 1000000007
#define inf LLONG_MAX
using namespace std;
typedef vector<ll> V;
typedef queue<ll > Q;
typedef stack<ll> S;
typedef pair<dob,ll> P;
#define F first
#define S second
#define mp make_pair
#define mt make_tuple
#define pb push_back
ll fac[M6],not_prime[M6],ar[M6];
ll power(ll x,ll n)
{   if(n==0) return 1;
    else if(n%2 == 0) return power((x*x)%M,n/2);
    else return (x*power((x*x)%M,(n-1)/2))%M;
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
vector<list< ll > > g(M5);
int main(){
    buf; 
    //sieve(); 
    //fact();
    ll i,j,test,flag,t,ans,a,b,n,m,d,q,l; string s1,s2,s3;
    test=1;
    while(test--){
        cin>>s1;
        cin>>n;
        a=0,b=0;
        for(i=1;i<=n;i++){
            cin>>s2;
            if(s2==s1) {a=1,b=1;}
            if(s2[s2.size()-1]==s1[0]) a=1;
            if(s2[0]==s1[s2.size()-1]) b=1;
        }
        if(a&&b) cout<<"YES";
        else cout<<"NO";
    }
    return 0;
}