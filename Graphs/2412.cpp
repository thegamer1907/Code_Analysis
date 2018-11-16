#include<bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define EB emplace_back
#define MP make_pair
#define all(o) (o).begin(), (o).end()
#define mset(m,v) memset(m,v,sizeof(m))
#define fr(i,n) for(lli i=0;i<n;++i)
#define rep(i,a,b) for(lli i=a;i<=b;++i)
#define per(i,b,a) for(lli i=b;i>=a;--i)
#define remin(a,b) (a=min((a),(b)))
#define remax(a,b) (a=max((a),(b)))
#define chartostr(x) string(1,(char)(x))
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define endl '\n'
typedef long int li;typedef long long int lli;typedef long double ld;
typedef pair< lli,lli > ii;typedef pair<lli,ii> edge;
typedef vector<lli> vi;typedef vector<ii> vii;typedef vector<edge> edgelist;
typedef vector<vi> graph;lli MOD=1000000007;long double EPS=1e-9;

template <class T> inline T binpow(T p,T e,T M){lli ret = 1;for(; e > 0; e >>= 1){
if(e & 1) ret = (ret * p) % M;p = (p * p) % M;}return (T)ret;}
template <class T> inline T gcd(T a,T b){if(b==0)return a;return gcd(b,a%b);}
template <class T> inline T modinverse(T a,T M){return bigmod(a,M-2,M);}
lli countbits(lli n){lli count=0;while(n){n = n&(n-1);count++;}return count;}
lli tolli(string s){lli sm;stringstream ss(s);ss>>sm;return sm;}
vi tobinary(lli n){vi bin;while(n){bin.EB(n%2);n/=2;};reverse(all(bin));return bin;}

void pre(){

}
graph g;
vi nodes;
lli ans=0;
void dfs(lli v,lli h){
	remax(ans,h);
	for(auto x:g[v]){
		dfs(x,h+1);
	}
}

void solve(){
	lli n,a;
	cin>>n;
	g.resize(n+1);
	fr(i,n){
		cin>>a;
		if(a==-1)nodes.EB(i+1);
		else{
			g[a].EB(i+1);
		}
	}
	fr(i,nodes.size()){
		dfs(nodes[i],1);
	}
	cout<<ans<<endl;
}

int main(){
	fastIO;
	pre();
	int t=1;
	//cin>>t;
	for(int i=1;i<=t;i++){
		solve();
	}
}