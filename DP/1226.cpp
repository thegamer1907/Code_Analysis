#include <bits/stdc++.h>

using namespace std;

#define ll long long int
#define MOD 1000000007
#define mt make_tuple
#define eb emplace_back
#define error(args...){string _s = #args; replace(_s.begin(),_s.end(),',',' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it,args);}
void err(istream_iterator<string> it){}
template<typename T, typename... Args> void err(istream_iterator<string> it, T a, Args... args){cerr<<*it<<" = "<<a<<endl; err(++it,args...);}
ll modPow(ll x,ll n){
	ll r=1;
	while(n){
		if(n&1)r = (r*x)%MOD;
		x = (x*x)%MOD;
		n = (n>>1);
	}
	return r;
}

int main()
{

	ll t,i,j,k,l,n,m,d,a,b,c,r;
    cin>>n;
    ll A[n];
    ll ans=-1e9;
    for(i=0;i<n;++i)cin>>A[i];
    for(i=0;i<n;++i){
        for(j=i;j<n;++j){
            for(k=i;k<=j;++k)A[k] = 1-A[k];
            ll temp=0;
            for(k=0;k<n;++k)temp+=(A[k]==1);
            ans = max(ans,temp);
            for(k=i;k<=j;++k)A[k] = 1-A[k];
        }
    }
    cout<<ans;
    return 0;
}
