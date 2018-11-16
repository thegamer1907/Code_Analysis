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
	ll t,i,j,k,l,n,m,d;
	cin>>n;
	ll A[n+1];
	for(i=1;i<=n;++i){
        cin>>A[i];
	}
	ll B[n+1]={0};
	for(i=1;i<=n;++i){
        B[A[i]]=i;
	}
	for(i=1;i<=n;++i)cout<<B[i]<<" ";
	return 0;
}
