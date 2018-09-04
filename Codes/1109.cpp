#include <bits/stdc++.h>

using namespace std;

#define PI 3.14159265359
#define all(v)				((v).begin()), ((v).end())
#define rall(v)				((v).rbegin()), ((v).rend())
#define sortva(v) 			sort(all(v))
#define sortvd(v) 			sort(rall(v))
#define sortaa(a,n) 		sort(a,a+n)
#define sortad(a,n) 		sort(a,a+n),reverse(a,a+n)
#define rep(i, v)		for(int i=0;i<sz(v);++i)
#define lp(i, n)		for(int i=0;i<(int)(n);++i)
#define lpi(i, j, n)	for(int i=(j);i<(int)(n);++i)
#define lpd(i, j, n)	for(int i=(j);i>=(int)(n);--i)
#define ndl 				cout<<'\n'
#define sz(v)				((int)((v).size()))
#define clr(v, d)			memset(v, d, sizeof(v))
#define pb					push_back
#define mp					make_pair

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

const int OO = INT_MAX;
const double eps = (1e-10);

ll gcd(ll a, ll b) {
	return !b ? a : gcd(b, a % b);
}
ll lcm(ll a, ll b) {
	return (a / gcd(a, b)) * b;
}
int dcmp(double x, double y) {
	return fabs(x - y) <= eps ? 0 : x < y ? -1 : 1;
}

typedef long double ld;
typedef vector<int> vi;
typedef vector<pair<int, int>> vii;
typedef vector<double> vd;
typedef vector<bool> vb;
typedef vector<vi> vvi;
typedef vector<vd> vvd;
typedef vector<string> vs;

int binary(int start,int end,vector<pair<int,ll>>&x,int &d,int l){
	while(start<end){
		int mid=(start+end+1)/2;
		if (x[mid].first-x[l].first<d)
			start=mid;
		else
			end=mid-1;
	}
	return end;
}

int main() {
	ios::sync_with_stdio(false);
	int n,d;	cin>>n>>d;
	vector<pair<int,ll>>x(n);
	for (int i = 0; i < n; ++i) {
		cin>>x[i].first>>x[i].second;
	}
	sortva(x);
	for (int i = 1; i < n; ++i) {
		x[i].second+=x[i-1].second;
	}
	ll ans=0;
	for (int l = 0; l < n; ++l) {
		int r=binary(l,n-1,x,d,l);
		ans=max(ans,x[r].second-(l==0?0:x[l-1].second));
	}
	cout<<ans;
	return 0;
}
