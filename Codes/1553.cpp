//By Ralif Rakhmatullin
#include<iostream>
#include<fstream>
#include<string>
#include<cstring>
#include<math.h>
#include<cassert>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<map>
#include<ctime>
#include<queue>
#include<stack>
#include<set>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<bitset>
#include<valarray>
#include<iterator>
#include<list>
#define ll long long
#define ull unsigned long long
#define mp make_pair
#define S second
#define ld long double
#define F first
#define y1 LOL
#define ld long double
#define pb push_back
#define len length
#define sz size
#define beg begin
const ll INF = (ll)1e18 + 123;
const int inf=(int)2e9 + 123; 
const int mod=1e9+7;
using namespace std;
int n;
ll a[100011], S;
ll get(ll k){
	vector<ll> v;
	for(ll i = 1; i <= n; i ++){
		v.pb(i * k + a[i]);
	}
	sort(v.beg(), v.end());
	ll sum = 0;
	for(int i = 0; i < k; i ++){
		sum += v[i];
	}
	return sum;
}
int main(){
	unsigned int FOR;
 	asm("rdtsc" : "=A"(FOR));
  	srand(FOR);
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	//cout.tie(0);
	//freopen(".in","r",stdin);
	//freopen(".out","w",stdout);
	cin >> n >> S;
	for(int i = 1; i <= n; i ++){
		cin >> a[i];
	}
	int l = 1, r = n, mx = 0, sum = 0;
	while(l <= r){
		int mid = (l + r) / 2;
		ll x = get(mid);
		if(x <= S){
			mx = mid;
			sum = x;
			l = mid + 1;
		}else
			r = mid - 1;
	}
	cout << mx << " " << sum;
	return 0;
}