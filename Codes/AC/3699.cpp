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

ll B, S, C;
ll nb, ns, nc;
ll pb, ps, pc;

ll f(ll x){
    return max(0LL, B * x - nb) * pb + max(0LL, S * x - ns) * ps + max(0LL, C * x - nc) * pc;
}

int main(){
	io;
	string str;
	cin >> str;
	for(auto c : str){
	    if(c == 'B')    B++;
	    else if(c == 'S')   S++;
	    else    C++;
	}
	
	cin >> nb >> ns >> nc;
	
	cin >> pb >> ps >> pc;
	ll r;
	cin >> r;
	ll lo = 0, hi = 1e15;
// 	trace(f(10));
	while(hi - lo > 1){
	    ll mid = (lo + hi) >> 1;
	    if(f(mid) <= r)
	        lo = mid;
	    else
	        hi = mid;
	}
	cout << lo;
	return 0;
}




