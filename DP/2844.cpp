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
#define remin(a,b) (a=min((a),(b)))
#define remax(a,b) (a=max((a),(b)))
#define endl '\n'
typedef long long int lli;
typedef long double ld;
typedef pair< lli,lli > ii;
typedef vector<lli> vi;
typedef vector<ii> vii;
typedef vector<vi> graph;
lli MOD=1000000007;long double EPS=1e-9;

lli dp[2020][2020];

void solve(){
	lli n,k;
	cin>>n>>k;
	rep(i,1,n){
		dp[i][1]=1;
	}
	for(int k=1;k<2000;k++){
		rep(i,1,n){
			for(int j=1;j*i<=n;j++){
				dp[j*i][k+1]+=dp[i][k];
				dp[j*i][k+1]%=MOD;
			}
		}
	}
	lli ans=0;
	fr(i,n){
		ans=(ans+dp[i+1][k])%MOD;
	}
	cout<<ans<<endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
	int t=1;
	//cin>>t;
	for(int i=1;i<=t;i++){
		//cout<<"Case #"<<i<<": ";
		solve();
	}
}