#include <bits/stdc++.h>

using namespace std;


typedef long long			ll;
typedef vector<int > 		vi;
typedef pair<int, int > 	pii;
typedef vector<pii> 		vii;
typedef set<int > 			si;
typedef map<string, int> 	msi;
typedef pair<ll,ll> 		pll;
typedef vector<ll>			vll;

#define fast ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define f first
#define s second
#define pi 2*acos(0.0)
#define rep2(i,b,a) for(int i = (int)b, _a = (int)a; i >= _a; i--)
#define rep1(i,a,b) for(int i = (int)a, _b = (int)b; i <= _b; i++)
#define rep(i,n) for(int i = 0, _n = (int)n ; i < _n ; i++)
#define TRvi(c,it) for(vi::iterator it = (c).begin(); it != (c).end(); it++)
#define TRvii(c,it) for(vii::iterator it = (c).begin(); it != (c).end(); it++)
#define TRmsi(c,it) for(msi::iterator it = (c).begin; it != (c).end(); it++
#define mp make_pair
#define pb(a) push_back(a)
#define mem(a,val) memset(a,val,sizeof(a))

const ll inf =  1e18;
const int mod = 1e9+7;
const int Lim = 1e5+1e3;
const double eps = 1e-15;

int main()
{
	int n, q;
	cin>>n>>q;
	ll warrior[n];
	rep(i, n) {
		cin>>warrior[i];
	}
	ll arrow[q];
	rep(i, q) {
		cin>>arrow[i];
	}
	ll cummsum[n];
	cummsum[0]=warrior[0];
	rep1(i, 1, n-1)
		cummsum[i] = cummsum[i-1]+warrior[i];

	ll ans=warrior[0], pos=0;

	rep(i, q) {
		if(arrow[i] < ans) {
			ans -= arrow[i];
			cout<<n-pos<<endl;
			continue;
		}
		if(arrow[i] == ans) {
			pos++;
			if(pos == n) {
				cout<<n<<endl;
				pos=0;
				ans=warrior[pos];
				continue;
			}
			cout<<n-pos<<endl;
			ans = warrior[pos];
			continue;
		}
		ll offset = cummsum[pos];
		arrow[i] -= ans;
		arrow[i] += offset;
		auto it = upper_bound(cummsum, cummsum+n, arrow[i]);
		ll temp = cummsum[it-cummsum];
		if(it-cummsum == n) {
			cout<<n<<endl;
			pos=0;
			ans=warrior[pos];
			continue;
		}
		if(temp == arrow[i]) {
			pos = it-cummsum;
			pos++;
			ans=warrior[pos];
			cout<<n-pos<<endl;
		}
		else {
			pos = it-cummsum;
			ans = warrior[pos];
			ans -= arrow[i]-cummsum[pos-1];
			cout<<n-pos<<endl;
		}
	}

	return 0;
}