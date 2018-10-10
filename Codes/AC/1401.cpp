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

const int OO = (int) 1e9;
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

double dist(double x1, double y1, double x2, double y2) {
	return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

typedef long double ld;
typedef vector<int> vi;
typedef vector<pair<int, int>> vii;
typedef vector<double> vd;
typedef vector<bool> vb;
typedef vector<vi> vvi;
typedef vector<vd> vvd;
typedef vector<string> vs;

int n,s,cost[100001],mncost=OO;
ll bscost[100001],sum=0;

int bs(){
	int mn=1,mx=n;
	while(mn<mx){
		int mid=(mn+mx+1)/2;
		sum=0;
		for (ll i = 1; i < n+1; ++i) {
			bscost[i]=cost[i]+mid*i;
		}
		sort(bscost,bscost+n+1);
		for (int i = 1; i < mid+1; ++i) {
			sum+=bscost[i];
		}
		if (sum<=s)
			mn=mid;
		else
			mx=mid-1;
	}
	return mn;
}

int main() {
	ios::sync_with_stdio(false);
	cin>>n>>s;
	for (int i = 1; i < n+1; ++i) {
		cin>>cost[i];
		if (cost[i]+i<mncost)
			mncost=cost[i]+i;
	}
	if (mncost>s){
		cout<<"0 0";	return 0;
	}
	int k=bs();
	sum=0;
	for (int i = 1; i < n+1; ++i) {
		bscost[i]=cost[i]+k*i;
	}
	sort(bscost,bscost+n+1);
	for (int i = 1; i < k+1; ++i) {
		sum+=bscost[i];
	}
	cout<<k<<' '<<sum;
	return 0;
}
