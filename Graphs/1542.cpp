//Vivek
#pragma optimize("", off)
#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma comment(linker, "/STACK:36777216")
#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long 
#define all(v) v.begin(),v.end()
#define pb push_back
#define sz(i) int(i.size())
#define setto(n) cout << fixed << setprecision(n)
#define fi first
#define se second
#define inf LONG_MAX //change to 2e18 according to requirement and also check that operation on it doesn't overflows.
#define random() ((ll)rand() << 32 | rand())
const int mod = 1000000007;

using namespace std;

#ifdef ONLINE_JUDGE
#define endl '\n'
#endif
#ifndef ONLINE_JUDGE
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
template<class T> void smin(T& a, T val) {if (a > val) a = val;}
template<class T> void smax(T& a, T val) {if (a < val) a = val;}
template<typename T>inline std::ostream &operator << (std::ostream & os,const std::vector<T>& v){bool first = true;os << "[";for(auto i: v){if(!first)os << ", ";os << i;first = false;}return os << "]";}
//Check N size twiceeeeeeeeeeeeeeeeee, and verify it
const int N = 3*1e4 + 10;

int n, t, a[N], vis[N];
int main(){_

	cin>>n>>t;
	for (int i = 1; i < n; ++i)
	{
		cin>>a[i];
		a[i] += i;
	}

	if(t == 1){
		cout<<"YES";
		return 0;
	}

	a[n] = n;
	int i = 1;
	while(!vis[i]){
		vis[i] = 1;
		i = a[i];
		if(i == t){
			cout<<"YES";
			return 0;
		}
	}

	cout<<"NO";
	return 0;
}