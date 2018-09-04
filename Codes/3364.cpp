#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define pb push_back
#define fi first
#define se second
#define mp make_pair
#define MOD 1000000007ULL
#define INF 1000000000ULL
#define bitcount(x) __builtin_popcount(x)
#define paritycheck(x) __builtin_parity(x)
#define lowesbit(x) __builtin_ctz(x);
#define highestbit(x) __builtin_clz(x);

#define FAST ios_base::sync_with_stdio(false)
const int N = 1e5 + 5;

inline ll power(ll a, ll b){
	ll x = 1;
	a = a%MOD;
	while(b){
		if(b & 1) x = (x*a)%MOD;
		a = (a*a)%MOD;
		b >>= 1;
	}
	return x;
}

inline ll inv(ll a){ return power(a, MOD-2);}
ll gcd(ll a, ll b){ return a?gcd(b%a,a):b;}

ll n;
bool check(ll val){
	ll eat = 0;
	ll rem = n;
	while(rem>0){
		if(rem<val)
		{
			eat += rem;
			rem = 0;
		}
		else{
			rem -= val;
			eat += val;
		}
		rem -= rem/(ll)10;	
	}
	if(eat >= (n+(ll)1)/(ll)2)
		return true;
	else
		return false;
}



int main()
{
	ios_base::sync_with_stdio(false);
	cin>>n;
	ll high = n;
	ll low = 1;
	while(high-low > 1){
		ll mid = (low+high)/2;
		if(check(mid))
			high = mid;
		else
			low = mid+1;
	} 
	if(check(low))
		cout<<low<<endl;
	else
		cout<<high<<endl;
	return 0;
}