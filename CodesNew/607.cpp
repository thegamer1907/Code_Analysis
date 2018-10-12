#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define fr first
#define sc second
#define bitCount __builtin_popcount
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pi;
typedef pair<ll, ll> pll;
typedef vector<pi> vpi;
typedef vector<pll> vpll;
typedef set<int>::iterator sit;
typedef set<char>::iterator sct;
typedef map<int, int>::iterator mit;
typedef vector<int>::iterator vit;
typedef multiset<int>::iterator msit;
const int maxn = 1e5+5;
const ll mod = 1e9+7;
const int alphabet = 26;
const int inf = INT_MAX;
const ll lint = 1e18+9;
#define forn(i, n) for(i = 0; i < (ll)n; i++)
#define for1(i, n) for(i = 1; i <= (ll)n; i++)
#define forv(i, v) for(i = 0; i < v.size(); i++)
#define forab(i, a, b) for(i = a; i <= (ll)b; i++)
#define Sort(v) sort(v.begin(), v.end())
inline ll cnm(char ch){	return (ch-'0'); }
inline ll cap(char ch){	return (ch-'a'); }
inline void instr(string& s, ll& n){ cin>>s;	n = s.length(); }
inline void instr(string& s){ cin>>s; }

set<string> p, e, com;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ll i, j, k, m, n;
	cin>>n>>m;
	for(i = 0; i < n; i++){
		string s; cin>>s;
		p.insert(s);
	}
	for(i = 0; i < m; i++){
		string s; cin>>s;
		e.insert(s);
		if(find(p.begin(), p.end(), s) != p.end())
			com.insert(s);
	}
	ll sz = com.size();
	if(n > m){
		cout<<"YES";
		return 0;
	}
	else if(n == m){
		if(sz & 1){
			cout<<"YES";
		}
		else cout<<"NO";
	}
	else cout<<"NO";
    return 0;
}


