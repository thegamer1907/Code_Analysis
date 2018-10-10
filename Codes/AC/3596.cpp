#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> ii;
typedef vector< ii > vii;
typedef vector<int> vi;
typedef vector< vi > vvi;
typedef	vector<pair<int,pair<int,int > > > viii;
typedef long long int lli;

#define rep(i,a,b) for(int i=a;i<b;i++)
#define repv(i,a,b) for(int i=b-1;i>=a;i--)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define sz(a) (int)(a.size())

#define si(n) scanf("%d",&n)
#define dout(n) printf("%d\n",n)
#define slli(n) scanf("%llid",&n)
#define lldout(n) printf("%llid\n",n)
const int N = (int)2e5 + 10;
vvi v;
lli vis[N],vis1[N];
//int vis1[52][52],v[52][52];
/*int dfs(int t){
	vis[t]=1;
	//v[i][j]=val;
	rep(i,0,v[t].size()){
		if(vis[t]==0){
			dfs(v[t][i]);
		}
	}
	// if(v[i][j-1]==-1 and vis1[i][j-1]==0 and v[i+1][j-1]!=v[i][j] and v[i][j-2]!=v[i][j] and v[i-1][j-1]!=v[i][j])dfs(i,j-1,val);
	// if(v[i][j+1]==-1 and vis1[i][j+1]==0 and v[i][j+2]!=v[i][j] and v[i+1][j+1]!=v[i][j] and v[i-1][j+1]!=v[i][j])dfs(i,j+1,val);
	// if(v[i-1][j]==-1 and vis1[i-1][j]==0 and v[i-1][j-1]!=v[i][j] and v[i-1][j+1]!=v[i][j] and v[i-2][j]!=v[i][j])dfs(i-1,j,val);
	// if(v[i+1][j]==-1 and vis1[i+1][j]==0 and v[i+2][j]!=v[i][j] and v[i+1][j-1]!=v[i][j] and v[i+1][j+1]!=v[i][j])dfs(i+1,j,val);
	// return 0;
}*/
lli lcm(lli a,lli b) { return a*(b/__gcd(a,b));}
lli pow(lli x, lli y, lli p) {
    lli res = 1;
    x = x % p;
    while (y > 0)
    {
        if (y & 1) res = (res*x) % p;
        y = y>>1;
        x = (x*x) % p;
    }
    return res;
}
map<int,int> ph;
int main(){
	lli n,m,k;
	cin>>n>>m>>k;
	lli x,s;
	lli a[m+9],b[m+9],c[k+9];
	vector<lli> d;
	cin>>x>>s;
	vector<pair<lli,lli> > v1;
	lli ans=1e18;
	rep(i,0,m)cin>>a[i];
	rep(i,0,m){
		cin>>b[i];
		v1.pb(mp(b[i],a[i]));
	}
	rep(i,0,k)cin>>c[i];
	rep(i,0,k){int pp;cin>>pp;d.pb(pp);}
	int j=0;
	ans=x*n;
	sort(v1.begin(),v1.end());
	rep(i,0,m){
		lli h=s-v1[i].first;
		if(h>=0){
		lli u =(upper_bound(d.begin(),d.end(),h)-d.begin());
		//cout<<u<<" "<<v1[i].second<<endl;
		if(u!=0){
			if(n<=c[u-1])ans=0;
			else
			ans=min(ans,(n-c[u-1])*v1[i].second);
		}
		else if(u==0 and v1[i].first<=s)ans=min(ans,v1[i].second*n);
		//cout<<h<<" "<<n-c[i]<<" "<<v1[i].second<<endl;
	//	while(j<k){
	//		if(d[j]<=h){ans=min(ans,(n-c[j])*v1[i].second);j++;}
	//		else break;
		//	cout<<h<<" "<<n-c[i]<<" "<<v1[i].second<<"hi"<<endl;	
	//	}
	}}
	rep(i,0,k){
		if(1 and d[i]<=s)ans=min((n-c[i])*x,ans);
	}
	if(ans<=0)ans=0;
	cout<<ans<<endl;
	return 0;
}