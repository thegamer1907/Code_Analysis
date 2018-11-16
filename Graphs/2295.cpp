#include<bits/stdc++.h>
using namespace std;

#define LL long long
#define ULL unsigned long long int
LL INF=10000000000000001;
#define mx 100005
typedef pair<int,int> pii;
typedef pair<LL,LL> pll;
typedef vector<int> vi;
typedef vector<LL> vl;
typedef vector<pii> vii;
typedef vector<pll> vll;

#define READ 	freopen("in.txt","r",stdin)
#define WRITE  	freopen("out.txt","w",stdout)
#define BOOST	ios_base::sync_with_stdio(false)


#define sf 	scanf
#define pf 	printf
#define F  	first
#define S  	second
#define pb 	push_back
#define NL	pf("\n")
#define si(x)		sf("%d",&x);
#define sii(x,y)	sf("%d%d",&x,&y);
#define siii(x,y,z)	sf("%d%d%d",&x,&y,&z);
#define sl(x)		sf("%lld",&x);
#define sll(x,y)	sf("%lld%lld",&x,&y);
#define slll(x,y,z)	sf("%lld%lld%lld",&x,&y,&z);
#define clr(x,y) 	memset(x,y,sizeof (x) )
#define ch 			printf("Came Here!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n")
#define SV(v)		sort(v.begin(),v.end())
#define SVR(v,cmp)	sort(v.begin(),v.end(),cmp)
#define ALL(v)		v.begin(),v.end()
#define FOR(i,n)	for(int i=0;i<n;i++)
#define loop(i,s,n) for(int i=s;i<n;i++)
#define rev(i,s,n)	for(int i=n;i>=s;i--)
// graph direction array [4]
//LL X[4]={0,0,1,-1};
//LL Y[4]={1,-1,0,0};
// graph direction array [8]
//int X[8]={0,0,1,-1,-1,1,1,-1};
//int Y[8]={1,-1,0,0,-1,-1,1,1};
// Knight Direction Array
//int X[8] = {1,1,2,2,-1,-1,-2,-2};
//int Y[8] = {2,-2,1,-1,2,-2,1,-1};

// comparison function for sort
//bool asc(LL a,LL b){
//    return a<b;
//}
//bool desc(int a,int b){
//    return a>b;
//}
//
//LL mod =1000000007;
//LL powerMod(LL a,LL b){
//	if(b==0)return 1%mod;
//	LL x=powerMod(a,b/2);
//	x = (x%mod*x%mod)%mod;
////	if(x>=mod)x%=mod;
//	if(b%2==1){
//		x = (x%mod*a%mod)%mod;
////		if(x>=mod)x%=mod;
//	}
//	return x%mod;
//}
// ----------------------------------------------

int n;

vi adj[2005];
int D[2005];
bool vis[2005];
vi cs;
int c;
int dfs( int u ){
	c++;
	vis[u] = 1;
	if( adj[u].size()==0 )return D[u] = 1;
	int x = 0;
	FOR(i,adj[u].size()){
        if( !vis[ adj[u][i] ] )
			x = max( x,1+dfs( adj[u][i] ) );
		else
			x = max( x,1+D[ adj[u][i] ] );
	}
	return  D[u] = x;
}



int main(){
//	READ;
//	WRITE;
//	BOOST;
	int m;
	cin>>n;
	FOR(i,n){
		cin>>m;
		if( m!= -1 ){
            adj[m].pb(i+1);
		}
	}
	clr(vis,0);
	clr(D,0);
	int ans = 0;
	FOR(i,n){
		int u = i+1;
        if( !vis[u] ){
			dfs(u);
        }
	}
	FOR(i,n)ans = max( ans,D[i+1] );
//	FOR(i,n)cout<<D[i+1]<<" ";
//	NL;
	cout<<ans<<endl;

    return 0;
}
