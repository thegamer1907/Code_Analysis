//Code Author:-code_kika //
//Institution:-IIT(BHU)  //
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>
	
using namespace std;

//io
#define sf(x) scanf("%d",&x);
#define sf2(x,y) scanf("%d %d",&x,&y);
#define sf3(x,y,z) scanf("%d %d %d",&x,&y,&z);
#define pf(x) printf("%d",x);
#define pf2(x,y) printf("%d %d",x,y);
#define pf3(x,y,z) printf("%d %d %d",x,y,z);
#define sfl(x) scanf("%lld",&x);
#define sfl2(x,y) scanf("%lld %lld",&x,&y);
#define sfl3(x,y,z) scanf("%lld %lld %lld",&x,&y,&z);
#define pfl(x) printf("%lld",x);
#define pfl2(x,y) printf("%lld %lld",x,y);
#define pfl3(x,y,z) printf("%lld %lld %lld",x,y,z);
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

//basic
#define pb push_back
#define ll long long
#define mp make_pair
#define fi first
#define se second
#define mod 1000000007LL

//typedefs
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vpii vector<pii>
#define vpll vector<pll>
#define vll vector<ll>
#define vi vector<int>

//functions
#define all(c) c.begin(),c.end()
#define fill(c,val) memset(c,val,sizeof(c))

//debug
#ifdef TRACE
#define trace(x)                 cerr << #x << ": " << x << endl;
#define trace1(x)                cerr << #x << ": " << x << endl;
#define trace2(x, y)             cerr << #x << ": " << x << " | " << #y << ": " << y << endl;
#define trace3(x, y, z)          cerr << #x << ": " << x << " | " << #y << ": " << y << " | " << #z << ": " << z << endl;
#define trace4(a, b, c, d)       cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << endl;
#define trace5(a, b, c, d, e)    cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << " | " << #e << ": " << e << endl;
#define trace6(a, b, c, d, e, f) cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << " | " << #e << ": " << e << " | " << #f << ": " << f << endl;
#else
#define trace(x)
#define trace1(x)
#define trace2(x, y)
#define trace3(x, y, z)
#define trace4(a, b, c, d)
#define trace5(a, b, c, d, e)
#define trace6(a, b, c, d, e, f)
#endif
ll a[2000005];
int main(){
	int i,n;
	vector<pair<ll,int>> v;
	map<ll,int> m;
	cin>>n;
	ll sum=0;
	for(i=0;i<n;i++){
		v.pb(mp(sum,i));
		cin>>a[i];
		sum+=a[i];
	}
	v.pb(mp(sum,n));
	sum=0;
	for(i=n-1;i>=0;i--){
		m[sum]=i+2;
		sum+=a[i];
	}
	m[sum]=1;
	ll ans=0;
	for(i=0;i<v.size();i++){
		if(m[v[i].fi]>v[i].se){
			ans=max(ans,v[i].fi);
		}
	}
	cout<<ans;

}