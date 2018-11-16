#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007
#define INS insert
#define PB push_back
#define MP make_pair
#define LL long long int
#define VI vector<int>
#define VL vector<LL>
#define II pair<int,int>
#define LII pair<LL,LL>
#define sin(n) scanf("%s",&n)
#define din(n) scanf("%d",&n)
#define llin(n) scanf("%lld",&n)
#define dout(n) printf("%d\n",n)
#define llout(n) printf("%lld\n",n)
#define sout(n) printf("%s\n",n)

#define TRACE
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

LL XpowerY(LL x, LL y, LL m){
	LL ans=1;
	x=x%m;
	while(y>0){
		if(y%2==1)
			ans=(ans*x)%m;
		x=((x%m)*(x%m))%m;
		y=y>>1;
	}
	return ans%m;
}

int main(){
	LL n;cin >> n;
	if(n == 1) return cout << -1, 0;
	if(n%2 == 0) return cout << n/2, 0;
	return cout << -(n+1)/2, 0;
}	