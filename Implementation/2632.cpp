#include <bits/stdc++.h>
namespace xxx{
using namespace std;
#define FAST_IO ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define CaseT int T;cin >> T;for(int cas=1;cas<=T;cas++)
#define TCase int T;scanf("%d",&T);for(int cas=1;cas<=T;cas++)
#define clr(a,b) memset(a,b,sizeof(a))
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define pb push_back
#define _1s __builtin_popcountll
#define sqr(x) ((x)*(x))
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
 
}using namespace xxx;
const int N = 10;
const int mod = 10000007;

MAIN(){
	int a, b, c;
	cin >> a >> b >> c;
	int ans = 1;
	ans = max(ans,a+b+c);
	ans = max(ans,(a+b)*c);
	ans = max(ans,a*(b+c));
	ans = max(ans,a*b*c);
	cout << ans << endl;
	GG;
}