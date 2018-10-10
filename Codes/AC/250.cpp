#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MAX 100005
#define MOD 1000000007
#define INF 1e9
#define vi vector<int>
#define vl vector<ll> 
#define pii pair<int,int>
#define pll pair<ll,ll> 
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
#define sarkysaurabh ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define error(args...) { vector<string> _v = split(#args, ','); err(_v.begin(), args); cerr<<'\n';}
vector<string> split(const string& s, char c) { vector<string> v; stringstream ss(s); string x; while (getline(ss, x, c)){ v.emplace_back(x);} return move(v); }
void err(vector<string>::iterator it) {}
template<typename T, typename... Args> void err(vector<string>::iterator it, T a, Args... args) { cerr << it -> substr((*it)[0] == ' ', it -> length()) << " = " << a << ", "; err(++it, args...); }
//int bit[MAX], p[MAX];
//void upd(int i, int v=1) {while(i < MAX){bit[i] += v; i += i&-i;}}
//int read(int i) {int s=0; while(i > 0){s += bit[i]; i -= i&-i;} return s;}
//int fs(int i) {while(i != p[i]){p[i]=p[p[i]]; i=p[i];} return i;}
//ll modexp(ll a, ll b, ll c=MOD) { ll res=1;while(b){res=b&1?(res*a)%c:res; a=(a*a)%c; b>>=1;} return res; }
// auto f = [](int a, int b) -> int { return a+b; };

int a[MAX];
ll ps[MAX];
int main()
{
	int n, i;
	cin>>n;
	for(i=1;i<=n;++i)
	{
		cin>>a[i];
		ps[i] = a[i] + ps[i-1];
	}
	int q;
	cin>>q;
	while(q--)
	{
		ll x;
		cin>>x;
		auto id = lower_bound(ps+1, ps+1+n, x) - ps;
		cout << id << endl;
	}
}
