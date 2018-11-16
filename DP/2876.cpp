//Prashant Tyagi
//#pragma GCC optimize("O3")
using namespace std;
#include <bits/stdc++.h>
#define TRACE
#ifdef TRACE
#define TR(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char* name, Arg1&& arg1){
  cerr << name << " : " << arg1 << std::endl;
}
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args){
  const char* comma = strchr(names + 1, ',');cerr.write(names, comma - names) << " : " << arg1<<" | ";__f(comma+1, args...);
}
#else
#define TR(...)
#endif
typedef  long long                     LL;
typedef  vector < int >                VI;
typedef  pair< int, int >              II;
typedef  vector < II >                 VII;
#define SI(x)                          scanf ("%d", &x)
#define SLL(x)                         scanf ("%lld", &x)
#define PI(x)                          printf ("%d\n", x)
#define PLL(x)                         printf ("%lld\n", x)
#define PB                             push_back
#define MP                             make_pair
#define ALL(v)                         v.begin(), v.end()
#define VIF(x,V)                       for(int x:V)
#define FILL(a,b)                      memset(a,b,sizeof(a))
#define REP(i,j,n)                     for(int i=j;i<n;i++)
#define FLD(i,j,n)                     for(int i=n-1;i>=j;i--)
#define F                              first  
#define S                              second
#define fast_io                        ios_base::sync_with_stdio(false);cin.tie(NULL)
const int N = 2e3+1;
const int M=1e9+7;
int dp[N][N];
vector<int> g[N];
void init()
{
	for(int i=1;i<N;i++){
		for(int j=i;j<N;j+=i){
			g[j].push_back(i);
		}
	}
}
int find_sol(int cur,int num)
{
	if(cur==1)return 1;
	if(dp[cur][num]!=-1)return dp[cur][num];
	int &ret = dp[cur][num];
	ret=0;
	for(int x:g[num]){
		ret=(ret+find_sol(cur-1,x))%M;
	}
	return ret;
}


int main ()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	init();
	FILL(dp,-1);
	int n,k;SI(n);SI(k);
	int ans = 0;
	for(int i=1;i<=n;i++){
		ans = (ans + find_sol(k,i)) % M;
	}
	PI(ans);
	return 0;
}