# include <iostream>
# include <sstream>
# include <cstdio>
# include <cstdlib>
# include <algorithm>
# include <string>
# include <cstring>
# include <cmath>
# include <stack>
# include <queue>
# include <vector>
# include <list>
# include <map>
# include <set>
# include <deque>
# include <iterator>
# include <functional>
# include <bitset>
# include <climits>
# include <ctime>
using namespace std;
//#define max(a,b) ((a)>(b)?(a):(b))
//#define min(a,b) ((a)<(b)?(a):(b))
#define odd(x) ((x)&1)
#define sqr(x) ((x)*(x))
#define mp make_pair
#define pb push_back
#define fir first
#define sec second
#define all(x) (x).begin(),(x).end()
#define mem(a,x) memset(a,x,sizeof(a))
#define rep(i,a,b) for (int i=(a); i<=(b); ++i)
#define per(i,a,b) for (int i=(a); i>=(b); --i)
#define rep_it(it,x) for (__typeof((x).begin()) it=(x).begin(); it!=(x).end(); it++)
#define ____ puts("\n_______________\n\n")
#define debug(x) ____; cout<< #x << " => " << (x) << endl
#define debug_pair(x) cout<<"\n{ "<<(x).fir<<" , "<<(x).sec<<" }\n"
#define debug_arr(x,n) ____; cout<<#x<<":\n"; rep(i,0,n) cout<<#x<<"["<<(i)<<"] => "<<x[i]<<endl
#define debug_arr2(x,n,m) ____; cout<<#x<<":\n"; rep(i,0,n) rep(j,0,m) cout<<#x<<"["<<(i)<<"]["<<(j)<<"]= "<<x[i][j]<<((j==m)?"\n\n":"    ")
#define debug_set(x) ____; cout<<#x<<": \n"; rep_it(it,x) cout<<(*it)<<" "; cout<<endl
#define debug_map(x) ____; cout<<#x<<": \n"; rep_it(it,x) debug_pair(*it)
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef vector<int> vi;
const int oo = /*2 * 1000 * 1000 * 1000*/0x3f3f3f3f;
const ll ooo=9223372036854775807ll;
const int _cnt = 1000 * 1000 + 7;
const int _p = 1000 * 1000 * 1000 + 7;
const int N=200105;
const double PI=acos(-1.0);
const double eps=1e-6;
int o(int x) { return x%_p; }
int gcd(int a, int b) { return b ? gcd(b, a%b) : a; }
int lcm(int a, int b) { return a / gcd(a, b)*b; }

void file_put() {
    freopen("filename.in", "r", stdin);
    freopen("filename.out", "w", stdout);
}

int n,f[55][55][55][55],d[55][55],ss[55],head[55],nxt[105],e[105],w[105],tot=0,ans=oo,x,y,z,dd[55],s,m;

void I(int x,int y,int z){
	e[++tot]=y,w[tot]=z,nxt[tot]=head[x],head[x]=tot; dd[x]++; d[x][y]=z;
}

void dfs(int x,int p){
	for (int i=head[x]; i; i=nxt[i]) if (e[i]!=p) dfs(e[i],x);
	ss[p]+=ss[x];
}

int dp(int x,int y,int k,int a){
	int &ans=f[x][y][k][a];
	if (ans!=-1) return ans;
	if (k==0) return ans=0;
	if (dd[y]==1) return dp(y,x,k-a,k-a)+d[x][y];
	int g[55]; mem(g,0);
	g[0]=oo; rep(i,1,n) g[i]=-oo;
	for (int i=head[y]; i; i=nxt[i]) if (e[i]!=x)
		per(j,a,1) rep(t,1,j) g[j]=max(g[j],min(g[j-t],dp(y,e[i],k,t)+d[x][y]));
	return ans=g[a];
}

int main() {
    //file_put();
    
    scanf("%d",&n);
    rep(i,1,n-1) scanf("%d%d%d",&x,&y,&z),I(x,y,z),I(y,x,z);
	scanf("%d%d",&s,&m);
	rep(i,1,m) scanf("%d",&x),ss[x]++;
	dfs(s,0); mem(f,-1);
	for (int i=head[s]; i; i=nxt[i]) ans=min(ans,dp(s,e[i],m,ss[e[i]]));
	printf("%d\n",ans);

    return 0;
}

