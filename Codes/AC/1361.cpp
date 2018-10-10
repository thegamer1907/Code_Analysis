#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define all(x) (x).begin(), (x).end()
#define tr(x,it) for(auto it = x.begin();it!=x.end();++it)
#define fpresent(x,c) ((c).find(x) != (c).end())  //set,map
#define present(c,x) (find(all(c),x) != (c).end()) //vector
#define pr(a,b) cout << a << " " << b << endl
#define pr1(a,b,c) cout << a << " " << b << " "<< c << endl
#define pb push_back 
#define mp make_pair
#define N 100001
#define F first
#define S second
typedef pair<ll, ll> iPair;
template< class T > T max3(const T &a, const T &b, const T &c) { return max(a, max(b, c)); }
template< class T > T min3(const T &a, const T &b, const T &c) { return min(a, min(b, c)); }
template< class T > T gcd(const T a, const T b) { return (b ? gcd<T>(b, a%b) : a); }
template< class T > T lcm(const T a, const T b) { return (a / gcd<T>(a, b) * b); }

int main()
{
	ll i,j,k,n,s,m,cur=1,ans=0;
	cin>>n>>s;
	ll a[n+2];
	for(i=1;i<=n;i++)
	    cin>>a[i];
	a[n+1]=INT_MAX;
	ll l=1,r=n+1,mid=(l+r)/2;
	while(r-l>1)
	{
		mid=(l+r)/2;
		ll b[n+2]={0};
		for(i=1;i<=n+1;i++)
			b[i]=a[i]+i*mid;
		sort(b+1,b+n+2);
		ll cc=0;
		for(i=1;i<=mid;i++)
			cc+=b[i];
		// cout<<mid<<" "<<cc<<endl;
		if(cc>s)
			r=mid;
		else
			l=mid;
	}
	ll cost=0;
	for(i=1;i<=n;i++)
		a[i]+=i*l;
	sort(a+1,a+n+1);
	for(i=1;i<=l;i++)
		cost+=a[i];
	if(cost>s)
		cout<<"0 0\n";
	else
		cout<<l<<" "<<cost<<endl;
	return 0;
}