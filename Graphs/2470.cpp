#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

#define pb push_back
#define ull unsigned long long
#define ll long long
#define F first
#define S second
#define PI acos(-1)
#define EPS 1e-9
#define BASE 31ll
#define BASE2 53ll
#define ld double
#define MAX 1000000000
#define NIL 0
#define INF 1e15
#define infi 1000000000
#define rd(a) scanf("%d",&a)
#define rd2(a,b) scanf("%d %d",&a,&b)
#define rd3(a,b,c) scanf("%d %d %d",&a,&b,&c)
#define rdll(a) scanf("%I64d",&a)
#define sz(a) (int) a.size()
#define lp(i,a,n) for(int i=(a); i<=(n) ; ++i)
#define lpd(i,n,a) for(int i=(n); i>=(a) ; --i)
#define pi acos(-1)
#define lc (x << 1)
#define rc (x << 1 | 1)
#define cp(a,b)                 ( (conj(a)*(b)).imag() )	// a*b sin(T), if zero -> parllel
#define dp(a,b)                 ( (conj(a)*(b)).real() )	// a*b cos(T), if zero -> prep
#define angle(a)                (atan2((a).imag(), (a).real()))
#define X real()
#define Y imag()
#define vec(a,b)                ((b)-(a))
#define vvi vector<vector<int>>
#define f first
#define s second


typedef complex<double>point;
typedef complex<double>CX;
typedef pair<int,int>ii;
typedef pair<ii,int>tri;
typedef pair<vector<int>,int>vii;
typedef pair<int, int> pii;
typedef pair<ii,ii> line;
typedef pair<ll, ll> pll;
typedef vector<int> vi;

const int N=200005;


ll mod=(1e9+7);
int gcd(int a, int b) { return b == 0 ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return a * (b / gcd(a, b)); }
bool is_vowel(char c){if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')return 1;return 0;}
ld getDistance(ld x1,ld y1,ld x2,ld y2){return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));}
ll extended_euclidean(ll a,ll b,ll &x,ll &y){if(b==0){x=1;y=0;return a;}ll g = extended_euclidean(b,a%b,y,x);y -= (a/b)*x;return g;}
ll power(ll base,ll p){if(p==1)return base;if(!p)return 1ll;ll ret=power(base,p/2);ret*=ret;ret%=mod;if(p&1)ret*=base;return ret%mod;}


int c[N],sum=0;
vector<int>adj[N];
void dfs(int node,int last){
    if(c[node]!=last){
        last=c[node];
        sum++;
    }
    lp(i,0,(int)adj[node].size()-1)dfs(adj[node][i],last);
}
int main(){
   // freopen("test.in","r",stdin);
    int n;
    rd(n);
    lp(i,2,n){
       int p;
       rd(p);
       adj[p].pb(i);
    }
    lp(i,1,n)rd(c[i]);
    dfs(1,0);
    cout<<sum;
    return 0;
}
