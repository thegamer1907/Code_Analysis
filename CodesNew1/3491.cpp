#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

typedef vector<ll> vll;
typedef pair<ll, ll> pll;
typedef unordered_map<ll, ll> ull;
typedef set<ll> sll;

typedef vector<pll> vpll;
typedef vector<vll> vvll;
typedef vector<vvll> vvvll;

#define MAX 1000000000
#define MOD 1000000007
#define s(n) scanf("%lld",&n)
#define prc(s, n) printf("%s: %lld", s, n)
#define p(n) printf("%lld\n", n)

int main(){
	ll n, m; cin >> n >> m;
	ll maxi = 0;
	vll inp(n);
	for (int i = 0; i < n; ++i)
	{
		s(inp[i]);
		maxi = max(maxi, inp[i]);
	}

	for (int i = 0; i < m; ++i)
	{	
		ll mini = inp[0], idx = 0;
		for (int j = 1; j < n; ++j)
		{
			if(mini > inp[j]){
				mini = inp[j];
				idx = j;
			}
		}
		inp[idx]++;
	}

	ll ans = 0;
	for (int i = 0; i < n; ++i)
	{
		ans = max(ans, inp[i]);
	}
	cout <<  ans  << " " << maxi + m << endl;
}