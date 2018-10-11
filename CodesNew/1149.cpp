#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cassert>
#include <limits>
#include <cstring>
#include <string>
using namespace std;

#define ll long long
#define db long double
#define ii pair <int, int>
#define vi vector <int>
#define fi first
#define se second
#define sz(a) (int)(a).size()
#define all(a) (a).begin(),(a).end()
#define pb push_back
#define mp make_pair
#define FN(i,n) for (int i = 0; i < (int)(n); ++i)
#define FEN(i,n) for (int i = 1;i <= (int)(n); ++i)
#define rep(i,a,b) for(int i=a;i<b;i++)
#define repv(i,a,b) for(int i=b-1;i>=a;i--)
#define SET(A, val) memset(A, val, sizeof(A))

#ifdef TRACE
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
	template <typename Arg1>
	void __f(const char* name, Arg1&& arg1){
		cerr << name << " : " << arg1 << std::endl;
	}
	template <typename Arg1, typename... Args>
	void __f(const char* names, Arg1&& arg1, Args&&... args){
		const char* comma = strchr(names + 1, ','); cerr.write(names, comma - names) << " : " << arg1<<" | ";__f(comma+1, args...);
	}
#else
#define trace(...)
#endif

bool f(ll mid, ll n, ll t) {
	if (mid == 0) return false; 
	int opt = 0;
	ll vasya = 0; 
	while(n >= 10) {
		if (!opt) {
			vasya += min(n, mid);
			n -= min(n, mid); 
		} else {
			n -= n / 10; 
		}
		if (2 * vasya >= t) return true; 
		opt = !opt;
	}
	vasya += n; 
	if (2 * vasya >= t) return true; 
	return false; 
} 

int main() {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL) ; cout.tie(NULL) ;
	ll n; cin >> n; 
	ll lo = 1, hi = n, mid; 
	while(lo <= hi) {
		mid = lo + (hi - lo) / 2;
		bool x = f(mid, n, n); 
		bool y = f(mid - 1, n, n);
		if (x && y) hi = mid - 1; 
		else if (x && !y) break; 
		else lo = mid + 1; 
	}
	cout << mid << endl;
	return 0;
}
