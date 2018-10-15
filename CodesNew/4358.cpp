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
  int n;
  cin>>n;
  cin.ignore();
  vector<string> v1;
  rep(i,0,n){
    string s;
    cin>>s;
    v1.pb(s);
    cin.ignore();
  }
  int flag=0;
  vector<char> f;
  vector<vector<char> > ans;
//  ans.pb(v1[n-1]);
  //string f;
  ans.resize(n+1);
  rep(i,0,sz(v1[n-1]))f.pb(v1[n-1][i]);
  repv(i,0,n-1){
  //  rep(j,0,sz(f))cout<<f[j];
//    cout<<endl;
    if(flag)ans[i].pb(v1[i][0]);
    else{
    int ind=min(sz(v1[i]),sz(f));
    rep(j,0,min(sz(v1[i]),sz(f))){
      if(v1[i][j]>f[j]){ind=j;break;}
      else if(v1[i][j]<f[j]){ind=sz(v1[i]);break;}
    }
  //  cout<<ind<<endl;
    if(ind==1)flag=1;
    rep(j,0,ind)ans[i].pb(v1[i][j]);
    f.clear();
    rep(j,0,ind){
      f.pb(v1[i][j]);
    }
    }
  }
  rep(i,0,sz(v1[n-1])){
    ans[n-1].pb(v1[n-1][i]);
  }
  rep(i,0,n){
    rep(j,0,sz(ans[i]))cout<<ans[i][j];
    cout<<endl;
//    cout<<ans[i]<<endl;
  }

  return 0;
}
