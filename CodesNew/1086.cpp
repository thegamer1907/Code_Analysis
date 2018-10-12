#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
const double PI  =3.141592653589793238463;
long long MOD = 1000000007;
int stringToInteger(string x){
    int gg=0;
    stringstream geek(x);
    geek >> gg;
    return gg;
}

ll powmod(ll a,ll b,ll m)
{
    ll ans=1;
    while(b>0){ if(b%2)
        {ans*=a; ans%=m;}
         b/=2; a=a*a; a=a%m;
        }
        return ans%m;
}
ll gcd(ll a,ll b)
{

    return __gcd(a,b);
}
ll mulmod(ll a,ll b,ll m)
{  ll ans=0;
    a %=m;
    while (b>0)
    {       if(b&1) ans = (ans + a) % m;
        a = (a * 2)%m;
        b /= 2;
    }
    return ans % m;
}


ll f[5000001];

ll pow(ll a, ll b, ll MOD)
{
 ll x=1,y=a;
 while(b > 0)
 	{
 		if(b%2 == 1)
 	{
 		x=(x*y);
 		if(x>MOD) x%=MOD;
 	}
 	y = (y*y);
 	if(y>MOD) y%=MOD;
 	b /= 2;
 	}
 return x;
}

/* Modular Multiplicative Inverse
 Using Euler's Theorem
 a^(phi(m)) = 1 (mod m)
 a^(-1) = a^(m-2) (mod m) */
ll InverseEuler(ll n, ll MOD)
{
 return pow(n,MOD-2,MOD);
}

ll C(ll n, ll r, ll MOD)
{

 return (f[n]*((InverseEuler(f[r], MOD) * InverseEuler(f[n-r], MOD)) % MOD)) % MOD;
}
int dp[504][504]={0};
  ll n;
bool is(ll m)
{
    ll p=0,v=0;
    ll t =n;
    ll pp,vv;
    while(t>0)
    {  //cout<<t<<" "<<m<<endl;
         pp=min(t,m);
        p+=pp;
        t-=pp;
        vv=t/10;
        v+=vv;
        t-=vv;
        //cout<<"l";

    }
    if(p>=(n+1)/2) return true;
    return false;

}
int main()
{
    cin>>n;
    ll l =0,r=n+1;
    while(r-l>1)
    {
        ll mid = (l+r)/2;
        if(!is(mid)) l=mid;
        else r=mid;
     // cout<<mid<<endl;

    }
    cout<<r<<endl;

}
