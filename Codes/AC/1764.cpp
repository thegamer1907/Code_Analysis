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

void pre(){

}
lli n,m,k;
bool check(lli x){
	lli numl=0;
	for(lli i=1;i<=n;i++){
		numl+=min(x/i,m);
	}
	return (numl<k);

}

void solve(){
	cin>>n>>m;
	if(n>m)swap(n,m);
	cin>>k;
	lli ans=0;
	for(lli step=1000000000000;step;step>>=1){
		while(check(ans+step))ans+=step;
	}
	cout<<ans+1<<endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	//freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
	pre();
	int t=1;
	//cin>>t;
	for(int i=1;i<=t;i++){
		//cout<<"Case #"<<i<<": ";
		solve();
	}
}