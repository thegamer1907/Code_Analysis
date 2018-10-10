#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define pb push_back
#define mp make_pair
#define all(c) (c).begin(),(c).end()
#define fr(x,v) for(auto&x :v)
#define pr(a,b) cout << a << " " << b << endl
#define pr1(a,b,c) cout << a << " " << b << " "<< c << endl

typedef long long int ll;
typedef vector<ll> vi;

struct input{
	ll a;
};

const ll M=1e9+7;
const ll N=1e5;
template< class T > T gcd(const T a, const T b) { return (b ? gcd<T>(b, a%b) : a); }


ll max(ll x,ll y)
{
	if(x>y) return x;
	else return y;
}
int main()
{
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("in.txt", "r", stdin);
    // for writing output to output.txt
    freopen("out.txt", "w", stdout);
	#endif
	fastio;
	
	ll n,m,i,j,k,temp,x,y,z,t,p;
	string s;
	cin >> s;

	ll cnt[3];
	// BSC
	for(i=0;i<3;i++)
		cnt[i]=0;
	for(i=0;s[i];i++)
	{
		if(s[i]=='B')
			cnt[0]++;
		if(s[i]=='S')
			cnt[1]++;
		if(s[i]=='C')
			cnt[2]++;
	}
	ll n1,n2,n3;
	cin >> n1 >> n2 >> n3;
	ll p1,p2,p3;
	cin >> p1 >> p2 >> p3;
	ll lim;
	cin >> lim;
	ll l=0,r=1e14,cur;
	while(l<r)
	{
		cur = (l+r)/2;
		p = max(cur*cnt[0]-n1,0)*p1 + max(cur*cnt[1]-n2,0)*p2 + max(cur*cnt[2]-n3,0)*p3;
		if(p<lim)
			l=cur+1;
		else
			r=cur;
	}
	//  final value od l gives the first time price is equal or crosses lim
	cur=l;
	p = max(cur*cnt[0]-n1,0)*p1 + max(cur*cnt[1]-n2,0)*p2 + max(cur*cnt[2]-n3,0)*p3;
	if(p>lim)
		cout << max(cur-1,0) << endl;
	else cout << cur << endl;
	return 0;
}