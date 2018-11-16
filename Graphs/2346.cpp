#include <bits/stdc++.h>

using namespace std;

const int OO = (int) 1e9;
const double eps = (1e-10);

#define PI 3.14159265359
#define all(v)				((v).begin()), ((v).end())
#define rall(v)				((v).rbegin()), ((v).rend())
#define sortva(v) 			sort(all(v))
#define sortvd(v) 			sort(rall(v))
#define sortaa(a,n) 		sort(a,a+n)
#define sortad(a,n) 		sort(a,a+n),reverse(a,a+n)
#define rep(i, v)			for(int i=0;i<sz(v);++i)
#define trav(a, x) 			for(auto& a : x)
#define lp(i, n)			for(int i=0;i<(int)(n);++i)
#define lpi(i, j, n)		for(int i=(j);i<(int)(n);++i)
#define lpd(i, j, n)		for(int i=(j);i>=(int)(n);--i)
#define ndl 				cout<<'\n'
#define sz(v)				((int)((v).size()))
#define clr(v, d)			memset(v, d, sizeof(v))
#define pb					push_back
#define mp					make_pair
#define fs          		first
#define sc          		second
#define eq(a,b)     		(fabs(a-b)<eps)

#define isOn(S, j) (S & (1 << j))
#define setBit(S, j) (S |= (1 << j))
#define clearBit(S, j) (S &= ~(1 << j))
#define toggleBit(S, j) (S ^= (1 << j))

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;


ll gcd(ll a, ll b) {
	return !b ? a : gcd(b, a % b);
}
ll lcm(ll a, ll b) {
	return (a / gcd(a, b)) * b;
}
int dcmp(double x, double y) {
	return fabs(x - y) <= eps ? 0 : x < y ? -1 : 1;
}

double dist(double x1, double y1, double x2, double y2) {
	return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

ll power(ll x, int y) {
	ll temp;
	if (y == 0)
		return 1;
	temp = power(x, y / 2);
	if (y % 2 == 0)
		return temp * temp;
	else
		return x * temp * temp;
}

typedef vector<int> vi;
typedef vector<pair<int, int>> vii;
typedef vector<vector<int>> vvi;
typedef vector<long long> vl;
typedef vector<vector<long long>> vvl;
typedef vector<double> vd;
typedef vector<bool> vb;
typedef map<int, int> mii;
typedef map<int, bool> mib;
typedef map<string, int> msi;
typedef unordered_map<int, int> umii;
typedef unordered_map<int, bool> umib;
typedef unordered_map<string, int> umsi;
typedef queue<int> qi;
typedef set<int> si;
typedef stack<int> ski;
typedef unordered_set<int> usi;
typedef pair<int, int> pii;
typedef vector<string> vs;

int n,u,d[2001],ans;
vvi adj(2001);

int main() {
	ios::sync_with_stdio(false);
	cout.precision(10);
	cin>>n;
	for (int i = 1; i < n+1; ++i) {
		cin>>u;
		if (u!=-1)	adj[u].pb(i);
	}
	for (int i = 1; i < n+1; ++i) {
		lp(j,n+1)	d[j]=OO;
		qi q;	q.push(i);	d[i]=0;
		while(!q.empty()){
			u=q.front();	q.pop();
			trav(v,adj[u])
				if (d[v]==OO)
					q.push(v),d[v]=d[u]+1,ans=max(ans,d[v]);
		}/*
		cout<<i<<'\n';
		lpi(j,1,n+1)	cout<<d[j]<<' ';
		ndl;*/
	}
	cout<<ans+1;
	return 0;
}
