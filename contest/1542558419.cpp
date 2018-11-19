#include <bits/stdc++.h>

#define scan(x) scanf("%d",&x)
#define scan2(x,y) scanf("%d%d",&x,&y)
#define scan3(x,y,z) scanf("%d%d%d",&x,&y,&z)
#define FASTER std::ios::sync_with_stdio(false)
#define DEBUG(x) cout<<#x<<" = "<<x<<endl

#define pb push_back
#define mk make_pair
#define vp vector<pair<ll,ll> >
#define se second
#define fi first
#define vi vector<ll>
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define ll long long
#define rep(i,n) for(ll i=0;i<n;i++)
#define fab(i,a,b) for(ll i=a;i<=b;i++)
#define inp(n,a) for(ll i=0;i<n;i++){cin>>a[i];}
#define strToInt(x,z) istringstream y(x);y>>z  //(string,integer)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*b / __gcd(a,b);
#define MOD 1000000007
#define pi 3.14159265

using namespace std;

int main()
{
    //FASTER;
 	string s;
 	cin >> s;
 	int n ;
 	cin >> n;
 	string t = "",g;
 	set<char> g1,g0;
 	rep(i,n)
 	{
 		cin >> g;
 		if(g == s)
 		{
 			cout << "YES" <<endl;
 			return 0;
 		}
 		g1.insert(g[1]);
 		g0.insert(g[0]);

 	}

 	if(g1.find(s[0])!=g1.end() and g0.find(s[1])!=g0.end())
 		cout << "YES"<<endl;
 	else 
 		cout << "NO" <<endl;

	return 0;
}
