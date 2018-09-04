#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int>   II;
typedef vector< II >      VII;
typedef vector<int>     VI;
typedef vector< VI > 	VVI;
typedef long long int 	LL;

#define PB push_back
#define MP make_pair
#define F first
#define S second
#define SZ(a) (int)(a.size())
#define ALL(a) a.begin(),a.end()
#define SET(a,b) memset(a,b,sizeof(a))

#define din(n) scanf("%d",&n)
#define dout(n) printf("%d\n",n)
#define llin(n) scanf("%lld",&n)
#define llout(n) printf("%lld\n",n)
#define strin(n) scanf(" %s",n)
#define strout(n) printf("%s\n",n)
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

// #define TRACE

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

int main(void)
{
	fast_io;
	long long n, l;
	cin >> n >> l;
	set<LL> arr;
	for (int i=0;i<n;i++) {
		LL temp; cin >> temp;
		arr.insert(temp);
	}

	LL maxi = 0;

	for (auto i=arr.begin() ; i!=arr.end(); i++) {
		LL thi = *i;
		if (i == arr.begin()) {
			maxi = max(maxi, 2*thi);
		}
		auto j = i; 
		j++;
		if (j != arr.end()) {
			LL next = *j;
			trace(thi, next);
			maxi = max(maxi, next - thi);
		}
		else {
			maxi = max(maxi, 2*(l - thi));
		}
	}
	cout << fixed << (double(maxi) / double(2.0)) << endl;

	return(0);
}