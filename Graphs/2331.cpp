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
#define N 100001
template< class T > T max3(const T &a, const T &b, const T &c) { return max(a, max(b, c)); }
template< class T > T min3(const T &a, const T &b, const T &c) { return min(a, min(b, c)); }
template< class T > T gcd(const T a, const T b) { return (b ? gcd<T>(b, a%b) : a); }
template< class T > T lcm(const T a, const T b) { return (a / gcd<T>(a, b) * b); }

int main()
{
	ll n,m,i=0,j=-1,k;
	cin>>n;
	ll a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	ll ans=0,ma=0;
	for(i=0;i<n;i++)
	{
		j=a[i];
		ma=0;
		while(j!=-1)
		{
			j=a[j-1];
			ma++;
		}
		ans=max(ma,ans);
	}
	cout<<ans+1;
	return 0;
}