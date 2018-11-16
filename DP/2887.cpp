/*
author: orthodoxparadox
25-Sep-2018
16:14:26
*/

#include <bits/stdc++.h>
#include <ext/pb_ds/detail/standard_policies.hpp>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define dbl long double
#define int ll
#define ll long long
#define pii pair<int, int>
#define fup(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define fnu for(ll i = 0; i < n; i++)
#define rev(s) reverse(all(s))
#define oiint ostream_iterator<int>(cout, " ") 
#define pb emplace_back
#define mp make_pair
#define ff first
#define ss second
#define endl '\n'
#define all(a) a.begin(), a.end()
#define initialise(a, x) memset(a, x, sizeof(a))
#define onlyunique(v) v.erase(unique(all(v)), v.end()); //only for sorted vector
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
void __f(const char* name, Arg1&& arg1){cerr << name << " : " << arg1 << endl;}
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args){
	const char* comma = strchr(names + 1, ',');
	cerr.write(names, comma - names) << " : " << arg1 << "  ";
	__f(comma + 1, args...);}
#else
#define dbg(...)
#endif
template <typename T> ostream& operator << (ostream& os,const vector<T>& v){for(int i=0;i<v.size();++i) os<<v[i]<<" ";return os;} 
template <typename T> ostream& operator << (ostream& os,const set<T>& v){for(auto it:v) os<<it<<" ";return os;} 
template <typename T, typename S> ostream& operator << (ostream& os, const pair<T,S>& v) {os<<v.ff<<" "<<v.ss;return os;} 
typedef tree <int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
struct pair_hash {inline std::size_t operator()(const std::pair<int, int> & v) const {return v.first*31+v.second;}};
const int mod = 1e9 + 7;

int takemod(int a){return ((a%mod)+mod)%mod;}

int fast_exp(int base, int expo) {
	int res=1;
	while(expo>0) {
		if(expo&1) res=(res*base)%mod;
		base=(base*base)%mod;
		expo>>=1;}
	return res;}

int modinv(int a){return takemod(fast_exp(takemod(a), mod-2));}

signed main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	#ifdef __APPLE__
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
	#endif
	time_t t1, t2;
	t1 = clock();

	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	vector<int> b(k);
	fnu cin >> a[i];
	fup(i, 0, k) cin >> b[i];
	sort(all(b));
	for(int i = 0; i < n; i++)
	{
		if(a[i] == 0)
		{
			a[i] = b.back();
			b.pop_back();
		}
	}
	bool done = false;
	for(int i = 1; i < n; i++)
	{
		if(a[i] <= a[i-1])
		{
			done = true;
			break;
		}
	}
	cout << (done ? "Yes" : "No");
	t2 = clock(); cerr << "time taken: " << t2-t1;
	return 0;
}