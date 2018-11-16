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
	ll t,i,j,k,l,n,m;
	int x=0,y=0,z=0;
	cin>>n;
	while(n--){
        cin>>i>>j>>k;
        x+=i;y+=j;z+=k;
	}
	if(x==0&&y==0&&z==0){
        cout<<"YES";
	}else
	cout<<"NO";
	return 0;
}
