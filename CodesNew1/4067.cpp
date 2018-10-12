#include<bits/stdc++.h>
using namespace std;
#define s(n) scanf("%lld",&n)
#define p(n) printf("%lld\n",n)
#define sf scanf
#define pf printf
#define ll long long int
#define vll vector<ll>
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define hell 1000000007
#define endl "\n"
#define inc(i,a,b) for(i=a;i<b;i++)
#define dec(i,a,b) for(i=a;i>b;i--)
#define all(c) c.begin(), c.end()
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++)
#define sz(a) (ll)((a).size())
#define present(container, element) (container.find(element) != container.end())
#define cpresent(container, element) (find(all(container),element) != container.end())
#define trace(x)                 cerr << #x << ": " << x << endl;
#define trace1(x)                cerr << #x << ": " << x << endl;
#define trace2(x, y)             cerr << #x << ": " << x << " | " << #y << ": " << y << endl;
#define trace3(x, y, z)          cerr << #x << ": " << x << " | " << #y << ": " << y << " | " << #z << ": " << z << endl;
#define trace4(a, b, c, d)       cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << endl;
#define trace5(a, b, c, d, e)    cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << " | " << #e << ": " << e << endl;
#define trace6(a, b, c, d, e, f) cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << " | " << #e << ": " << e << " | " << #f << ": " << f << endl;

vll v;

signed main()
{
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	ll t=1,n,m,i,j,k,sum=0,ans=0;
	string s;
	cin>>n>>t;
	for(i=0;i<n;i++){
		cin>>k;
		v.pb(k);
	}
	v.pb(0);
	reverse(v.begin(),v.end());
	for(i=1;i<=n;i++){
		v[i]+=v[i-1];
	}
	sum=v[n];
	while(t--){
		cin>>k;
		sum=sum-k;
		if(sum<=0){
			sum=v[n];
		}
		ll low=0,high=n-1,mid;
		while(low<=high){
			mid=(low+high)/2;
			if(sum>v[mid]){
				ans=mid+1;
				low=mid+1;
			}
			else{
				high=mid-1;
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}