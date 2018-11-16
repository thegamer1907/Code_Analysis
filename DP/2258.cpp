//Vivek
#include <bits/stdc++.h>

#define boost ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long 
#define mod 1000000007
#define llt int test;cin>>test;while(test--)
#define pb push_back
#define setto(n) cout << fixed<< setprecision(n)
#define fi first
#define se second
#define sz(i) int(i.size())
#define all(v) v.begin(),v.end()
#define mem(a, b) memset(a, b, sizeof(a))
#define len(s) int(s.length())
#define present(s,x) (s.find(x) != s.end())
#define cpresent(s,x) (find(all(s),x) != s.end())
#define UNIQUE(a) ((a).erase(unique((a).begin(), (a).end()), (a).end()))
#define INF LONG_MAX
#define random() ((ll)rand() << 32 | rand())
#define C(c) c-'a'

using namespace std; 
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

//Check MAX size twiceeeeeeeeeeeeeeeeee, and verify it
const int MAX = 100010;

int n, m, suff[MAX], l, a[MAX];
int main(){
	boost;

	cin>>n>>m;

	for (int i = 1; i <= n; ++i)
	{
		cin>>a[i];
	}

	set<int> s;
	for (int i = n; i >= 1; --i)
	{
		s.insert(a[i]);
		suff[i] = sz(s);
	}

	for (int i = 0; i < m; ++i)
	{
		cin>>l;
		cout<<suff[l]<<endl;
	}

	return 0;
}