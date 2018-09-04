/*
author: orthodoxparadox
27-Jun-2018
13:12:25
*/

#include <bits/stdc++.h>

using namespace std;
#define dbl long double
#define int ll
#define ll long long
#define ull unsigned long long
#define vi vector<int>
#define vl vector<long long>
#define vvi vector<vector<int> >
#define vvl vector<vector<long long> >
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vpii vector<pair<int, int> >
#define vpll vector<pair<long long, long long> >
#define mll map<ll, ll>
#define mii map<int, int>
#define msi map<string, int>
#define msl map<string, ll>
#define umll unordered_map<ll, ll>
#define umii unordered_map<int, int>
#define umsi unordered_map<string, int>
#define umsl unordered_map<string, ll>
#define fup(i, a, n) for (ll i = a; i < n; i++)
#define fdw(i, a, n) for (ll i = n-1; i >= a; i--)
#define fnu for(ll i = 0; i < n; i++)
#define fnd for(ll i = n-1; i >= 0; i--)
#define fau(i, v) for(auto i:v)
#define rev(s) reverse(all(s))
#define oill ostream_iterator<ll>(cout, " ")
#define oiint ostream_iterator<int>(cout, " ") 
#define pb emplace_back
#define push_back emplace_back
#define mp make_pair
#define ff first
#define ss second
#define endl '\n'
#define all(a) a.begin(), a.end()
#define zero(a) memset(a, 0, sizeof(a))
#define onlyunique(v) v.erase(unique(all(v)), v.end()); //only for sorted vector
// #define x real()
// #define y imag()
typedef complex<double> point;
#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize ("O3")
#pragma GCC optimize ("O2")
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#define _CRT_SECURE_NO_WARNINGS
#ifdef __APPLE__
#define dbg(...) __f(#__VA_ARGS__, __VA_ARGS__)

template <typename Arg1>
void __f(const char* name, Arg1&& arg1)
{
	cerr << name << " : " << arg1 << endl;
}

template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args)
{
	const char* comma = strchr(names + 1, ',');
	cerr.write(names, comma - names) << " : " << arg1 << "  ";
	__f(comma + 1, args...);
}

#else
#define dbg(...)
#endif

// for set of pairs
struct pair_hash {
    inline std::size_t operator()(const std::pair<int,int> & v) const {
        return v.first*31+v.second;
    }
};

const int mod = 1e9 + 7;

vector<int> binarycut(int x){
	vector<int> v;
	while(x){
		if(x&1) v.pb(1);
		else v.pb(0);
		x>>=1;
	}
	reverse(all(v));
	return v;
}

int takemod(int a){
	return ((a%mod)+mod)%mod;
}

int fast_exp(int base, int expo) {
	int res=1;
	while(expo>0) {
		if(expo&1) res=(res*base)%mod;
		base=(base*base)%mod;
		expo>>=1;
	}
	return res;
}

int modinv(int a){
	return takemod(fast_exp(takemod(a), mod-2));
}

// void siev(int n)
// {
// 	sieve[0]=false;
// 	sieve[1]=false;
// 	for(int i=2; i<=sqrtl(n); i++)
// 	{
// 		if(sieve[i])
// 		{
// 			for(int j=i; i*j<=n; j++)
// 			{
// 			sieve[i*j]=false;
// 			}
// 		}
// 	}
// }

signed main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	#ifdef __APPLE__
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
	#endif
	time_t t1, t2;
	t1 = clock();

	int n;
	cin >> n;
	int s = 1, e = n;
	int mid;
	int ans = 1e18;
	while(s <= e)
	{
		mid = (s+e)/2;
		int x = n;
		int tot = 0;
		while(x)
		{
			tot += min(x, mid);
			x -= min(x, mid);
			x -= x/10;
		}
		if(tot >= (n + 1)/2)
		{
			ans = min(ans, mid);
			e = mid - 1;
		}
		else
		{
			s = mid + 1;
		}
	}
	cout << ans;
	t2 = clock();
	cerr << "time taken: " << t2-t1;
	return 0;
}