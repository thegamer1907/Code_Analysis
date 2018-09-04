#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define all(x) (x).begin(), (x).end()
#define tr(x,it) for(auto it = x.begin();it!=x.end();++it)
#define fpresent(x,c) ((c).find(x) != (c).end())  //set,map
#define present(c,x) (find(all(c),x) != (c).end()) //vector
#define pb push_back 
#define mp make_pair

template< class T > T max3(const T &a, const T &b, const T &c) { return max2(a, max2(b, c)); }
template< class T > T min3(const T &a, const T &b, const T &c) { return min2(a, min2(b, c)); }
template< class T > T gcd(const T a, const T b) { return (b ? gcd<T>(b, a%b) : a); }
template< class T > T lcm(const T a, const T b) { return (a / gcd<T>(a, b) * b); }

int main()
{
	ll n,m,k;
	cin>>n>>m>>k;
	ll l=1,r=n*m+1;
	ll mid=(l+r)/2;
	while(l<=r)
	{
		mid=(l+r)/2;
		ll cnt=0;
		for(int i=1;i<=n;i++)
		{
			cnt+=min((mid-1)/i,m);
		}
		if(cnt>=k)
			r=mid-1;
		else
			l=mid+1;
	}
	cout<<(l-1)<<endl;
	return 0;
}
