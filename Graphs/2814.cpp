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

void solve(){
	lli n,m,a,b;
	set<lli> st[100100];
	cin>>n>>m;
	lli arr[n+1];
	rep(i,1,n)cin>>arr[i];
	fr(i,m){
		cin>>a>>b;
		if(arr[a]!=arr[b]){
			st[arr[a]].insert(arr[b]);
			st[arr[b]].insert(arr[a]);			
		}
	}
	lli mxclr=0;
	lli mxval=-1;
	rep(i,1,100000){
		if((lli)st[i].size()>mxval){
			mxclr=i;
			mxval=st[i].size();
		}
	}
	sort(arr+1,arr+n+1);
	if(mxval==0)mxclr=arr[1];
	cout<<mxclr;
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