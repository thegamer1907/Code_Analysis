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
const int N = (int)1e5 + 10;
//vvi v;
vector<vector<lli> > v;
lli cnt=0;
lli vis[N];
//int vis1[52][52],v[52][52];
int dfs(int t,int p){
	vis[t]=1;
  cnt++;
	//v[i][j]=val;
	rep(i,0,v[t].size()){
    if(v[t][i]==p){return 0;}
		if(vis[v[t][i]]==0){
			dfs(v[t][i],p);
		}
	}
	// if(v[i][j-1]==-1 and vis1[i][j-1]==0 and v[i+1][j-1]!=v[i][j] and v[i][j-2]!=v[i][j] and v[i-1][j-1]!=v[i][j])dfs(i,j-1,val);
	// if(v[i][j+1]==-1 and vis1[i][j+1]==0 and v[i][j+2]!=v[i][j] and v[i+1][j+1]!=v[i][j] and v[i-1][j+1]!=v[i][j])dfs(i,j+1,val);
	// if(v[i-1][j]==-1 and vis1[i-1][j]==0 and v[i-1][j-1]!=v[i][j] and v[i-1][j+1]!=v[i][j] and v[i-2][j]!=v[i][j])dfs(i-1,j,val);
	// if(v[i+1][j]==-1 and vis1[i+1][j]==0 and v[i+2][j]!=v[i][j] and v[i+1][j-1]!=v[i][j] and v[i+1][j+1]!=v[i][j])dfs(i+1,j,val);
	// return 0;
}
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
map<lli,lli> ph,vis1;
lli ph2[200005];
int main()
{
  int n,m;
  cin>>n>>m;
  lli a[n+3][m+3];
  vector<vector<pair<int,int> > > v1;
  vector<vector<int> > v2;
  v1.resize(m+2);
  v2.resize(n+2);
  rep(i,0,n+2){
    v2[i].pb(i);
  }
  rep(i,0,n){
    rep(j,0,m)cin>>a[i][j];
  }
  rep(i,0,m){
    int h=1;
    rep(j,1,n){
      if(a[j][i]<a[j-1][i]){v1[i+1].pb(mp(h,j));h=j+1;}
    }
    v1[i+1].pb(mp(h,n));
	//	cout<<i+1<<" "<<h<<" "<<n<<endl;
  }
  rep(i,1,m+1){
    rep(j,0,sz(v1[i])){
      v2[v1[i][j].first].pb(v1[i][j].second);
      //if(v1[i][j].first==1)cout<<v1[i][j].second<<endl;
    }

  }
	int h=1;
  rep(i,1,n+1){

		//h=max(v2[i][sz(v2)-1],h);
		//v2[i].pb(h);
    sort(v2[i].begin(),v2[i].end());
		if(h>v2[i][sz(v2[i])-1])v2[i].pb(h);
		h=v2[i][sz(v2[i])-1];
//		cout<<h<<"hi"<<endl;
  }
  //rep(i,0,sz(v2[1])){
//   cout<<v2[1][i]<<" ";
//  }
  //cout<<v2[1][sz(v2[1])-1]<<endl;
  int k;
  cin>>k;
  while(k--){
    int l,r;
    cin>>l>>r;
    if(v2[l][sz(v2[l])-1]>=r)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    //int u=(lower_bound())
  }
  return 0;
}
