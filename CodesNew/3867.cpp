#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define INF 100005
#define MOD 1000000007
#define mp make_pair
#define F first
#define S second
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef map<int, int> mii;
typedef vector<int> vi;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	    // for getting input from input.txt
	    freopen("input.txt", "r", stdin);
	    // for writing output to output.txt
	    freopen("output.txt", "w", stdout);
	#endif
	ll n;
	cin>>n;
	ll t = 0;
	ll a;
	ll maxa = 0;
	for(int i=0;i<n;i++)
		cin>>a, t+=a, maxa = max(a, maxa);

	cout<<max((t+n-2ll)/(n-1ll), maxa)<<endl;

	return 0;
}