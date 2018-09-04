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
const int N = 2e5 + 10; 
ll d[N], post[N]; 
int main() {
	std::ios::sync_with_stdio(false);
	cin.tie(NULL) ; cout.tie(NULL) ;
	int n; cin >> n; 
	rep(i, 1, n + 1) cin >> d[i];
	map < ll, int > m; 
	repv(i, 1, n + 1) post[i] = post[i + 1] + d[i], ++m[post[i]];
	ll mx = 0;
	ll pre = 0;
	rep(i, 1, n + 1) {
		pre += d[i];
		--m[post[i]]; 
		if (m[pre]) mx = max(mx, pre);
	}
	cout << mx << endl;
	return 0;
}
