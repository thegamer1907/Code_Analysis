#include <bits/stdc++.h>
#define ll long long
#define dl long double
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))
#define CPY(a,b) memcpy(a,b,sizeof(a))
using namespace std;
typedef pair<ll, ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;
ll MOD = 1e9 + 7;

ll fun(ll n,ll k){
	ll ans = 0;
	while(n){
		if(n > k){
			ans += k;
			n -= k;
		}
		else{
			ans += n;
			n = 0;
		}
		if(n >= 10)
			n -= n/10;
	}
	return ans;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    std::ios::sync_with_stdio(false);
    cin.tie(0);
    
    ll n,tl,tr,tm;
    cin>>n;
    
    tl = 1,tr = n;
    dl tmp = ((dl)n)/2;
    while(tl < tr){
    	tm = (tl + tr) / 2;
    	dl atm = fun(n, tm);
    	if( atm >= tmp) tr = tm;
    	else tl = tm+1;
    	// cout<<tl<<" "<<tr<<"\n";
    }
    // cout<<fun(43,2);
    cout<<tr;
    return 0;
}