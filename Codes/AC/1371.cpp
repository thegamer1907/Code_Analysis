#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
#define TRACE
#ifdef TRACE
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char* name, Arg1&& arg1){
  cerr << name << " : " << arg1 << std::endl;
}
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args){
  const char* comma = strchr(names + 1, ',');cerr.write(names, comma - names) << " : " << arg1<<" | ";__f(comma+1, args...);
}
#else
#define trace(...)
#endif

#define MOD                 1000000007LL
#define EPS                 1e-9
#define io                  ios_base::sync_with_stdio(false);cin.tie(NULL);

const int N = 1e5 + 5;

int n;
int A[N];
ll s;
ll ans;

bool solve(int x){
	// x number of items
	vector<ll> v;
	for(int i = 1; i <= n; i++){
		v.push_back(A[i] * 1LL + i * 1LL * x);
	}
	sort(v.begin(), v.end());
	ll sum = 0;
	for(int i = 0; i < x; i++){
		sum += v[i];
	}
	ans = sum;
	return (sum <= s);
}

int main(){
	io;
	cin >> n >> s;
	for(int i = 1; i <= n; i++){
		cin >> A[i];
	}
	int lo = 0, hi = n + 1;
	while(hi - lo > 1){
		int mid = (lo + hi) >> 1;
		if(solve(mid))
			lo = mid;
		else
			hi = mid;
	}
	// number of items would be lo
	cout << lo << " ";
	solve(lo);
	cout << ans;
	return 0;
}