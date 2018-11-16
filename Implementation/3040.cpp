#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef pair<ld,ld> pd;

typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<pd> vpd;

typedef map<int,int> mii;
typedef map<char,int> mci;

#define pb push_back
#define mp make_pair
#define itr ::iterator it
#define fi first
#define se second
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

#define all(x) (x).begin(),(x).end()
#define rep(i,a,n) for(int i=0;i<n;i++)
#define dec(i,a,n) for(int i=n-1;i>=a;i--)
#define SZ(x) ((int)(x).size())
#define remax(a,b) a=max(a,b)
#define remin(a,b) a=min(a,b)
#define LC(i) 2*(i)+1
#define RC(i) 2*(i)+2
#define MID(i,j) ((i)+(j))/2
#define gcd(a,b) __gcd((a),(b))
#define lcm(a,b) ((a)*(b))/gcd((a),(b))

#define print(v) for (auto it = v.begin(); it != v.end(); ++it) cout << *it << ' '; cout << endl;
#define printm(m) for (auto it = m.begin(); it != m.end(); ++it) cout << it->first<<' '<<it->second << endl; cout << endl;
#define disparr(arr,n) for(int i=0;i<(n);i++)   cout<<arr[i]<<' ';  cout<<endl;
#define debug(x) cout << x << endl;
#define debug2(x,y) cout << x << " " << y << endl;
#define debug3(x,y,z) cout << x << " " << y << " " << z << endl;


const int MOD = 1000000007;
const ll INF = 1e18;
const ld PI=3.141592653589793238462643383279502884197169399375105820974944;
ll fact(int n)
{
	if(n==1)
		return 1;
	else
		return n*fact(n-1);
}
int main()
{
	int a,b;
	cin>>a>>b;
	remin(a,b);
	ll t=fact(a);
	cout<<t;
	return 0;
}