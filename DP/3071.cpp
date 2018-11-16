#include <bits/stdc++.h>

using namespace std;

#define      pii               std::pair<int,int>
#define      vi                std::vector<int>
#define      sz(v)             (int)(v.size())
#define      mp(a,b)           make_pair(a,b)
#define      pb(a)             push_back(a)
#define      each(it,s)        for(auto it = s.begin(); it != s.end(); ++it)
#define      rep(i, n)         for(int i = 0; i < (n); ++i)
#define      rep1(i, n)        for(int i = 1; i <= (n); ++i)
#define      all(v)            v.begin(), v.end()
#define      scan(n)           scanf("%d", &n)
#define      scan2(n, m)       scanf("%d%d", &n, &m)
#define      pin(n)            printf("%d\n",n)
#define      pis(n)            printf("%d ",n)
#define      pll(n)            printf("%lld\n", n)
#define      X                 first
#define      Y                 second

typedef long long ll;
const ll mod = 1000000007;

inline int pow_(ll a, int n, int p=mod){
int r=1;while(n){if(n&1)r=r*a%p;n>>=1;a=a*a%p;}return r;}
inline int inv_(int a) {return pow_(a, mod-2, mod);}
inline int add(int a, int b){a+=b;if(a>=mod)a-=mod;return a;}
inline void adds(int& a, int b){a+=b;if(a>=mod)a-=mod;}
inline int mul(int a, int b){return a*1ll*b%mod;}
inline void muls(int& a, int b){a=a*1ll*b%mod;}
inline int sub(int a, int b){a-=b;if(a<0)a+=mod;return a;}

int main()
{
	int n;
	cin >> n;
	vector<int> s(n), c(n);
	rep(i, n) cin >> s[i];
	rep(i, n) cin >> c[i];
	vector<int> dp1(n);
	for (int i = 1; i < n; ++i) {
		int mc = mod;
		for (int j = 0; j < i; ++j) if (s[j] < s[i]){
			mc = min(mc, c[j]);
		}
		dp1[i] = mc + c[i];
	}
	std::vector<int> dp2(n);
	for (int i = 2; i < n; ++i) {
		int mc = mod;
		for (int j = 1; j < i; ++j) if (s[j] < s[i]) {
			mc = min(mc, dp1[j]);
		}
		dp2[i] = mc + c[i];
	}

	int ans = *min_element(dp2.begin() + 2, dp2.end());
	if (ans >= mod) ans = -1;
	cout << ans << "\n";
	return 0;
}