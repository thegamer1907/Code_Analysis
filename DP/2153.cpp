#include <bits/stdc++.h>
namespace xxx{
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define CaseT int T;cin >> T;for(int cas=1;cas<=T;cas++)
#define TCase int T;scanf("%d",&T);for(int cas=1;cas<=T;cas++)
#define clr(a,b) memset(a,b,sizeof(a))
#define all(x) (x).begin(),(x).end()
#define pb push_back
#define upd(a,b) (a%b?a/b+1:a/b)
#define random(a,b) ((a)+rand()%((b)-(a)+1))
#define fst first
#define sec second
#define MAIN int main
#define GG exit(0)
#define bug cout << "!!!" << endl;
#define bugc(x) cout << "! " << (x) << endl;
typedef unsigned int ui;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
const double EPS = 1e-8;
const double PI = acos(-1.0);
const int INF = 0x3f3f3f3f;
const int MOD = 1e9+7;
    
inline ll rd(){
    ll x=0,f=1;char ch=getchar();
    while(ch<'0'||ch>'9'){if(ch=='-')f=-1;ch=getchar();}
    while(ch>='0'&&ch<='9'){x=x*10+ch-'0';ch=getchar();}
    return x*f; 
}
    
ll pow_mod(ll a,ll n){
    if(n==0) return 1;
    ll x = pow_mod(a,n/2);
    ll ans = x*x%MOD;
    if(n&1) ans = ans*a%MOD;
    return ans;
}
    
}
using namespace xxx;
const int N = 1e5+20;

int n,m;
set<int>st;
int a[N],b[N];

MAIN(){
	n = rd(), m = rd();
	for(int i=1;i<=n;i++) a[i] = rd();
	for(int i=n;i>=1;i--) st.insert(a[i]), b[i] = st.size();
	while(m--){
		int x = rd();
		printf("%d\n",b[x]);
	} 
	GG;
}
