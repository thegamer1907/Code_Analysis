#include<bits/stdc++.h>
using namespace std;
//      std macros
typedef long long ll;
typedef pair<int ,int> pii;
typedef pair<ll ,ll> pll;
//      dereference
#define F first
#define S second
#define pb push_back
#define mp make_pair
//      loops
#define rep(i,n) for(int i=0;i<n;++i)
#define REP(i,a,b) for(int i=a;i<=b;++i)
#define PER(i,b,a) for(int i=b;i>=a;--i)
#define all(X) (X).begin(), (X).end()
//      I/O
#define sd(n) scanf("%d",&n)
#define sd2(x,y) scanf("%d%d",&x,&y)
#define sd3(x,y,z) scanf("%d%d%d",&x,&y,&z)
#define sll(n) scanf("%lld",&n)
#define sll2(x,y) scanf("%lld%lld",&x,&y)
#define sll3(x,y,z) scanf("%lld%lld%lld",&x,&y,&z)
//      debug
#define debug(x) cerr<<"debug->"<<#x<<"::"<<x<<endl
#define debug2(x,y) cerr<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n"
#define debug3(x,y,z) cerr<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\t"<<#z<<" :: "<<z<<"\n"
#define debug4(x,y,z,w) cerr<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\t"<<#z<<" :: "<<z<<"\t"<<#w<<" :: "<<w<<"\n"
//      set values
#define mset(n,k) memset(n,k,sizeof(n))
#define MOD 1000000007
ll INV2=500000004;
ll INV6=166666668;
//modular expo
ll power(ll a,ll b, ll c){
    ll x=1,y=a;
    while(b>0){
        if(b&1)
            x=(x*y)%c;
        y=(y*y)%c;
        b/=2;
    }
    return x%c;
}
//perfect numbers till 10^6 6, 28, 496, 8128
int dx[]={0,-1,0,1};
int dy[]={-1,0,1,0};//clockwise from left
int dr[]={1,1,0,-1,-1,-1, 0, 1};
int dc[]={0,1,1, 1, 0,-1,-1,-1};//anticlockwise from down
const int N = 1e5+5;
int n,k,a[N];
int main() {

	sd2(n,k);
	set<int>s;
	bool fl = 0;
	REP(i,1,n) {
		int num = 0;
		rep(j,k) {
			int x;
			sd(x);
			if(x)
				num+=(1<<j);
		}
		a[i] = num;
		s.insert(num);
		if(!num)
			fl = 1;
	}
	if(fl)
		printf("YES\n");
	else {
		int x = 0;
		rep(j,k)
            x+=(1<<j);
		REP(i,1,n) {
			int rem = a[i]^x;
			if(s.find(rem)!=s.end())
				fl = 1;
			vector<int>bits;
			rep(j,k) {
				if(rem&(1<<j))
					bits.pb(j);
			}
			int sz = bits.size();
			for(int j=1;j<(1<<sz);++j) {
				int nu = 0;
				for(int l = 0;l<sz;++l) {
					if(j&(1<<l))
						nu+=(1<<bits[l]);
				}
				if(s.find(nu)!=s.end())
					fl = 1;
			}
		}
		if(fl)
			printf("YES\n");
		else
			printf("NO\n");
	}




	return 0;
}
