#include<bits/stdc++.h>

using namespace std;

typedef pair<int,int>   II;
typedef vector< II >    VII;
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

#define SI(n) scanf("%d",&n)
#define PI(n) printf("%d\n",n)
#define SLL(n) scanf("%lld",&n)
#define PLL(n) printf("%lld\n",n)
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)

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

//FILE *fin = freopen("in","r",stdin);
//FILE *fout = freopen("out","w",stdout);

int z[int(1e6)];
void buildZ(const string &s) {
	const int n = SZ(s);
	int L = 0, R = 0;
	for (int i = 1; i < n; i++) {
		if (i > R) {
			L = R = i;
			while (R < n && s[R-L] == s[R]) R++;
			z[i] = R-L; R--;
		} else {
			int k = i-L;
			if (z[k] < R-i+1) z[i] = z[k];
			else {
				L = i;
				while (R < n && s[R-L] == s[R]) R++;
				z[i] = R-L; R--;
			}
		}
	}
}

int main()
{
	string s;
	cin >> s;
	const int n = SZ(s);
	buildZ(s);
	int maxz = 0;
	for (int i = 1 ; i < n ; i++) {
		if (z[i] == n-i and maxz >= n-i)
			return 0*printf("%s\n", s.substr(i, SZ(s)-i).c_str());
		maxz = max(z[i], maxz);
	}
	printf("Just a legend\n");
	return 0;
}

