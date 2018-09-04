//Tirth Maniar
#include<bits/stdc++.h>
using namespace std;

#define TRACE
#ifdef TRACE
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char* name, Arg1 && arg1){
	cerr << name << " : " << arg1 << endl;
}
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1 && arg1, Args &&... args){
	const char* comma = strchr(names+1,','); cerr.write(names,comma-names) << " : " << arg1 << " | "; __f(comma+1, args...);
}
#else
#define trace(...)
#endif

#define ALL(c) c.begin(),c.end()
#define tr(container,it) for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
#define present(container, element) (container.find(element) != container.end())
				// For Set and Map
#define cpresent(container, element) (find(all(container),element) != container.end())
				// For Vector
				// Use v.clear() to remove all elements
#define PB push_back
#define MP make_pair
#define SZ(a) int((a).size())
				// Better to use v.empty() instead of comparing with 0 to check if empty
#define F first
#define S second
			// For pair
#define mod 1000000007
#define sd(x) scanf("%d",&x)
#define pd(x) printf("%d\n",x)
#define sll(x) scanf("%lld",&x)
#define pll(x) printf("%lld\n",x)
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

typedef long long ll;
typedef vector<int> VI;
typedef vector< VI > VVI;    	// 2-d array
typedef pair<int,int> PII;
typedef vector<PII> VPII;

inline int mult(int x,int y){return ((ll)x*y)%mod;}
int power(int x,int y){int ret=1; while(y){ if(y&1) ret = mult(ret,x); x = mult(x,x); y = y/2;} return ret;}
int gcd(int a,int b){ if(b) return gcd(b,a%b); return a;}
VI prime;
void generateprime(int n){ int i,j; VI num(n+5); num[1]=1; for(i=4;i<n;i=i+2) num[i]=1;
	for(i=3;i<n;i++){ if(num[i]==0) { for(j=3*i;j<n;j=j+2*i) num[j] = 1;}} num[0] = 0;
	for(i=2; i<n; i++){ if(num[i]==0) prime.PB(i); num.clear();}
}

ll check(ll k, ll n)
{
	ll sum = 0;
	ll cur = n;
	while(cur != 0)
	{
		ll mini = min(cur,k);
		sum = sum + mini;
		cur = cur - mini;
		cur = cur - cur/10;
	}
	if(sum*2 >= n)
		return 1;
	return 0;
}

int main()
{
	ll n,l=1,r;
	sll(n);
	r=n;
	while(l < r)
	{
		ll mid = l + (r-l)/2;
		if(check(mid, n))
			r = mid;
		else
			l = mid+1;
	}
	pll(r);
return 0;
}
