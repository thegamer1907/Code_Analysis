#include <bits/stdc++.h>
using namespace std;

#define   f(i,n) 					for(i=0;i<(n);i++)
#define   ff(i,n) 					for( i=1;i<=(n);i++)
#define   m0(X) 					memset((X), 0, sizeof((X)))
#define   m1(X) 					memset((X), -1, sizeof((X)))
#define   pb(x) 					push_back(x)
#define   F     					first
#define   S  						second
#define   MP 						make_pair
#define   inf						(1LL << 60LL)
#define	  debug1(x)                	cerr << #x << "= " << x << endl;
#define   debug2(x, y)             	cerr << #x << "= " << x << " | " << #y << "= " << y << endl;
#define   debug3(x, y, z)          	cerr << #x << "= " << x << " | " << #y << "= " << y << " | " << #z << "= " << z << endl;
#define   debug4(a, b, c, d)       	cerr << #a << "= " << a << " | " << #b << "= " << b << " | " << #c << "= " << c << " | " << #d << "= " << d << endl;
#define   debug5(a, b, c, d, x)     cerr << #a << "= " << a << " | " << #b << "= " << b << " | " << #c << "= " << c << " | " << #d << "= " << d << " | "<< #x << "= " << x << endl;

typedef long long ll;

void rd(ll &x){scanf("%lld",&x);}
void rd(ll &x,ll &y){scanf("%lld%lld",&x,&y);}
void rd(ll &x,ll &y,ll &z){scanf("%lld%lld%lld",&x,&y,&z);}
void rd(ll &x,ll &y,ll &z,ll &s){scanf("%lld%lld%lld%lld",&x,&y,&z,&s);}

/*
ya
4
ah
oy
to
ha
*/

map <char, bool> mp , pm;

int main()
{
	string s, a;
	ll n, i;
	cin>>s;
	rd(n);
	while(n--){
		cin>>a;
		if(a==s){
			cout<<"YES";
			return 0;
		}
		mp[a[0]]=1;
		pm[a[1]]=1;
	}
	if(mp[s[1]]==1 && pm[s[0]]==1) cout<<"YES";
	else cout<<"NO";
	
	return 0;
}
















