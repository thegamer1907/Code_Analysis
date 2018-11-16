	#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define N 1000005
#define md ll(1000000007)
#define pb push_back
#define fi first
#define se second

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int grand(int x) {
    return uniform_int_distribution<int>(0, x - 1)(rng);
}

string s = "";
ll arr[N] = {0};
ll brr[N] = {0};
ll par[N] = {0};
vector < ll > v, vc;
vector < ll > g[N];
pair < ll , ll > p[N];

ll gcd(ll a , ll b){
	if(b==0) return  a;
	if(a == 0 ) return b;
	return gcd(b,a%b) ;
}

int main(){
	
	ios :: sync_with_stdio(false); cin.tie(0); cout.tie(0);
		
	ll n = 0, m = 0, k = 0, q = 0, ans = 0;
	ll x = 0, y = 0, t = 0, sum = 0, sz = 0;
	
	cin >> n >> k ;
	
	k = 240 - k;
	x = 0;
	for(int i = 1 ; i <=n+1 ; i++){
		x = 5*(i)*(i+1)/2;
		//cout << x <<endl;
		if(x > k){
			cout << i	- 1 <<endl;
			return 0;
		}
	}
	
	cout << n << endl;
	
	
		
	return 0;
}
